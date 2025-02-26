#include <gtest/gtest.h>

#include "device_server.h"
#include "nirfmxspecan/nirfmxspecan_service.h"

namespace ni {
namespace tests {
namespace system {

namespace rfmxspecan = nirfmxspecan_grpc;

const int kInvalidRsrc = -200220;
const int kInvalidRFmxSpecAnSession = -380598;
const char* kRFmxSpecAnErrorResourceNotFoundMessage = "-200220: Device identifier is invalid.";
const char* kRFmxSpecAnTestRsrc = "FakeDevice";
const char* kRFmxSpecAnOptionsString = "Simulate=1, DriverSetup=Model:5663E";
const char* kRFmxSpecAnTestSession = "SessionName";
const char* kRFmxSpecAnTestInvalidRsrc = "";

class NiRFmxSpecAnSessionTest : public ::testing::Test {
 protected:
  NiRFmxSpecAnSessionTest()
      : device_server_(DeviceServerInterface::Singleton()),
        nirfmxspecan_stub_(rfmxspecan::NiRFmxSpecAn::NewStub(device_server_->InProcessChannel()))
  {
    device_server_->ResetServer();
  }

  virtual ~NiRFmxSpecAnSessionTest() {}

  std::unique_ptr<rfmxspecan::NiRFmxSpecAn::Stub>& GetStub()
  {
    return nirfmxspecan_stub_;
  }

  ::grpc::Status call_initialize(const char* resource_name, const char* option_string, const char* session_name, rfmxspecan::InitializeResponse* response)
  {
    ::grpc::ClientContext context;
    rfmxspecan::InitializeRequest request;
    request.set_resource_name(resource_name);
    request.set_option_string(option_string);
    request.set_session_name(session_name);

    ::grpc::Status status = GetStub()->Initialize(&context, request, response);
    return status;
  }

  void expect_error_string(nidevice_grpc::Session& session, google::protobuf::int32 error_code, const char* expected_error_string)
  {
    ::grpc::ClientContext context;
    rfmxspecan::GetErrorRequest error_request;
    error_request.mutable_instrument()->set_id(session.id());
    rfmxspecan::GetErrorResponse error_response;
    ::grpc::Status status = GetStub()->GetError(&context, error_request, &error_response);
    EXPECT_TRUE(status.ok());
    EXPECT_STREQ(expected_error_string, error_response.error_description().c_str());
    EXPECT_EQ(error_code, error_response.error_code());
  }

 private:
  DeviceServerInterface* device_server_;
  std::unique_ptr<rfmxspecan::NiRFmxSpecAn::Stub> nirfmxspecan_stub_;
};

TEST_F(NiRFmxSpecAnSessionTest, InitializeSessionWithDeviceAndSessionName_CreatesDriverSession)
{
  rfmxspecan::InitializeResponse response;
  ::grpc::Status status = call_initialize(kRFmxSpecAnTestRsrc, kRFmxSpecAnOptionsString, kRFmxSpecAnTestSession, &response);

  EXPECT_TRUE(status.ok());
  EXPECT_EQ(0, response.status());
  EXPECT_NE(0, response.instrument().id());
}

TEST_F(NiRFmxSpecAnSessionTest, InitializeSessionWithDeviceAndNoSessionName_CreatesDriverSession)
{
  rfmxspecan::InitializeResponse response;
  ::grpc::Status status = call_initialize(kRFmxSpecAnTestRsrc, kRFmxSpecAnOptionsString, "", &response);

  EXPECT_TRUE(status.ok());
  EXPECT_EQ(0, response.status());
  EXPECT_NE(0, response.instrument().id());
}

TEST_F(NiRFmxSpecAnSessionTest, InitializeSessionWithoutDevice_ReturnsDriverError)
{
  rfmxspecan::InitializeResponse response;
  ::grpc::Status status = call_initialize(kRFmxSpecAnTestInvalidRsrc, "", "", &response);

  EXPECT_TRUE(status.ok());
  EXPECT_EQ(kInvalidRsrc, response.status());
  EXPECT_EQ(0, response.instrument().id());
}

TEST_F(NiRFmxSpecAnSessionTest, InitializedSession_CloseSession_ClosesDriverSession)
{
  rfmxspecan::InitializeResponse init_response;
  call_initialize(kRFmxSpecAnTestRsrc, kRFmxSpecAnOptionsString, kRFmxSpecAnTestSession, &init_response);

  nidevice_grpc::Session session = init_response.instrument();
  ::grpc::ClientContext context;
  rfmxspecan::CloseRequest close_request;
  close_request.mutable_instrument()->set_id(session.id());
  close_request.set_force_destroy(rfmxspecan::Boolean::BOOLEAN_FALSE);
  rfmxspecan::CloseResponse close_response;
  ::grpc::Status status = GetStub()->Close(&context, close_request, &close_response);

  EXPECT_TRUE(status.ok());
  EXPECT_EQ(0, close_response.status());
}

TEST_F(NiRFmxSpecAnSessionTest, ErrorFromDriver_GetErrorMessage_ReturnsUserErrorMessage)
{
  rfmxspecan::InitializeResponse init_response;
  call_initialize(kRFmxSpecAnTestInvalidRsrc, "", "", &init_response);
  EXPECT_EQ(kInvalidRsrc, init_response.status());

  nidevice_grpc::Session session = init_response.instrument();
  expect_error_string(session, init_response.status(), kRFmxSpecAnErrorResourceNotFoundMessage);
}

TEST_F(NiRFmxSpecAnSessionTest, InvalidSession_CloseSession_ReturnsInvalidSessionError)
{
  nidevice_grpc::Session session;
  session.set_id(0UL);

  ::grpc::ClientContext context;
  rfmxspecan::CloseRequest request;
  request.mutable_instrument()->set_id(session.id());
  request.set_force_destroy(rfmxspecan::Boolean::BOOLEAN_FALSE);
  rfmxspecan::CloseResponse response;
  ::grpc::Status status = GetStub()->Close(&context, request, &response);

  EXPECT_TRUE(status.ok());
  EXPECT_EQ(kInvalidRFmxSpecAnSession, response.status());
}

}  // namespace system
}  // namespace tests
}  // namespace ni
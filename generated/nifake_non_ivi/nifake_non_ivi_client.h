
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// EXPERIMENTAL Client convenience wrapper for NI-FAKE-NON-IVI.
//---------------------------------------------------------------------
#ifndef NIFAKE_NON_IVI_GRPC_CLIENT_H
#define NIFAKE_NON_IVI_GRPC_CLIENT_H

#include <grpcpp/grpcpp.h>

#include <nifake_non_ivi.grpc.pb.h>
#include <tests/utilities/client_helpers.h>

#include <memory>
#include <vector>

namespace nifake_non_ivi_grpc::experimental::client {

namespace pb = ::google::protobuf;
using StubPtr = std::unique_ptr<NiFakeNonIvi::Stub>;
using namespace nidevice_grpc::experimental::client;


CloseResponse close(const StubPtr& stub, const nidevice_grpc::Session& handle);
GetCrossDriverSessionResponse get_cross_driver_session(const StubPtr& stub, const nidevice_grpc::Session& handle);
GetMarbleAttributeDoubleResponse get_marble_attribute_double(const StubPtr& stub, const nidevice_grpc::Session& handle, const simple_variant<MarbleDoubleAttribute, pb::int32>& attribute);
GetMarbleAttributeInt32Response get_marble_attribute_int32(const StubPtr& stub, const nidevice_grpc::Session& handle, const simple_variant<MarbleInt32Attribute, pb::int32>& attribute);
GetMarbleAttributeInt32ArrayResponse get_marble_attribute_int32_array(const StubPtr& stub, const nidevice_grpc::Session& handle, const simple_variant<MarbleInt32ArrayAttribute, pb::int32>& attribute);
InitResponse init(const StubPtr& stub, const pb::string& session_name);
InitFromCrossDriverSessionResponse init_from_cross_driver_session(const StubPtr& stub, const nidevice_grpc::Session& cross_driver_session);
InitFromCrossDriverSessionArrayResponse init_from_cross_driver_session_array(const StubPtr& stub, const std::vector<nidevice_grpc::Session>& cross_driver_session_array);
InitWithHandleNameAsSessionNameResponse init_with_handle_name_as_session_name(const StubPtr& stub, const pb::string& handle_name);
InputArraysWithNarrowIntegerTypesResponse input_arrays_with_narrow_integer_types(const StubPtr& stub, const std::vector<pb::uint32>& u16_array, const std::vector<pb::int32>& i16_array, const std::vector<pb::int32>& i8_array);
IotaWithCustomSizeResponse iota_with_custom_size(const StubPtr& stub, const pb::int32& size_one, const pb::int32& size_two);
OutputArraysWithNarrowIntegerTypesResponse output_arrays_with_narrow_integer_types(const StubPtr& stub, const pb::int32& number_of_u16_samples, const pb::int32& number_of_i16_samples, const pb::int32& number_of_i8_samples);
InputArrayOfBytesResponse input_array_of_bytes(const StubPtr& stub, const pb::string& u8_array);
OutputArrayOfBytesResponse output_array_of_bytes(const StubPtr& stub, const pb::int32& number_of_u8_samples);
OutputArraysWithPassedInByPtrMechanismResponse output_arrays_with_passed_in_by_ptr_mechanism(const StubPtr& stub, const pb::int32& array_size);
std::unique_ptr<grpc::ClientReader<RegisterCallbackResponse>> register_callback(const StubPtr& stub, ::grpc::ClientContext& context, const pb::int32& input_data);
std::unique_ptr<grpc::ClientReader<ReadStreamResponse>> read_stream(const StubPtr& stub, ::grpc::ClientContext& context, const pb::int32& start, const pb::int32& stop);
InputTimestampResponse input_timestamp(const StubPtr& stub, const google::protobuf::Timestamp& when);
OutputTimestampResponse output_timestamp(const StubPtr& stub);
InputVarArgsResponse input_var_args(const StubPtr& stub, const pb::string& input_name, const std::vector<StringAndEnum>& string_and_enums);
OutputVarArgsResponse output_var_args(const StubPtr& stub, const pb::string& input_name, const std::vector<pb::string>& channel_names);
ResetMarbleAttributeResponse reset_marble_attribute(const StubPtr& stub, const nidevice_grpc::Session& handle, const simple_variant<MarbleResetAttribute, pb::int32>& attribute);
ScalarsWithNarrowIntegerTypesResponse scalars_with_narrow_integer_types(const StubPtr& stub, const pb::uint32& u16, const pb::int32& i16, const pb::int32& i8);
SetMarbleAttributeDoubleResponse set_marble_attribute_double(const StubPtr& stub, const nidevice_grpc::Session& handle, const simple_variant<MarbleDoubleAttribute, pb::int32>& attribute, const double& value);
SetMarbleAttributeInt32Response set_marble_attribute_int32(const StubPtr& stub, const nidevice_grpc::Session& handle, const simple_variant<MarbleInt32Attribute, pb::int32>& attribute, const simple_variant<MarbleInt32AttributeValues, pb::int32>& value);
SetColorsResponse set_colors(const StubPtr& stub, const std::vector<pb::int32>& colors, const pb::int32& size);
GetStructsWithCoercionResponse get_structs_with_coercion(const StubPtr& stub, const pb::int32& number_of_structs);
SetStructsWithCoercionResponse set_structs_with_coercion(const StubPtr& stub, const std::vector<StructWithCoercion>& structs);
InputStringValuedEnumResponse input_string_valued_enum(const StubPtr& stub, const simple_variant<MobileOSNames, std::string>& a_name);
WriteBooleanArrayResponse write_boolean_array(const StubPtr& stub, const std::vector<bool>& bools);

} // namespace nifake_non_ivi_grpc::experimental::client

#endif /* NIFAKE_NON_IVI_GRPC_CLIENT_H */

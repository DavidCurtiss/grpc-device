
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service header for the NI-RFMXINSTR Metadata
//---------------------------------------------------------------------
#ifndef NIRFMXINSTR_GRPC_SERVICE_H
#define NIRFMXINSTR_GRPC_SERVICE_H

#include <nirfmxinstr.grpc.pb.h>
#include <condition_variable>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <map>
#include <server/converters.h>
#include <server/feature_toggles.h>
#include <server/session_resource_repository.h>
#include <server/shared_library.h>
#include <server/exceptions.h>

#include "nirfmxinstr_library_interface.h"

namespace nirfmxinstr_grpc {

struct NiRFmxInstrFeatureToggles
{
  using CodeReadiness = nidevice_grpc::FeatureToggles::CodeReadiness;
  NiRFmxInstrFeatureToggles(const nidevice_grpc::FeatureToggles& feature_toggles = {});

  bool is_enabled;
};

class NiRFmxInstrService final : public NiRFmxInstr::Service {
public:
  using ResourceRepositorySharedPtr = std::shared_ptr<nidevice_grpc::SessionResourceRepository<niRFmxInstrHandle>>;
  using ViSessionResourceRepositorySharedPtr = std::shared_ptr<nidevice_grpc::SessionResourceRepository<ViSession>>;

  NiRFmxInstrService(
    NiRFmxInstrLibraryInterface* library,
    ResourceRepositorySharedPtr session_repository,
    ViSessionResourceRepositorySharedPtr vi_session_resource_repository,
    const NiRFmxInstrFeatureToggles& feature_toggles = {});
  virtual ~NiRFmxInstrService();
  
  ::grpc::Status BuildCalibrationPlaneString(::grpc::ServerContext* context, const BuildCalibrationPlaneStringRequest* request, BuildCalibrationPlaneStringResponse* response) override;
  ::grpc::Status BuildInstrumentString(::grpc::ServerContext* context, const BuildInstrumentStringRequest* request, BuildInstrumentStringResponse* response) override;
  ::grpc::Status BuildLOString(::grpc::ServerContext* context, const BuildLOStringRequest* request, BuildLOStringResponse* response) override;
  ::grpc::Status BuildModuleString(::grpc::ServerContext* context, const BuildModuleStringRequest* request, BuildModuleStringResponse* response) override;
  ::grpc::Status BuildPortString(::grpc::ServerContext* context, const BuildPortStringRequest* request, BuildPortStringResponse* response) override;
  ::grpc::Status CfgExternalAttenuationInterpolationLinear(::grpc::ServerContext* context, const CfgExternalAttenuationInterpolationLinearRequest* request, CfgExternalAttenuationInterpolationLinearResponse* response) override;
  ::grpc::Status CfgExternalAttenuationInterpolationNearest(::grpc::ServerContext* context, const CfgExternalAttenuationInterpolationNearestRequest* request, CfgExternalAttenuationInterpolationNearestResponse* response) override;
  ::grpc::Status CfgExternalAttenuationInterpolationSpline(::grpc::ServerContext* context, const CfgExternalAttenuationInterpolationSplineRequest* request, CfgExternalAttenuationInterpolationSplineResponse* response) override;
  ::grpc::Status CfgExternalAttenuationTable(::grpc::ServerContext* context, const CfgExternalAttenuationTableRequest* request, CfgExternalAttenuationTableResponse* response) override;
  ::grpc::Status CfgFrequencyReference(::grpc::ServerContext* context, const CfgFrequencyReferenceRequest* request, CfgFrequencyReferenceResponse* response) override;
  ::grpc::Status CfgMechanicalAttenuation(::grpc::ServerContext* context, const CfgMechanicalAttenuationRequest* request, CfgMechanicalAttenuationResponse* response) override;
  ::grpc::Status CfgRFAttenuation(::grpc::ServerContext* context, const CfgRFAttenuationRequest* request, CfgRFAttenuationResponse* response) override;
  ::grpc::Status CfgSParameterExternalAttenuationTable(::grpc::ServerContext* context, const CfgSParameterExternalAttenuationTableRequest* request, CfgSParameterExternalAttenuationTableResponse* response) override;
  ::grpc::Status CfgSParameterExternalAttenuationType(::grpc::ServerContext* context, const CfgSParameterExternalAttenuationTypeRequest* request, CfgSParameterExternalAttenuationTypeResponse* response) override;
  ::grpc::Status CheckAcquisitionStatus(::grpc::ServerContext* context, const CheckAcquisitionStatusRequest* request, CheckAcquisitionStatusResponse* response) override;
  ::grpc::Status CheckIfListExists(::grpc::ServerContext* context, const CheckIfListExistsRequest* request, CheckIfListExistsResponse* response) override;
  ::grpc::Status CheckIfSignalConfigurationExists(::grpc::ServerContext* context, const CheckIfSignalConfigurationExistsRequest* request, CheckIfSignalConfigurationExistsResponse* response) override;
  ::grpc::Status Close(::grpc::ServerContext* context, const CloseRequest* request, CloseResponse* response) override;
  ::grpc::Status DeleteAllExternalAttenuationTables(::grpc::ServerContext* context, const DeleteAllExternalAttenuationTablesRequest* request, DeleteAllExternalAttenuationTablesResponse* response) override;
  ::grpc::Status DeleteExternalAttenuationTable(::grpc::ServerContext* context, const DeleteExternalAttenuationTableRequest* request, DeleteExternalAttenuationTableResponse* response) override;
  ::grpc::Status DisableCalibrationPlane(::grpc::ServerContext* context, const DisableCalibrationPlaneRequest* request, DisableCalibrationPlaneResponse* response) override;
  ::grpc::Status EnableCalibrationPlane(::grpc::ServerContext* context, const EnableCalibrationPlaneRequest* request, EnableCalibrationPlaneResponse* response) override;
  ::grpc::Status ExportSignal(::grpc::ServerContext* context, const ExportSignalRequest* request, ExportSignalResponse* response) override;
  ::grpc::Status GetAttributeF32(::grpc::ServerContext* context, const GetAttributeF32Request* request, GetAttributeF32Response* response) override;
  ::grpc::Status GetAttributeF32Array(::grpc::ServerContext* context, const GetAttributeF32ArrayRequest* request, GetAttributeF32ArrayResponse* response) override;
  ::grpc::Status GetAttributeF64(::grpc::ServerContext* context, const GetAttributeF64Request* request, GetAttributeF64Response* response) override;
  ::grpc::Status GetAttributeF64Array(::grpc::ServerContext* context, const GetAttributeF64ArrayRequest* request, GetAttributeF64ArrayResponse* response) override;
  ::grpc::Status GetAttributeI16(::grpc::ServerContext* context, const GetAttributeI16Request* request, GetAttributeI16Response* response) override;
  ::grpc::Status GetAttributeI32(::grpc::ServerContext* context, const GetAttributeI32Request* request, GetAttributeI32Response* response) override;
  ::grpc::Status GetAttributeI32Array(::grpc::ServerContext* context, const GetAttributeI32ArrayRequest* request, GetAttributeI32ArrayResponse* response) override;
  ::grpc::Status GetAttributeI64(::grpc::ServerContext* context, const GetAttributeI64Request* request, GetAttributeI64Response* response) override;
  ::grpc::Status GetAttributeI64Array(::grpc::ServerContext* context, const GetAttributeI64ArrayRequest* request, GetAttributeI64ArrayResponse* response) override;
  ::grpc::Status GetAttributeI8(::grpc::ServerContext* context, const GetAttributeI8Request* request, GetAttributeI8Response* response) override;
  ::grpc::Status GetAttributeI8Array(::grpc::ServerContext* context, const GetAttributeI8ArrayRequest* request, GetAttributeI8ArrayResponse* response) override;
  ::grpc::Status GetAttributeNIComplexDoubleArray(::grpc::ServerContext* context, const GetAttributeNIComplexDoubleArrayRequest* request, GetAttributeNIComplexDoubleArrayResponse* response) override;
  ::grpc::Status GetAttributeNIComplexSingleArray(::grpc::ServerContext* context, const GetAttributeNIComplexSingleArrayRequest* request, GetAttributeNIComplexSingleArrayResponse* response) override;
  ::grpc::Status GetAttributeString(::grpc::ServerContext* context, const GetAttributeStringRequest* request, GetAttributeStringResponse* response) override;
  ::grpc::Status GetAttributeU16(::grpc::ServerContext* context, const GetAttributeU16Request* request, GetAttributeU16Response* response) override;
  ::grpc::Status GetAttributeU32(::grpc::ServerContext* context, const GetAttributeU32Request* request, GetAttributeU32Response* response) override;
  ::grpc::Status GetAttributeU32Array(::grpc::ServerContext* context, const GetAttributeU32ArrayRequest* request, GetAttributeU32ArrayResponse* response) override;
  ::grpc::Status GetAttributeU64Array(::grpc::ServerContext* context, const GetAttributeU64ArrayRequest* request, GetAttributeU64ArrayResponse* response) override;
  ::grpc::Status GetAttributeU8(::grpc::ServerContext* context, const GetAttributeU8Request* request, GetAttributeU8Response* response) override;
  ::grpc::Status GetAttributeU8Array(::grpc::ServerContext* context, const GetAttributeU8ArrayRequest* request, GetAttributeU8ArrayResponse* response) override;
  ::grpc::Status GetAvailablePorts(::grpc::ServerContext* context, const GetAvailablePortsRequest* request, GetAvailablePortsResponse* response) override;
  ::grpc::Status GetError(::grpc::ServerContext* context, const GetErrorRequest* request, GetErrorResponse* response) override;
  ::grpc::Status GetErrorString(::grpc::ServerContext* context, const GetErrorStringRequest* request, GetErrorStringResponse* response) override;
  ::grpc::Status GetExternalAttenuationTableActualValue(::grpc::ServerContext* context, const GetExternalAttenuationTableActualValueRequest* request, GetExternalAttenuationTableActualValueResponse* response) override;
  ::grpc::Status GetListNames(::grpc::ServerContext* context, const GetListNamesRequest* request, GetListNamesResponse* response) override;
  ::grpc::Status GetNIRFSASession(::grpc::ServerContext* context, const GetNIRFSASessionRequest* request, GetNIRFSASessionResponse* response) override;
  ::grpc::Status GetNIRFSASessionArray(::grpc::ServerContext* context, const GetNIRFSASessionArrayRequest* request, GetNIRFSASessionArrayResponse* response) override;
  ::grpc::Status GetSelfCalibrateLastDateAndTime(::grpc::ServerContext* context, const GetSelfCalibrateLastDateAndTimeRequest* request, GetSelfCalibrateLastDateAndTimeResponse* response) override;
  ::grpc::Status GetSelfCalibrateLastTemperature(::grpc::ServerContext* context, const GetSelfCalibrateLastTemperatureRequest* request, GetSelfCalibrateLastTemperatureResponse* response) override;
  ::grpc::Status GetSignalConfigurationNames(::grpc::ServerContext* context, const GetSignalConfigurationNamesRequest* request, GetSignalConfigurationNamesResponse* response) override;
  ::grpc::Status Initialize(::grpc::ServerContext* context, const InitializeRequest* request, InitializeResponse* response) override;
  ::grpc::Status InitializeFromNIRFSASession(::grpc::ServerContext* context, const InitializeFromNIRFSASessionRequest* request, InitializeFromNIRFSASessionResponse* response) override;
  ::grpc::Status InitializeFromNIRFSASessionArray(::grpc::ServerContext* context, const InitializeFromNIRFSASessionArrayRequest* request, InitializeFromNIRFSASessionArrayResponse* response) override;
  ::grpc::Status IsSelfCalibrateValid(::grpc::ServerContext* context, const IsSelfCalibrateValidRequest* request, IsSelfCalibrateValidResponse* response) override;
  ::grpc::Status LoadAllConfigurations(::grpc::ServerContext* context, const LoadAllConfigurationsRequest* request, LoadAllConfigurationsResponse* response) override;
  ::grpc::Status LoadSParameterExternalAttenuationTableFromS2PFile(::grpc::ServerContext* context, const LoadSParameterExternalAttenuationTableFromS2PFileRequest* request, LoadSParameterExternalAttenuationTableFromS2PFileResponse* response) override;
  ::grpc::Status ResetAttribute(::grpc::ServerContext* context, const ResetAttributeRequest* request, ResetAttributeResponse* response) override;
  ::grpc::Status ResetDriver(::grpc::ServerContext* context, const ResetDriverRequest* request, ResetDriverResponse* response) override;
  ::grpc::Status ResetEntireSession(::grpc::ServerContext* context, const ResetEntireSessionRequest* request, ResetEntireSessionResponse* response) override;
  ::grpc::Status ResetToDefault(::grpc::ServerContext* context, const ResetToDefaultRequest* request, ResetToDefaultResponse* response) override;
  ::grpc::Status SaveAllConfigurations(::grpc::ServerContext* context, const SaveAllConfigurationsRequest* request, SaveAllConfigurationsResponse* response) override;
  ::grpc::Status SelectActiveExternalAttenuationTable(::grpc::ServerContext* context, const SelectActiveExternalAttenuationTableRequest* request, SelectActiveExternalAttenuationTableResponse* response) override;
  ::grpc::Status SelfCalibrate(::grpc::ServerContext* context, const SelfCalibrateRequest* request, SelfCalibrateResponse* response) override;
  ::grpc::Status SelfCalibrateRange(::grpc::ServerContext* context, const SelfCalibrateRangeRequest* request, SelfCalibrateRangeResponse* response) override;
  ::grpc::Status SendSoftwareEdgeAdvanceTrigger(::grpc::ServerContext* context, const SendSoftwareEdgeAdvanceTriggerRequest* request, SendSoftwareEdgeAdvanceTriggerResponse* response) override;
  ::grpc::Status SendSoftwareEdgeStartTrigger(::grpc::ServerContext* context, const SendSoftwareEdgeStartTriggerRequest* request, SendSoftwareEdgeStartTriggerResponse* response) override;
  ::grpc::Status SetAttributeF32(::grpc::ServerContext* context, const SetAttributeF32Request* request, SetAttributeF32Response* response) override;
  ::grpc::Status SetAttributeF32Array(::grpc::ServerContext* context, const SetAttributeF32ArrayRequest* request, SetAttributeF32ArrayResponse* response) override;
  ::grpc::Status SetAttributeF64(::grpc::ServerContext* context, const SetAttributeF64Request* request, SetAttributeF64Response* response) override;
  ::grpc::Status SetAttributeF64Array(::grpc::ServerContext* context, const SetAttributeF64ArrayRequest* request, SetAttributeF64ArrayResponse* response) override;
  ::grpc::Status SetAttributeI16(::grpc::ServerContext* context, const SetAttributeI16Request* request, SetAttributeI16Response* response) override;
  ::grpc::Status SetAttributeI32(::grpc::ServerContext* context, const SetAttributeI32Request* request, SetAttributeI32Response* response) override;
  ::grpc::Status SetAttributeI32Array(::grpc::ServerContext* context, const SetAttributeI32ArrayRequest* request, SetAttributeI32ArrayResponse* response) override;
  ::grpc::Status SetAttributeI64(::grpc::ServerContext* context, const SetAttributeI64Request* request, SetAttributeI64Response* response) override;
  ::grpc::Status SetAttributeI64Array(::grpc::ServerContext* context, const SetAttributeI64ArrayRequest* request, SetAttributeI64ArrayResponse* response) override;
  ::grpc::Status SetAttributeI8(::grpc::ServerContext* context, const SetAttributeI8Request* request, SetAttributeI8Response* response) override;
  ::grpc::Status SetAttributeI8Array(::grpc::ServerContext* context, const SetAttributeI8ArrayRequest* request, SetAttributeI8ArrayResponse* response) override;
  ::grpc::Status SetAttributeNIComplexDoubleArray(::grpc::ServerContext* context, const SetAttributeNIComplexDoubleArrayRequest* request, SetAttributeNIComplexDoubleArrayResponse* response) override;
  ::grpc::Status SetAttributeNIComplexSingleArray(::grpc::ServerContext* context, const SetAttributeNIComplexSingleArrayRequest* request, SetAttributeNIComplexSingleArrayResponse* response) override;
  ::grpc::Status SetAttributeString(::grpc::ServerContext* context, const SetAttributeStringRequest* request, SetAttributeStringResponse* response) override;
  ::grpc::Status SetAttributeU16(::grpc::ServerContext* context, const SetAttributeU16Request* request, SetAttributeU16Response* response) override;
  ::grpc::Status SetAttributeU32(::grpc::ServerContext* context, const SetAttributeU32Request* request, SetAttributeU32Response* response) override;
  ::grpc::Status SetAttributeU32Array(::grpc::ServerContext* context, const SetAttributeU32ArrayRequest* request, SetAttributeU32ArrayResponse* response) override;
  ::grpc::Status SetAttributeU64Array(::grpc::ServerContext* context, const SetAttributeU64ArrayRequest* request, SetAttributeU64ArrayResponse* response) override;
  ::grpc::Status SetAttributeU8(::grpc::ServerContext* context, const SetAttributeU8Request* request, SetAttributeU8Response* response) override;
  ::grpc::Status SetAttributeU8Array(::grpc::ServerContext* context, const SetAttributeU8ArrayRequest* request, SetAttributeU8ArrayResponse* response) override;
  ::grpc::Status TimestampFromValues(::grpc::ServerContext* context, const TimestampFromValuesRequest* request, TimestampFromValuesResponse* response) override;
  ::grpc::Status ValuesFromTimestamp(::grpc::ServerContext* context, const ValuesFromTimestampRequest* request, ValuesFromTimestampResponse* response) override;
  ::grpc::Status WaitForAcquisitionComplete(::grpc::ServerContext* context, const WaitForAcquisitionCompleteRequest* request, WaitForAcquisitionCompleteResponse* response) override;
private:
  NiRFmxInstrLibraryInterface* library_;
  ResourceRepositorySharedPtr session_repository_;
  ViSessionResourceRepositorySharedPtr vi_session_resource_repository_;
  std::map<std::int32_t, std::string> frequencyreferencesource_input_map_ { {1, "OnboardClock"},{2, "RefIn"},{3, "PXI_Clk"},{4, "ClkIn"},{5, "RefIn2"},{6, "PXI_ClkMaster"}, };
  std::map<std::string, std::int32_t> frequencyreferencesource_output_map_ { {"OnboardClock", 1},{"RefIn", 2},{"PXI_Clk", 3},{"ClkIn", 4},{"RefIn2", 5},{"PXI_ClkMaster", 6}, };
  std::map<std::int32_t, std::string> nirfmxinstrstringattributevaluesmapped_input_map_ { {1, ""},{2, "RefOut"},{3, "RefOut2"},{4, "ClkOut"},{5, ""},{6, "OnboardClock"},{7, "RefIn"},{8, "PXI_Clk"},{9, "ClkIn"},{10, "RefIn2"},{11, "PXI_ClkMaster"},{12, "Automatic_SG_SA_Shared"},{13, "LO_In"},{14, "None"},{15, "Onboard"},{16, "Secondary"},{17, "SG_SA_Shared"},{18, "PFI0"},{19, "PFI1"},{20, "PXI_Trig0"},{21, "PXI_Trig1"},{22, "PXI_Trig2"},{23, "PXI_Trig3"},{24, "PXI_Trig4"},{25, "PXI_Trig5"},{26, "PXI_Trig6"},{27, "PXI_Trig7"},{28, "PXI_STAR"},{29, "PXIe_DStarC"},{30, "PXIe_DStarB"},{31, "TimerEvent"}, };
  std::map<std::string, std::int32_t> nirfmxinstrstringattributevaluesmapped_output_map_ { {"", 1},{"RefOut", 2},{"RefOut2", 3},{"ClkOut", 4},{"", 5},{"OnboardClock", 6},{"RefIn", 7},{"PXI_Clk", 8},{"ClkIn", 9},{"RefIn2", 10},{"PXI_ClkMaster", 11},{"Automatic_SG_SA_Shared", 12},{"LO_In", 13},{"None", 14},{"Onboard", 15},{"Secondary", 16},{"SG_SA_Shared", 17},{"PFI0", 18},{"PFI1", 19},{"PXI_Trig0", 20},{"PXI_Trig1", 21},{"PXI_Trig2", 22},{"PXI_Trig3", 23},{"PXI_Trig4", 24},{"PXI_Trig5", 25},{"PXI_Trig6", 26},{"PXI_Trig7", 27},{"PXI_STAR", 28},{"PXIe_DStarC", 29},{"PXIe_DStarB", 30},{"TimerEvent", 31}, };

  NiRFmxInstrFeatureToggles feature_toggles_;
};

} // namespace nirfmxinstr_grpc

#endif  // NIRFMXINSTR_GRPC_SERVICE_H

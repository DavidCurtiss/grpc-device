
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service header for the NI-RFSA Metadata
//---------------------------------------------------------------------
#ifndef NIRFSA_GRPC_SERVICE_H
#define NIRFSA_GRPC_SERVICE_H

#include <nirfsa.grpc.pb.h>
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

#include "nirfsa_library_interface.h"

namespace nirfsa_grpc {

struct NiRFSAFeatureToggles
{
  using CodeReadiness = nidevice_grpc::FeatureToggles::CodeReadiness;
  NiRFSAFeatureToggles(const nidevice_grpc::FeatureToggles& feature_toggles = {});

  bool is_enabled;
};

class NiRFSAService final : public NiRFSA::Service {
public:
  using ResourceRepositorySharedPtr = std::shared_ptr<nidevice_grpc::SessionResourceRepository<ViSession>>;

  NiRFSAService(
    NiRFSALibraryInterface* library,
    ResourceRepositorySharedPtr session_repository,
    const NiRFSAFeatureToggles& feature_toggles = {});
  virtual ~NiRFSAService();
  
  ::grpc::Status Abort(::grpc::ServerContext* context, const AbortRequest* request, AbortResponse* response) override;
  ::grpc::Status CheckAcquisitionStatus(::grpc::ServerContext* context, const CheckAcquisitionStatusRequest* request, CheckAcquisitionStatusResponse* response) override;
  ::grpc::Status ClearError(::grpc::ServerContext* context, const ClearErrorRequest* request, ClearErrorResponse* response) override;
  ::grpc::Status ClearSelfCalibrateRange(::grpc::ServerContext* context, const ClearSelfCalibrateRangeRequest* request, ClearSelfCalibrateRangeResponse* response) override;
  ::grpc::Status Close(::grpc::ServerContext* context, const CloseRequest* request, CloseResponse* response) override;
  ::grpc::Status Commit(::grpc::ServerContext* context, const CommitRequest* request, CommitResponse* response) override;
  ::grpc::Status ConfigureAcquisitionType(::grpc::ServerContext* context, const ConfigureAcquisitionTypeRequest* request, ConfigureAcquisitionTypeResponse* response) override;
  ::grpc::Status ConfigureDeembeddingTableInterpolationLinear(::grpc::ServerContext* context, const ConfigureDeembeddingTableInterpolationLinearRequest* request, ConfigureDeembeddingTableInterpolationLinearResponse* response) override;
  ::grpc::Status ConfigureDeembeddingTableInterpolationNearest(::grpc::ServerContext* context, const ConfigureDeembeddingTableInterpolationNearestRequest* request, ConfigureDeembeddingTableInterpolationNearestResponse* response) override;
  ::grpc::Status ConfigureDeembeddingTableInterpolationSpline(::grpc::ServerContext* context, const ConfigureDeembeddingTableInterpolationSplineRequest* request, ConfigureDeembeddingTableInterpolationSplineResponse* response) override;
  ::grpc::Status ConfigureDigitalEdgeAdvanceTrigger(::grpc::ServerContext* context, const ConfigureDigitalEdgeAdvanceTriggerRequest* request, ConfigureDigitalEdgeAdvanceTriggerResponse* response) override;
  ::grpc::Status ConfigureDigitalEdgeRefTrigger(::grpc::ServerContext* context, const ConfigureDigitalEdgeRefTriggerRequest* request, ConfigureDigitalEdgeRefTriggerResponse* response) override;
  ::grpc::Status ConfigureDigitalEdgeStartTrigger(::grpc::ServerContext* context, const ConfigureDigitalEdgeStartTriggerRequest* request, ConfigureDigitalEdgeStartTriggerResponse* response) override;
  ::grpc::Status ConfigureIQCarrierFrequency(::grpc::ServerContext* context, const ConfigureIQCarrierFrequencyRequest* request, ConfigureIQCarrierFrequencyResponse* response) override;
  ::grpc::Status ConfigureIQPowerEdgeRefTrigger(::grpc::ServerContext* context, const ConfigureIQPowerEdgeRefTriggerRequest* request, ConfigureIQPowerEdgeRefTriggerResponse* response) override;
  ::grpc::Status ConfigureIQRate(::grpc::ServerContext* context, const ConfigureIQRateRequest* request, ConfigureIQRateResponse* response) override;
  ::grpc::Status ConfigureNumberOfRecords(::grpc::ServerContext* context, const ConfigureNumberOfRecordsRequest* request, ConfigureNumberOfRecordsResponse* response) override;
  ::grpc::Status ConfigureNumberOfSamples(::grpc::ServerContext* context, const ConfigureNumberOfSamplesRequest* request, ConfigureNumberOfSamplesResponse* response) override;
  ::grpc::Status ConfigurePXIChassisClk10(::grpc::ServerContext* context, const ConfigurePXIChassisClk10Request* request, ConfigurePXIChassisClk10Response* response) override;
  ::grpc::Status ConfigureRefClock(::grpc::ServerContext* context, const ConfigureRefClockRequest* request, ConfigureRefClockResponse* response) override;
  ::grpc::Status ConfigureReferenceLevel(::grpc::ServerContext* context, const ConfigureReferenceLevelRequest* request, ConfigureReferenceLevelResponse* response) override;
  ::grpc::Status ConfigureResolutionBandwidth(::grpc::ServerContext* context, const ConfigureResolutionBandwidthRequest* request, ConfigureResolutionBandwidthResponse* response) override;
  ::grpc::Status ConfigureSoftwareEdgeAdvanceTrigger(::grpc::ServerContext* context, const ConfigureSoftwareEdgeAdvanceTriggerRequest* request, ConfigureSoftwareEdgeAdvanceTriggerResponse* response) override;
  ::grpc::Status ConfigureSoftwareEdgeRefTrigger(::grpc::ServerContext* context, const ConfigureSoftwareEdgeRefTriggerRequest* request, ConfigureSoftwareEdgeRefTriggerResponse* response) override;
  ::grpc::Status ConfigureSoftwareEdgeStartTrigger(::grpc::ServerContext* context, const ConfigureSoftwareEdgeStartTriggerRequest* request, ConfigureSoftwareEdgeStartTriggerResponse* response) override;
  ::grpc::Status ConfigureSpectrumFrequencyCenterSpan(::grpc::ServerContext* context, const ConfigureSpectrumFrequencyCenterSpanRequest* request, ConfigureSpectrumFrequencyCenterSpanResponse* response) override;
  ::grpc::Status ConfigureSpectrumFrequencyStartStop(::grpc::ServerContext* context, const ConfigureSpectrumFrequencyStartStopRequest* request, ConfigureSpectrumFrequencyStartStopResponse* response) override;
  ::grpc::Status CreateConfigurationList(::grpc::ServerContext* context, const CreateConfigurationListRequest* request, CreateConfigurationListResponse* response) override;
  ::grpc::Status CreateConfigurationListStep(::grpc::ServerContext* context, const CreateConfigurationListStepRequest* request, CreateConfigurationListStepResponse* response) override;
  ::grpc::Status CreateDeembeddingSparameterTableArray(::grpc::ServerContext* context, const CreateDeembeddingSparameterTableArrayRequest* request, CreateDeembeddingSparameterTableArrayResponse* response) override;
  ::grpc::Status CreateDeembeddingSparameterTableS2PFile(::grpc::ServerContext* context, const CreateDeembeddingSparameterTableS2PFileRequest* request, CreateDeembeddingSparameterTableS2PFileResponse* response) override;
  ::grpc::Status DeleteAllDeembeddingTables(::grpc::ServerContext* context, const DeleteAllDeembeddingTablesRequest* request, DeleteAllDeembeddingTablesResponse* response) override;
  ::grpc::Status DeleteConfigurationList(::grpc::ServerContext* context, const DeleteConfigurationListRequest* request, DeleteConfigurationListResponse* response) override;
  ::grpc::Status DeleteDeembeddingTable(::grpc::ServerContext* context, const DeleteDeembeddingTableRequest* request, DeleteDeembeddingTableResponse* response) override;
  ::grpc::Status Disable(::grpc::ServerContext* context, const DisableRequest* request, DisableResponse* response) override;
  ::grpc::Status DisableAdvanceTrigger(::grpc::ServerContext* context, const DisableAdvanceTriggerRequest* request, DisableAdvanceTriggerResponse* response) override;
  ::grpc::Status DisableRefTrigger(::grpc::ServerContext* context, const DisableRefTriggerRequest* request, DisableRefTriggerResponse* response) override;
  ::grpc::Status DisableStartTrigger(::grpc::ServerContext* context, const DisableStartTriggerRequest* request, DisableStartTriggerResponse* response) override;
  ::grpc::Status EnableSessionAccess(::grpc::ServerContext* context, const EnableSessionAccessRequest* request, EnableSessionAccessResponse* response) override;
  ::grpc::Status ErrorMessage(::grpc::ServerContext* context, const ErrorMessageRequest* request, ErrorMessageResponse* response) override;
  ::grpc::Status ErrorQuery(::grpc::ServerContext* context, const ErrorQueryRequest* request, ErrorQueryResponse* response) override;
  ::grpc::Status ExportSignal(::grpc::ServerContext* context, const ExportSignalRequest* request, ExportSignalResponse* response) override;
  ::grpc::Status FetchIQMultiRecordComplexF32(::grpc::ServerContext* context, const FetchIQMultiRecordComplexF32Request* request, FetchIQMultiRecordComplexF32Response* response) override;
  ::grpc::Status FetchIQMultiRecordComplexF64(::grpc::ServerContext* context, const FetchIQMultiRecordComplexF64Request* request, FetchIQMultiRecordComplexF64Response* response) override;
  ::grpc::Status FetchIQMultiRecordComplexI16(::grpc::ServerContext* context, const FetchIQMultiRecordComplexI16Request* request, FetchIQMultiRecordComplexI16Response* response) override;
  ::grpc::Status FetchIQSingleRecordComplexF32(::grpc::ServerContext* context, const FetchIQSingleRecordComplexF32Request* request, FetchIQSingleRecordComplexF32Response* response) override;
  ::grpc::Status FetchIQSingleRecordComplexF64(::grpc::ServerContext* context, const FetchIQSingleRecordComplexF64Request* request, FetchIQSingleRecordComplexF64Response* response) override;
  ::grpc::Status FetchIQSingleRecordComplexI16(::grpc::ServerContext* context, const FetchIQSingleRecordComplexI16Request* request, FetchIQSingleRecordComplexI16Response* response) override;
  ::grpc::Status GetAttributeViBoolean(::grpc::ServerContext* context, const GetAttributeViBooleanRequest* request, GetAttributeViBooleanResponse* response) override;
  ::grpc::Status GetAttributeViInt32(::grpc::ServerContext* context, const GetAttributeViInt32Request* request, GetAttributeViInt32Response* response) override;
  ::grpc::Status GetAttributeViInt64(::grpc::ServerContext* context, const GetAttributeViInt64Request* request, GetAttributeViInt64Response* response) override;
  ::grpc::Status GetAttributeViReal64(::grpc::ServerContext* context, const GetAttributeViReal64Request* request, GetAttributeViReal64Response* response) override;
  ::grpc::Status GetAttributeViSession(::grpc::ServerContext* context, const GetAttributeViSessionRequest* request, GetAttributeViSessionResponse* response) override;
  ::grpc::Status GetAttributeViString(::grpc::ServerContext* context, const GetAttributeViStringRequest* request, GetAttributeViStringResponse* response) override;
  ::grpc::Status GetCalUserDefinedInfo(::grpc::ServerContext* context, const GetCalUserDefinedInfoRequest* request, GetCalUserDefinedInfoResponse* response) override;
  ::grpc::Status GetCalUserDefinedInfoMaxSize(::grpc::ServerContext* context, const GetCalUserDefinedInfoMaxSizeRequest* request, GetCalUserDefinedInfoMaxSizeResponse* response) override;
  ::grpc::Status GetDeembeddingSparameters(::grpc::ServerContext* context, const GetDeembeddingSparametersRequest* request, GetDeembeddingSparametersResponse* response) override;
  ::grpc::Status GetDeviceResponse(::grpc::ServerContext* context, const GetDeviceResponseRequest* request, GetDeviceResponseResponse* response) override;
  ::grpc::Status GetError(::grpc::ServerContext* context, const GetErrorRequest* request, GetErrorResponse* response) override;
  ::grpc::Status GetExtCalLastDateAndTime(::grpc::ServerContext* context, const GetExtCalLastDateAndTimeRequest* request, GetExtCalLastDateAndTimeResponse* response) override;
  ::grpc::Status GetExtCalLastTemp(::grpc::ServerContext* context, const GetExtCalLastTempRequest* request, GetExtCalLastTempResponse* response) override;
  ::grpc::Status GetExtCalRecommendedInterval(::grpc::ServerContext* context, const GetExtCalRecommendedIntervalRequest* request, GetExtCalRecommendedIntervalResponse* response) override;
  ::grpc::Status GetFetchBacklog(::grpc::ServerContext* context, const GetFetchBacklogRequest* request, GetFetchBacklogResponse* response) override;
  ::grpc::Status GetFrequencyResponse(::grpc::ServerContext* context, const GetFrequencyResponseRequest* request, GetFrequencyResponseResponse* response) override;
  ::grpc::Status GetNormalizationCoefficients(::grpc::ServerContext* context, const GetNormalizationCoefficientsRequest* request, GetNormalizationCoefficientsResponse* response) override;
  ::grpc::Status GetNumberOfSpectralLines(::grpc::ServerContext* context, const GetNumberOfSpectralLinesRequest* request, GetNumberOfSpectralLinesResponse* response) override;
  ::grpc::Status GetRelayName(::grpc::ServerContext* context, const GetRelayNameRequest* request, GetRelayNameResponse* response) override;
  ::grpc::Status GetRelayOperationsCount(::grpc::ServerContext* context, const GetRelayOperationsCountRequest* request, GetRelayOperationsCountResponse* response) override;
  ::grpc::Status GetScalingCoefficients(::grpc::ServerContext* context, const GetScalingCoefficientsRequest* request, GetScalingCoefficientsResponse* response) override;
  ::grpc::Status GetSelfCalLastDateAndTime(::grpc::ServerContext* context, const GetSelfCalLastDateAndTimeRequest* request, GetSelfCalLastDateAndTimeResponse* response) override;
  ::grpc::Status GetSelfCalLastTemp(::grpc::ServerContext* context, const GetSelfCalLastTempRequest* request, GetSelfCalLastTempResponse* response) override;
  ::grpc::Status GetSpectralInfoForSMT(::grpc::ServerContext* context, const GetSpectralInfoForSMTRequest* request, GetSpectralInfoForSMTResponse* response) override;
  ::grpc::Status GetStreamEndpointHandle(::grpc::ServerContext* context, const GetStreamEndpointHandleRequest* request, GetStreamEndpointHandleResponse* response) override;
  ::grpc::Status GetTerminalName(::grpc::ServerContext* context, const GetTerminalNameRequest* request, GetTerminalNameResponse* response) override;
  ::grpc::Status GetUserData(::grpc::ServerContext* context, const GetUserDataRequest* request, GetUserDataResponse* response) override;
  ::grpc::Status Init(::grpc::ServerContext* context, const InitRequest* request, InitResponse* response) override;
  ::grpc::Status InitWithOptions(::grpc::ServerContext* context, const InitWithOptionsRequest* request, InitWithOptionsResponse* response) override;
  ::grpc::Status Initiate(::grpc::ServerContext* context, const InitiateRequest* request, InitiateResponse* response) override;
  ::grpc::Status InvalidateAllAttributes(::grpc::ServerContext* context, const InvalidateAllAttributesRequest* request, InvalidateAllAttributesResponse* response) override;
  ::grpc::Status IsSelfCalValid(::grpc::ServerContext* context, const IsSelfCalValidRequest* request, IsSelfCalValidResponse* response) override;
  ::grpc::Status PerformThermalCorrection(::grpc::ServerContext* context, const PerformThermalCorrectionRequest* request, PerformThermalCorrectionResponse* response) override;
  ::grpc::Status ReadIQSingleRecordComplexF64(::grpc::ServerContext* context, const ReadIQSingleRecordComplexF64Request* request, ReadIQSingleRecordComplexF64Response* response) override;
  ::grpc::Status ReadPowerSpectrumF32(::grpc::ServerContext* context, const ReadPowerSpectrumF32Request* request, ReadPowerSpectrumF32Response* response) override;
  ::grpc::Status ReadPowerSpectrumF64(::grpc::ServerContext* context, const ReadPowerSpectrumF64Request* request, ReadPowerSpectrumF64Response* response) override;
  ::grpc::Status Reset(::grpc::ServerContext* context, const ResetRequest* request, ResetResponse* response) override;
  ::grpc::Status ResetAttribute(::grpc::ServerContext* context, const ResetAttributeRequest* request, ResetAttributeResponse* response) override;
  ::grpc::Status ResetDevice(::grpc::ServerContext* context, const ResetDeviceRequest* request, ResetDeviceResponse* response) override;
  ::grpc::Status ResetWithDefaults(::grpc::ServerContext* context, const ResetWithDefaultsRequest* request, ResetWithDefaultsResponse* response) override;
  ::grpc::Status ResetWithOptions(::grpc::ServerContext* context, const ResetWithOptionsRequest* request, ResetWithOptionsResponse* response) override;
  ::grpc::Status RevisionQuery(::grpc::ServerContext* context, const RevisionQueryRequest* request, RevisionQueryResponse* response) override;
  ::grpc::Status SelfCal(::grpc::ServerContext* context, const SelfCalRequest* request, SelfCalResponse* response) override;
  ::grpc::Status SelfCalibrate(::grpc::ServerContext* context, const SelfCalibrateRequest* request, SelfCalibrateResponse* response) override;
  ::grpc::Status SelfCalibrateRange(::grpc::ServerContext* context, const SelfCalibrateRangeRequest* request, SelfCalibrateRangeResponse* response) override;
  ::grpc::Status SelfTest(::grpc::ServerContext* context, const SelfTestRequest* request, SelfTestResponse* response) override;
  ::grpc::Status SendSoftwareEdgeTrigger(::grpc::ServerContext* context, const SendSoftwareEdgeTriggerRequest* request, SendSoftwareEdgeTriggerResponse* response) override;
  ::grpc::Status SetAttributeViBoolean(::grpc::ServerContext* context, const SetAttributeViBooleanRequest* request, SetAttributeViBooleanResponse* response) override;
  ::grpc::Status SetAttributeViInt32(::grpc::ServerContext* context, const SetAttributeViInt32Request* request, SetAttributeViInt32Response* response) override;
  ::grpc::Status SetAttributeViInt64(::grpc::ServerContext* context, const SetAttributeViInt64Request* request, SetAttributeViInt64Response* response) override;
  ::grpc::Status SetAttributeViReal64(::grpc::ServerContext* context, const SetAttributeViReal64Request* request, SetAttributeViReal64Response* response) override;
  ::grpc::Status SetAttributeViSession(::grpc::ServerContext* context, const SetAttributeViSessionRequest* request, SetAttributeViSessionResponse* response) override;
  ::grpc::Status SetAttributeViString(::grpc::ServerContext* context, const SetAttributeViStringRequest* request, SetAttributeViStringResponse* response) override;
  ::grpc::Status SetCalUserDefinedInfo(::grpc::ServerContext* context, const SetCalUserDefinedInfoRequest* request, SetCalUserDefinedInfoResponse* response) override;
  ::grpc::Status SetUserData(::grpc::ServerContext* context, const SetUserDataRequest* request, SetUserDataResponse* response) override;
private:
  NiRFSALibraryInterface* library_;
  ResourceRepositorySharedPtr session_repository_;
  std::map<std::int32_t, std::string> digitaledgetriggersource_input_map_ { {1, "PFI0"},{2, "PFI1"},{3, "PXI_Trig0"},{4, "PXI_Trig1"},{5, "PXI_Trig2"},{6, "PXI_Trig3"},{7, "PXI_Trig4"},{8, "PXI_Trig5"},{9, "PXI_Trig6"},{10, "PXI_Trig7"},{11, "PXI_STAR"},{12, "PXI_Trig0"},{13, "PXI_Trig1"},{14, "PXI_Trig2"},{15, "PXI_Trig3"},{16, "PXI_Trig4"},{17, "PXI_Trig5"},{18, "PXI_Trig6"},{19, "PXI_Trig7"},{20, "TimerEvent"}, };
  std::map<std::string, std::int32_t> digitaledgetriggersource_output_map_ { {"PFI0", 1},{"PFI1", 2},{"PXI_Trig0", 3},{"PXI_Trig1", 4},{"PXI_Trig2", 5},{"PXI_Trig3", 6},{"PXI_Trig4", 7},{"PXI_Trig5", 8},{"PXI_Trig6", 9},{"PXI_Trig7", 10},{"PXI_STAR", 11},{"PXI_Trig0", 12},{"PXI_Trig1", 13},{"PXI_Trig2", 14},{"PXI_Trig3", 15},{"PXI_Trig4", 16},{"PXI_Trig5", 17},{"PXI_Trig6", 18},{"PXI_Trig7", 19},{"TimerEvent", 20}, };
  std::map<std::int32_t, std::string> exportterminal_input_map_ { {1, ""},{2, "PFI0"},{3, "PFI1"},{4, "PXI_Trig0"},{5, "PXI_Trig1"},{6, "PXI_Trig2"},{7, "PXI_Trig3"},{8, "PXI_Trig4"},{9, "PXI_Trig5"},{10, "PXI_Trig6"},{11, "PXI_Trig7"},{12, "PXI_STAR"},{13, "PXIe_DStarC"},{14, "RefOut"},{15, "RefOut2"},{16, "ClkOut"}, };
  std::map<std::string, std::int32_t> exportterminal_output_map_ { {"", 1},{"PFI0", 2},{"PFI1", 3},{"PXI_Trig0", 4},{"PXI_Trig1", 5},{"PXI_Trig2", 6},{"PXI_Trig3", 7},{"PXI_Trig4", 8},{"PXI_Trig5", 9},{"PXI_Trig6", 10},{"PXI_Trig7", 11},{"PXI_STAR", 12},{"PXIe_DStarC", 13},{"RefOut", 14},{"RefOut2", 15},{"ClkOut", 16}, };
  std::map<std::int32_t, std::string> nirfsastringattributevaluesmapped_input_map_ { {1, "None"},{2, "ClkOut"},{3, "OnboardClock"},{4, "ClkIn"},{5, "LORefClk"},{6, "PXI_STAR"},{7, ""},{8, "PFI0"},{9, "PFI1"},{10, "PXI_Trig0"},{11, "PXI_Trig1"},{12, "PXI_Trig2"},{13, "PXI_Trig3"},{14, "PXI_Trig4"},{15, "PXI_Trig5"},{16, "PXI_Trig6"},{17, "PXI_Trig7"},{18, "PXI_STAR"},{19, "PXIe_DStarC"},{20, "RefOut"},{21, "RefOut2"},{22, "ClkOut"},{23, "Onboard"},{24, "LO_In"},{25, "Secondary"},{26, "SG_SA_Shared"},{27, "None"},{28, "OnboardClock"},{29, "RefIn"},{30, "None"},{31, "RefOut"},{32, "RefOut2"},{33, "ClkOut"},{34, "IFCondRefOut"},{35, "None"},{36, "OnboardClock"},{37, "RefIn"},{38, "PXI_Clk"},{39, "ClkIn"},{40, "RefIn2"},{41, "PXI_ClkMaster"},{42, "PFI0"},{43, "PFI1"},{44, "PXI_Trig0"},{45, "PXI_Trig1"},{46, "PXI_Trig2"},{47, "PXI_Trig3"},{48, "PXI_Trig4"},{49, "PXI_Trig5"},{50, "PXI_Trig6"},{51, "PXI_Trig7"},{52, "PXI_STAR"},{53, "PXIe_DStarB"},{54, "TimerEvent"},{55, "EndOfRecordEvent"},{56, "StartTrigger"},{57, "ReferenceTrigger"},{58, "Sync_Start"},{59, "Sync_Ref"},{60, "Sync_Advance"}, };
  std::map<std::string, std::int32_t> nirfsastringattributevaluesmapped_output_map_ { {"None", 1},{"ClkOut", 2},{"OnboardClock", 3},{"ClkIn", 4},{"LORefClk", 5},{"PXI_STAR", 6},{"", 7},{"PFI0", 8},{"PFI1", 9},{"PXI_Trig0", 10},{"PXI_Trig1", 11},{"PXI_Trig2", 12},{"PXI_Trig3", 13},{"PXI_Trig4", 14},{"PXI_Trig5", 15},{"PXI_Trig6", 16},{"PXI_Trig7", 17},{"PXI_STAR", 18},{"PXIe_DStarC", 19},{"RefOut", 20},{"RefOut2", 21},{"ClkOut", 22},{"Onboard", 23},{"LO_In", 24},{"Secondary", 25},{"SG_SA_Shared", 26},{"None", 27},{"OnboardClock", 28},{"RefIn", 29},{"None", 30},{"RefOut", 31},{"RefOut2", 32},{"ClkOut", 33},{"IFCondRefOut", 34},{"None", 35},{"OnboardClock", 36},{"RefIn", 37},{"PXI_Clk", 38},{"ClkIn", 39},{"RefIn2", 40},{"PXI_ClkMaster", 41},{"PFI0", 42},{"PFI1", 43},{"PXI_Trig0", 44},{"PXI_Trig1", 45},{"PXI_Trig2", 46},{"PXI_Trig3", 47},{"PXI_Trig4", 48},{"PXI_Trig5", 49},{"PXI_Trig6", 50},{"PXI_Trig7", 51},{"PXI_STAR", 52},{"PXIe_DStarB", 53},{"TimerEvent", 54},{"EndOfRecordEvent", 55},{"StartTrigger", 56},{"ReferenceTrigger", 57},{"Sync_Start", 58},{"Sync_Ref", 59},{"Sync_Advance", 60}, };
  std::map<std::int32_t, std::string> pxichassisclk10source_input_map_ { {1, "None"},{2, "OnboardClock"},{3, "RefIn"}, };
  std::map<std::string, std::int32_t> pxichassisclk10source_output_map_ { {"None", 1},{"OnboardClock", 2},{"RefIn", 3}, };
  std::map<std::int32_t, std::string> refclocksource_input_map_ { {1, "None"},{2, "OnboardClock"},{3, "RefIn"},{4, "PXI_Clk"},{5, "ClkIn"},{6, "RefIn2"},{7, "PXI_ClkMaster"}, };
  std::map<std::string, std::int32_t> refclocksource_output_map_ { {"None", 1},{"OnboardClock", 2},{"RefIn", 3},{"PXI_Clk", 4},{"ClkIn", 5},{"RefIn2", 6},{"PXI_ClkMaster", 7}, };

  NiRFSAFeatureToggles feature_toggles_;
};

} // namespace nirfsa_grpc

namespace nidevice_grpc {
namespace converters {
template <>
void convert_to_grpc(const niRFSA_wfmInfo_struct& input, nirfsa_grpc::WaveformInfo* output);
template <>
void convert_to_grpc(const niRFSA_coefficientInfo_struct& input, nirfsa_grpc::CoefficientInfo* output);
template <>
void convert_to_grpc(const niRFSA_spectrumInfo_struct& input, nirfsa_grpc::SpectrumInfo* output);
} // namespace converters
} // namespace nidevice_grpc

#endif  // NIRFSA_GRPC_SERVICE_H

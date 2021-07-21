//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Mock of LibraryInterface for NI-DAQMX
//---------------------------------------------------------------------
#ifndef NIDAQMX_GRPC_MOCK_LIBRARY_H
#define NIDAQMX_GRPC_MOCK_LIBRARY_H

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "nidaqmx_library_interface.h"

namespace ni {
namespace tests {
namespace unit {

class NiDAQmxMockLibrary : public nidaqmx_grpc::NiDAQmxLibraryInterface {
 public:
  MOCK_METHOD(int32, AddGlobalChansToTask, (TaskHandle task, const char channelNames[]), (override));
  MOCK_METHOD(int32, AddNetworkDevice, (const char ipAddress[], const char deviceName[], bool32 attemptReservation, float64 timeout, char deviceNameOut[], uInt32 deviceNameOutBufferSize), (override));
  MOCK_METHOD(int32, CalculateReversePolyCoeff, (const float64 forwardCoeffs[], uInt32 numForwardCoeffsIn, float64 minValX, float64 maxValX, int32 numPointsToCompute, int32 reversePolyOrder, float64 reverseCoeffs[]), (override));
  MOCK_METHOD(int32, CfgAnlgEdgeRefTrig, (TaskHandle task, const char triggerSource[], int32 triggerSlope, float64 triggerLevel, uInt32 pretriggerSamples), (override));
  MOCK_METHOD(int32, CfgAnlgEdgeStartTrig, (TaskHandle task, const char triggerSource[], int32 triggerSlope, float64 triggerLevel), (override));
  MOCK_METHOD(int32, CfgAnlgMultiEdgeRefTrig, (TaskHandle task, const char triggerSources[], int32 triggerSlopeArray[], const float64 triggerLevelArray[], uInt32 pretriggerSamples, uInt32 arraySize), (override));
  MOCK_METHOD(int32, CfgAnlgMultiEdgeStartTrig, (TaskHandle task, const char triggerSources[], int32 triggerSlopeArray[], const float64 triggerLevelArray[], uInt32 arraySize), (override));
  MOCK_METHOD(int32, CfgAnlgWindowRefTrig, (TaskHandle task, const char triggerSource[], int32 triggerWhen, float64 windowTop, float64 windowBottom, uInt32 pretriggerSamples), (override));
  MOCK_METHOD(int32, CfgAnlgWindowStartTrig, (TaskHandle task, const char triggerSource[], int32 triggerWhen, float64 windowTop, float64 windowBottom), (override));
  MOCK_METHOD(int32, CfgBurstHandshakingTimingExportClock, (TaskHandle task, int32 sampleMode, uInt64 sampsPerChan, float64 sampleClkRate, const char sampleClkOutpTerm[], int32 sampleClkPulsePolarity, int32 pauseWhen, int32 readyEventActiveLevel), (override));
  MOCK_METHOD(int32, CfgBurstHandshakingTimingImportClock, (TaskHandle task, int32 sampleMode, uInt64 sampsPerChan, float64 sampleClkRate, const char sampleClkSrc[], int32 sampleClkActiveEdge, int32 pauseWhen, int32 readyEventActiveLevel), (override));
  MOCK_METHOD(int32, CfgChangeDetectionTiming, (TaskHandle task, const char risingEdgeChan[], const char fallingEdgeChan[], int32 sampleMode, uInt64 sampsPerChan), (override));
  MOCK_METHOD(int32, CfgDigEdgeRefTrig, (TaskHandle task, const char triggerSource[], int32 triggerEdge, uInt32 pretriggerSamples), (override));
  MOCK_METHOD(int32, CfgDigEdgeStartTrig, (TaskHandle task, const char triggerSource[], int32 triggerEdge), (override));
  MOCK_METHOD(int32, CfgDigPatternRefTrig, (TaskHandle task, const char triggerSource[], const char triggerPattern[], int32 triggerWhen, uInt32 pretriggerSamples), (override));
  MOCK_METHOD(int32, CfgDigPatternStartTrig, (TaskHandle task, const char triggerSource[], const char triggerPattern[], int32 triggerWhen), (override));
  MOCK_METHOD(int32, CfgHandshakingTiming, (TaskHandle task, int32 sampleMode, uInt64 sampsPerChan), (override));
  MOCK_METHOD(int32, CfgImplicitTiming, (TaskHandle task, int32 sampleMode, uInt64 sampsPerChan), (override));
  MOCK_METHOD(int32, CfgInputBuffer, (TaskHandle task, uInt32 numSampsPerChan), (override));
  MOCK_METHOD(int32, CfgOutputBuffer, (TaskHandle task, uInt32 numSampsPerChan), (override));
  MOCK_METHOD(int32, CfgPipelinedSampClkTiming, (TaskHandle task, const char source[], float64 rate, int32 activeEdge, int32 sampleMode, uInt64 sampsPerChan), (override));
  MOCK_METHOD(int32, CfgSampClkTiming, (TaskHandle task, const char source[], float64 rate, int32 activeEdge, int32 sampleMode, uInt64 sampsPerChan), (override));
  MOCK_METHOD(int32, CfgWatchdogAOExpirStates, (TaskHandle task, const char channelNames[], const float64 expirStateArray[], int32 outputTypeArray[], uInt32 arraySize), (override));
  MOCK_METHOD(int32, CfgWatchdogCOExpirStates, (TaskHandle task, const char channelNames[], int32 expirStateArray[], uInt32 arraySize), (override));
  MOCK_METHOD(int32, CfgWatchdogDOExpirStates, (TaskHandle task, const char channelNames[], int32 expirStateArray[], uInt32 arraySize), (override));
  MOCK_METHOD(int32, ClearTask, (TaskHandle task), (override));
  MOCK_METHOD(int32, ConfigureLogging, (TaskHandle task, const char filePath[], int32 loggingMode, const char groupName[], int32 operation), (override));
  MOCK_METHOD(int32, ConnectTerms, (const char sourceTerminal[], const char destinationTerminal[], int32 signalModifiers), (override));
  MOCK_METHOD(int32, ControlWatchdogTask, (TaskHandle task, int32 action), (override));
  MOCK_METHOD(int32, CreateAIAccel4WireDCVoltageChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], int32 terminalConfig, float64 minVal, float64 maxVal, int32 units, float64 sensitivity, int32 sensitivityUnits, int32 voltageExcitSource, float64 voltageExcitVal, bool32 useExcitForScaling, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateAIAccelChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], int32 terminalConfig, float64 minVal, float64 maxVal, int32 units, float64 sensitivity, int32 sensitivityUnits, int32 currentExcitSource, float64 currentExcitVal, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateAIAccelChargeChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], int32 terminalConfig, float64 minVal, float64 maxVal, int32 units, float64 sensitivity, int32 sensitivityUnits, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateAIBridgeChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, int32 bridgeConfig, int32 voltageExcitSource, float64 voltageExcitVal, float64 nominalBridgeResistance, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateAIChargeChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], int32 terminalConfig, float64 minVal, float64 maxVal, int32 units, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateAICurrentChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], int32 terminalConfig, float64 minVal, float64 maxVal, int32 units, int32 shuntResistorLoc, float64 extShuntResistorVal, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateAICurrentRMSChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], int32 terminalConfig, float64 minVal, float64 maxVal, int32 units, int32 shuntResistorLoc, float64 extShuntResistorVal, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateAIForceBridgePolynomialChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, int32 bridgeConfig, int32 voltageExcitSource, float64 voltageExcitVal, float64 nominalBridgeResistance, const float64 forwardCoeffs[], uInt32 numForwardCoeffs, const float64 reverseCoeffs[], uInt32 numReverseCoeffs, int32 electricalUnits, int32 physicalUnits, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateAIForceBridgeTableChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, int32 bridgeConfig, int32 voltageExcitSource, float64 voltageExcitVal, float64 nominalBridgeResistance, const float64 electricalVals[], uInt32 numElectricalVals, int32 electricalUnits, const float64 physicalVals[], uInt32 numPhysicalVals, int32 physicalUnits, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateAIForceBridgeTwoPointLinChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, int32 bridgeConfig, int32 voltageExcitSource, float64 voltageExcitVal, float64 nominalBridgeResistance, float64 firstElectricalVal, float64 secondElectricalVal, int32 electricalUnits, float64 firstPhysicalVal, float64 secondPhysicalVal, int32 physicalUnits, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateAIForceIEPEChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], int32 terminalConfig, float64 minVal, float64 maxVal, int32 units, float64 sensitivity, int32 sensitivityUnits, int32 currentExcitSource, float64 currentExcitVal, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateAIFreqVoltageChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, float64 thresholdLevel, float64 hysteresis, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateAIMicrophoneChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], int32 terminalConfig, int32 units, float64 micSensitivity, float64 maxSndPressLevel, int32 currentExcitSource, float64 currentExcitVal, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateAIPosEddyCurrProxProbeChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, float64 sensitivity, int32 sensitivityUnits, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateAIPosLVDTChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, float64 sensitivity, int32 sensitivityUnits, int32 voltageExcitSource, float64 voltageExcitVal, float64 voltageExcitFreq, int32 acExcitWireMode, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateAIPosRVDTChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, float64 sensitivity, int32 sensitivityUnits, int32 voltageExcitSource, float64 voltageExcitVal, float64 voltageExcitFreq, int32 acExcitWireMode, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateAIPressureBridgePolynomialChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, int32 bridgeConfig, int32 voltageExcitSource, float64 voltageExcitVal, float64 nominalBridgeResistance, const float64 forwardCoeffs[], uInt32 numForwardCoeffs, const float64 reverseCoeffs[], uInt32 numReverseCoeffs, int32 electricalUnits, int32 physicalUnits, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateAIPressureBridgeTableChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, int32 bridgeConfig, int32 voltageExcitSource, float64 voltageExcitVal, float64 nominalBridgeResistance, const float64 electricalVals[], uInt32 numElectricalVals, int32 electricalUnits, const float64 physicalVals[], uInt32 numPhysicalVals, int32 physicalUnits, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateAIPressureBridgeTwoPointLinChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, int32 bridgeConfig, int32 voltageExcitSource, float64 voltageExcitVal, float64 nominalBridgeResistance, float64 firstElectricalVal, float64 secondElectricalVal, int32 electricalUnits, float64 firstPhysicalVal, float64 secondPhysicalVal, int32 physicalUnits, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateAIRTDChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, int32 rtdType, int32 resistanceConfig, int32 currentExcitSource, float64 currentExcitVal, float64 r0), (override));
  MOCK_METHOD(int32, CreateAIResistanceChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, int32 resistanceConfig, int32 currentExcitSource, float64 currentExcitVal, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateAIRosetteStrainGageChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 rosetteType, float64 gageOrientation, int32 rosetteMeasTypes[], uInt32 numRosetteMeasTypes, int32 strainConfig, int32 voltageExcitSource, float64 voltageExcitVal, float64 gageFactor, float64 nominalGageResistance, float64 poissonRatio, float64 leadWireResistance), (override));
  MOCK_METHOD(int32, CreateAIStrainGageChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, int32 strainConfig, int32 voltageExcitSource, float64 voltageExcitVal, float64 gageFactor, float64 initialBridgeVoltage, float64 nominalGageResistance, float64 poissonRatio, float64 leadWireResistance, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateAITempBuiltInSensorChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], int32 units), (override));
  MOCK_METHOD(int32, CreateAIThrmcplChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, int32 thermocoupleType, int32 cjcSource, float64 cjcVal, const char cjcChannel[]), (override));
  MOCK_METHOD(int32, CreateAIThrmstrChanIex, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, int32 resistanceConfig, int32 currentExcitSource, float64 currentExcitVal, float64 a, float64 b, float64 c), (override));
  MOCK_METHOD(int32, CreateAIThrmstrChanVex, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, int32 resistanceConfig, int32 voltageExcitSource, float64 voltageExcitVal, float64 a, float64 b, float64 c, float64 r1), (override));
  MOCK_METHOD(int32, CreateAITorqueBridgePolynomialChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, int32 bridgeConfig, int32 voltageExcitSource, float64 voltageExcitVal, float64 nominalBridgeResistance, const float64 forwardCoeffs[], uInt32 numForwardCoeffs, const float64 reverseCoeffs[], uInt32 numReverseCoeffs, int32 electricalUnits, int32 physicalUnits, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateAITorqueBridgeTableChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, int32 bridgeConfig, int32 voltageExcitSource, float64 voltageExcitVal, float64 nominalBridgeResistance, const float64 electricalVals[], uInt32 numElectricalVals, int32 electricalUnits, const float64 physicalVals[], uInt32 numPhysicalVals, int32 physicalUnits, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateAITorqueBridgeTwoPointLinChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, int32 bridgeConfig, int32 voltageExcitSource, float64 voltageExcitVal, float64 nominalBridgeResistance, float64 firstElectricalVal, float64 secondElectricalVal, int32 electricalUnits, float64 firstPhysicalVal, float64 secondPhysicalVal, int32 physicalUnits, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateAIVelocityIEPEChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], int32 terminalConfig, float64 minVal, float64 maxVal, int32 units, float64 sensitivity, int32 sensitivityUnits, int32 currentExcitSource, float64 currentExcitVal, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateAIVoltageChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], int32 terminalConfig, float64 minVal, float64 maxVal, int32 units, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateAIVoltageChanWithExcit, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], int32 terminalConfig, float64 minVal, float64 maxVal, int32 units, int32 bridgeConfig, int32 voltageExcitSource, float64 voltageExcitVal, bool32 useExcitForScaling, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateAIVoltageRMSChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], int32 terminalConfig, float64 minVal, float64 maxVal, int32 units, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateAOCurrentChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateAOFuncGenChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], int32 type, float64 freq, float64 amplitude, float64 offset), (override));
  MOCK_METHOD(int32, CreateAOVoltageChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateCIAngEncoderChan, (TaskHandle task, const char counter[], const char nameToAssignToChannel[], int32 decodingType, bool32 zidxEnable, float64 zidxVal, int32 zidxPhase, int32 units, uInt32 pulsesPerRev, float64 initialAngle, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateCIAngVelocityChan, (TaskHandle task, const char counter[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 decodingType, int32 units, uInt32 pulsesPerRev, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateCICountEdgesChan, (TaskHandle task, const char counter[], const char nameToAssignToChannel[], int32 edge, uInt32 initialCount, int32 countDirection), (override));
  MOCK_METHOD(int32, CreateCIDutyCycleChan, (TaskHandle task, const char counter[], const char nameToAssignToChannel[], float64 minFreq, float64 maxFreq, int32 edge, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateCIFreqChan, (TaskHandle task, const char counter[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, int32 edge, int32 measMethod, float64 measTime, uInt32 divisor, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateCIGPSTimestampChan, (TaskHandle task, const char counter[], const char nameToAssignToChannel[], int32 units, int32 syncMethod, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateCILinEncoderChan, (TaskHandle task, const char counter[], const char nameToAssignToChannel[], int32 decodingType, bool32 zidxEnable, float64 zidxVal, int32 zidxPhase, int32 units, float64 distPerPulse, float64 initialPos, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateCILinVelocityChan, (TaskHandle task, const char counter[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 decodingType, int32 units, float64 distPerPulse, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateCIPeriodChan, (TaskHandle task, const char counter[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, int32 edge, int32 measMethod, float64 measTime, uInt32 divisor, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateCIPulseChanFreq, (TaskHandle task, const char counter[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units), (override));
  MOCK_METHOD(int32, CreateCIPulseChanTicks, (TaskHandle task, const char counter[], const char nameToAssignToChannel[], const char sourceTerminal[], float64 minVal, float64 maxVal), (override));
  MOCK_METHOD(int32, CreateCIPulseChanTime, (TaskHandle task, const char counter[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units), (override));
  MOCK_METHOD(int32, CreateCIPulseWidthChan, (TaskHandle task, const char counter[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, int32 startingEdge, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateCISemiPeriodChan, (TaskHandle task, const char counter[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateCITwoEdgeSepChan, (TaskHandle task, const char counter[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, int32 firstEdge, int32 secondEdge, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateCOPulseChanFreq, (TaskHandle task, const char counter[], const char nameToAssignToChannel[], int32 units, int32 idleState, float64 initialDelay, float64 freq, float64 dutyCycle), (override));
  MOCK_METHOD(int32, CreateCOPulseChanTicks, (TaskHandle task, const char counter[], const char nameToAssignToChannel[], const char sourceTerminal[], int32 idleState, int32 initialDelay, int32 lowTicks, int32 highTicks), (override));
  MOCK_METHOD(int32, CreateCOPulseChanTime, (TaskHandle task, const char counter[], const char nameToAssignToChannel[], int32 units, int32 idleState, float64 initialDelay, float64 lowTime, float64 highTime), (override));
  MOCK_METHOD(int32, CreateDIChan, (TaskHandle task, const char lines[], const char nameToAssignToLines[], int32 lineGrouping), (override));
  MOCK_METHOD(int32, CreateDOChan, (TaskHandle task, const char lines[], const char nameToAssignToLines[], int32 lineGrouping), (override));
  MOCK_METHOD(int32, CreateLinScale, (const char name[], float64 slope, float64 yIntercept, int32 preScaledUnits, const char scaledUnits[]), (override));
  MOCK_METHOD(int32, CreateMapScale, (const char name[], float64 prescaledMin, float64 prescaledMax, float64 scaledMin, float64 scaledMax, int32 preScaledUnits, const char scaledUnits[]), (override));
  MOCK_METHOD(int32, CreatePolynomialScale, (const char name[], const float64 forwardCoeffs[], uInt32 numForwardCoeffsIn, const float64 reverseCoeffs[], uInt32 numReverseCoeffsIn, int32 preScaledUnits, const char scaledUnits[]), (override));
  MOCK_METHOD(int32, CreateTEDSAIAccelChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], int32 terminalConfig, float64 minVal, float64 maxVal, int32 units, int32 currentExcitSource, float64 currentExcitVal, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateTEDSAIBridgeChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, int32 voltageExcitSource, float64 voltageExcitVal, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateTEDSAICurrentChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], int32 terminalConfig, float64 minVal, float64 maxVal, int32 units, int32 shuntResistorLoc, float64 extShuntResistorVal, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateTEDSAIForceBridgeChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, int32 voltageExcitSource, float64 voltageExcitVal, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateTEDSAIForceIEPEChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], int32 terminalConfig, float64 minVal, float64 maxVal, int32 units, int32 currentExcitSource, float64 currentExcitVal, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateTEDSAIMicrophoneChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], int32 terminalConfig, int32 units, float64 maxSndPressLevel, int32 currentExcitSource, float64 currentExcitVal, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateTEDSAIPosLVDTChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, int32 voltageExcitSource, float64 voltageExcitVal, float64 voltageExcitFreq, int32 acExcitWireMode, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateTEDSAIPosRVDTChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, int32 voltageExcitSource, float64 voltageExcitVal, float64 voltageExcitFreq, int32 acExcitWireMode, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateTEDSAIPressureBridgeChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, int32 voltageExcitSource, float64 voltageExcitVal, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateTEDSAIRTDChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, int32 resistanceConfig, int32 currentExcitSource, float64 currentExcitVal), (override));
  MOCK_METHOD(int32, CreateTEDSAIResistanceChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, int32 resistanceConfig, int32 currentExcitSource, float64 currentExcitVal, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateTEDSAIStrainGageChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, int32 voltageExcitSource, float64 voltageExcitVal, float64 initialBridgeVoltage, float64 leadWireResistance, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateTEDSAIThrmcplChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, int32 cjcSource, float64 cjcVal, const char cjcChannel[]), (override));
  MOCK_METHOD(int32, CreateTEDSAIThrmstrChanIex, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, int32 resistanceConfig, int32 currentExcitSource, float64 currentExcitVal), (override));
  MOCK_METHOD(int32, CreateTEDSAIThrmstrChanVex, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, int32 resistanceConfig, int32 voltageExcitSource, float64 voltageExcitVal, float64 r1), (override));
  MOCK_METHOD(int32, CreateTEDSAITorqueBridgeChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], float64 minVal, float64 maxVal, int32 units, int32 voltageExcitSource, float64 voltageExcitVal, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateTEDSAIVoltageChan, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], int32 terminalConfig, float64 minVal, float64 maxVal, int32 units, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateTEDSAIVoltageChanWithExcit, (TaskHandle task, const char physicalChannel[], const char nameToAssignToChannel[], int32 terminalConfig, float64 minVal, float64 maxVal, int32 units, int32 voltageExcitSource, float64 voltageExcitVal, const char customScaleName[]), (override));
  MOCK_METHOD(int32, CreateTableScale, (const char name[], const float64 prescaledVals[], uInt32 numPrescaledValsIn, const float64 scaledVals[], uInt32 numScaledValsIn, int32 preScaledUnits, const char scaledUnits[]), (override));
  MOCK_METHOD(int32, CreateTask, (const char sessionName[], TaskHandle* task), (override));
  MOCK_METHOD(int32, CreateWatchdogTimerTask, (const char deviceName[], const char sessionName[], TaskHandle* task, float64 timeout, const char lines[], int32 expState), (override));
  MOCK_METHOD(int32, CreateWatchdogTimerTaskEx, (const char deviceName[], const char sessionName[], TaskHandle* task, float64 timeout), (override));
  MOCK_METHOD(int32, DeleteNetworkDevice, (const char deviceName[]), (override));
  MOCK_METHOD(int32, DisableRefTrig, (TaskHandle task), (override));
  MOCK_METHOD(int32, DisableStartTrig, (TaskHandle task), (override));
  MOCK_METHOD(int32, DisconnectTerms, (const char sourceTerminal[], const char destinationTerminal[]), (override));
  MOCK_METHOD(int32, ExportSignal, (TaskHandle task, int32 signalID, const char outputTerminal[]), (override));
  MOCK_METHOD(int32, GetAIChanCalCalDate, (TaskHandle task, const char channelName[], uInt32* year, uInt32* month, uInt32* day, uInt32* hour, uInt32* minute), (override));
  MOCK_METHOD(int32, GetAIChanCalExpDate, (TaskHandle task, const char channelName[], uInt32* year, uInt32* month, uInt32* day, uInt32* hour, uInt32* minute), (override));
  MOCK_METHOD(int32, GetDigitalLogicFamilyPowerUpState, (const char deviceName[], int32* logicFamily), (override));
  MOCK_METHOD(int32, GetErrorString, (int32 errorCode, char errorString[], uInt32 bufferSize), (override));
  MOCK_METHOD(int32, GetExtendedErrorInfo, (char errorString[], uInt32 bufferSize), (override));
  MOCK_METHOD(int32, GetNthTaskChannel, (TaskHandle task, uInt32 index, char buffer[], int32 bufferSize), (override));
  MOCK_METHOD(int32, GetNthTaskDevice, (TaskHandle task, uInt32 index, char buffer[], int32 bufferSize), (override));
  MOCK_METHOD(int32, GetNthTaskReadChannel, (TaskHandle task, uInt32 index, char buffer[], int32 bufferSize), (override));
  MOCK_METHOD(int32, IsTaskDone, (TaskHandle task, bool32* isTaskDone), (override));
  MOCK_METHOD(int32, LoadTask, (const char sessionName[], TaskHandle* task), (override));
  MOCK_METHOD(int32, ReadAnalogF64, (TaskHandle task, int32 numSampsPerChan, float64 timeout, int32 fillMode, float64 readArray[], uInt32 arraySizeInSamps, int32* sampsPerChanRead, bool32* reserved), (override));
  MOCK_METHOD(int32, ReadAnalogScalarF64, (TaskHandle task, float64 timeout, float64* value, bool32* reserved), (override));
  MOCK_METHOD(int32, ReadBinaryI16, (TaskHandle task, int32 numSampsPerChan, float64 timeout, int32 fillMode, int16 readArray[], uInt32 arraySizeInSamps, int32* sampsPerChanRead, bool32* reserved), (override));
  MOCK_METHOD(int32, ReadBinaryI32, (TaskHandle task, int32 numSampsPerChan, float64 timeout, int32 fillMode, int32 readArray[], uInt32 arraySizeInSamps, int32* sampsPerChanRead, bool32* reserved), (override));
  MOCK_METHOD(int32, ReadBinaryU16, (TaskHandle task, int32 numSampsPerChan, float64 timeout, int32 fillMode, uInt16 readArray[], uInt32 arraySizeInSamps, int32* sampsPerChanRead, bool32* reserved), (override));
  MOCK_METHOD(int32, ReadBinaryU32, (TaskHandle task, int32 numSampsPerChan, float64 timeout, int32 fillMode, uInt32 readArray[], uInt32 arraySizeInSamps, int32* sampsPerChanRead, bool32* reserved), (override));
  MOCK_METHOD(int32, ReadCounterF64, (TaskHandle task, int32 numSampsPerChan, float64 timeout, float64 readArray[], uInt32 arraySizeInSamps, int32* sampsPerChanRead, bool32* reserved), (override));
  MOCK_METHOD(int32, ReadCounterF64Ex, (TaskHandle task, int32 numSampsPerChan, float64 timeout, int32 fillMode, float64 readArray[], uInt32 arraySizeInSamps, int32* sampsPerChanRead, bool32* reserved), (override));
  MOCK_METHOD(int32, ReadCounterScalarF64, (TaskHandle task, float64 timeout, float64* value, bool32* reserved), (override));
  MOCK_METHOD(int32, ReadCounterScalarU32, (TaskHandle task, float64 timeout, uInt32* value, bool32* reserved), (override));
  MOCK_METHOD(int32, ReadCounterU32, (TaskHandle task, int32 numSampsPerChan, float64 timeout, uInt32 readArray[], uInt32 arraySizeInSamps, int32* sampsPerChanRead, bool32* reserved), (override));
  MOCK_METHOD(int32, ReadCounterU32Ex, (TaskHandle task, int32 numSampsPerChan, float64 timeout, int32 fillMode, uInt32 readArray[], uInt32 arraySizeInSamps, int32* sampsPerChanRead, bool32* reserved), (override));
  MOCK_METHOD(int32, ReadCtrFreq, (TaskHandle task, int32 numSampsPerChan, float64 timeout, int32 interleaved, float64 readArrayFrequency[], float64 readArrayDutyCycle[], uInt32 arraySizeInSamps, int32* sampsPerChanRead, bool32* reserved), (override));
  MOCK_METHOD(int32, ReadCtrFreqScalar, (TaskHandle task, float64 timeout, float64* frequency, float64* dutyCycle, bool32* reserved), (override));
  MOCK_METHOD(int32, ReadCtrTicks, (TaskHandle task, int32 numSampsPerChan, float64 timeout, int32 interleaved, uInt32 readArrayHighTicks[], uInt32 readArrayLowTicks[], uInt32 arraySizeInSamps, int32* sampsPerChanRead, bool32* reserved), (override));
  MOCK_METHOD(int32, ReadCtrTicksScalar, (TaskHandle task, float64 timeout, uInt32* highTicks, uInt32* lowTicks, bool32* reserved), (override));
  MOCK_METHOD(int32, ReadCtrTime, (TaskHandle task, int32 numSampsPerChan, float64 timeout, int32 interleaved, float64 readArrayHighTime[], float64 readArrayLowTime[], uInt32 arraySizeInSamps, int32* sampsPerChanRead, bool32* reserved), (override));
  MOCK_METHOD(int32, ReadCtrTimeScalar, (TaskHandle task, float64 timeout, float64* highTime, float64* lowTime, bool32* reserved), (override));
  MOCK_METHOD(int32, ReadDigitalLines, (TaskHandle task, int32 numSampsPerChan, float64 timeout, int32 fillMode, uInt8 readArray[], uInt32 arraySizeInBytes, int32* sampsPerChanRead, int32* numBytesPerSamp, bool32* reserved), (override));
  MOCK_METHOD(int32, ReadDigitalScalarU32, (TaskHandle task, float64 timeout, uInt32* value, bool32* reserved), (override));
  MOCK_METHOD(int32, ReadDigitalU16, (TaskHandle task, int32 numSampsPerChan, float64 timeout, int32 fillMode, uInt16 readArray[], uInt32 arraySizeInSamps, int32* sampsPerChanRead, bool32* reserved), (override));
  MOCK_METHOD(int32, ReadDigitalU32, (TaskHandle task, int32 numSampsPerChan, float64 timeout, int32 fillMode, uInt32 readArray[], uInt32 arraySizeInSamps, int32* sampsPerChanRead, bool32* reserved), (override));
  MOCK_METHOD(int32, ReadDigitalU8, (TaskHandle task, int32 numSampsPerChan, float64 timeout, int32 fillMode, uInt8 readArray[], uInt32 arraySizeInSamps, int32* sampsPerChanRead, bool32* reserved), (override));
  MOCK_METHOD(int32, RegisterDoneEvent, (TaskHandle task, uInt32 options, DAQmxDoneEventCallbackPtr callbackFunction, void* callbackData), (override));
  MOCK_METHOD(int32, ReserveNetworkDevice, (const char deviceName[], bool32 overrideReservation), (override));
  MOCK_METHOD(int32, ResetDevice, (const char deviceName[]), (override));
  MOCK_METHOD(int32, SelfTestDevice, (const char deviceName[]), (override));
  MOCK_METHOD(int32, SetAIChanCalCalDate, (TaskHandle task, const char channelName[], uInt32 year, uInt32 month, uInt32 day, uInt32 hour, uInt32 minute), (override));
  MOCK_METHOD(int32, SetAIChanCalExpDate, (TaskHandle task, const char channelName[], uInt32 year, uInt32 month, uInt32 day, uInt32 hour, uInt32 minute), (override));
  MOCK_METHOD(int32, SetDigitalLogicFamilyPowerUpState, (const char deviceName[], int32 logicFamily), (override));
  MOCK_METHOD(int32, StartNewFile, (TaskHandle task, const char filePath[]), (override));
  MOCK_METHOD(int32, StartTask, (TaskHandle task), (override));
  MOCK_METHOD(int32, StopTask, (TaskHandle task), (override));
  MOCK_METHOD(int32, TaskControl, (TaskHandle task, int32 action), (override));
  MOCK_METHOD(int32, TristateOutputTerm, (const char outputTerminal[]), (override));
  MOCK_METHOD(int32, UnreserveNetworkDevice, (const char deviceName[]), (override));
  MOCK_METHOD(int32, WaitUntilTaskDone, (TaskHandle task, float64 timeToWait), (override));
  MOCK_METHOD(int32, WriteAnalogF64, (TaskHandle task, int32 numSampsPerChan, bool32 autoStart, float64 timeout, int32 dataLayout, const float64 writeArray[], int32* sampsPerChanWritten, bool32* reserved), (override));
  MOCK_METHOD(int32, WriteAnalogScalarF64, (TaskHandle task, bool32 autoStart, float64 timeout, float64 value, bool32* reserved), (override));
  MOCK_METHOD(int32, WriteBinaryI16, (TaskHandle task, int32 numSampsPerChan, bool32 autoStart, float64 timeout, int32 dataLayout, int16 writeArray[], int32* sampsPerChanWritten, bool32* reserved), (override));
  MOCK_METHOD(int32, WriteBinaryI32, (TaskHandle task, int32 numSampsPerChan, bool32 autoStart, float64 timeout, int32 dataLayout, int32 writeArray[], int32* sampsPerChanWritten, bool32* reserved), (override));
  MOCK_METHOD(int32, WriteBinaryU16, (TaskHandle task, int32 numSampsPerChan, bool32 autoStart, float64 timeout, int32 dataLayout, const uInt16 writeArray[], int32* sampsPerChanWritten, bool32* reserved), (override));
  MOCK_METHOD(int32, WriteBinaryU32, (TaskHandle task, int32 numSampsPerChan, bool32 autoStart, float64 timeout, int32 dataLayout, const uInt32 writeArray[], int32* sampsPerChanWritten, bool32* reserved), (override));
  MOCK_METHOD(int32, WriteCtrFreq, (TaskHandle task, int32 numSampsPerChan, bool32 autoStart, float64 timeout, int32 dataLayout, const float64 frequency[], const float64 dutyCycle[], int32* numSampsPerChanWritten, bool32* reserved), (override));
  MOCK_METHOD(int32, WriteCtrFreqScalar, (TaskHandle task, bool32 autoStart, float64 timeout, float64 frequency, float64 dutyCycle, bool32* reserved), (override));
  MOCK_METHOD(int32, WriteCtrTicks, (TaskHandle task, int32 numSampsPerChan, bool32 autoStart, float64 timeout, int32 dataLayout, const uInt32 highTicks[], const uInt32 lowTicks[], int32* numSampsPerChanWritten, bool32* reserved), (override));
  MOCK_METHOD(int32, WriteCtrTicksScalar, (TaskHandle task, bool32 autoStart, float64 timeout, uInt32 highTicks, uInt32 lowTicks, bool32* reserved), (override));
  MOCK_METHOD(int32, WriteCtrTime, (TaskHandle task, int32 numSampsPerChan, bool32 autoStart, float64 timeout, int32 dataLayout, const float64 highTime[], const float64 lowTime[], int32* numSampsPerChanWritten, bool32* reserved), (override));
  MOCK_METHOD(int32, WriteCtrTimeScalar, (TaskHandle task, bool32 autoStart, float64 timeout, float64 highTime, float64 lowTime, bool32* reserved), (override));
  MOCK_METHOD(int32, WriteDigitalLines, (TaskHandle task, int32 numSampsPerChan, bool32 autoStart, float64 timeout, int32 dataLayout, const uInt8 writeArray[], int32* sampsPerChanWritten, bool32* reserved), (override));
  MOCK_METHOD(int32, WriteDigitalScalarU32, (TaskHandle task, bool32 autoStart, float64 timeout, uInt32 value, bool32* reserved), (override));
  MOCK_METHOD(int32, WriteDigitalU16, (TaskHandle task, int32 numSampsPerChan, bool32 autoStart, float64 timeout, int32 dataLayout, const uInt16 writeArray[], int32* sampsPerChanWritten, bool32* reserved), (override));
  MOCK_METHOD(int32, WriteDigitalU32, (TaskHandle task, int32 numSampsPerChan, bool32 autoStart, float64 timeout, int32 dataLayout, const uInt32 writeArray[], int32* sampsPerChanWritten, bool32* reserved), (override));
  MOCK_METHOD(int32, WriteDigitalU8, (TaskHandle task, int32 numSampsPerChan, bool32 autoStart, float64 timeout, int32 dataLayout, const uInt8 writeArray[], int32* sampsPerChanWritten, bool32* reserved), (override));
};

}  // namespace unit
}  // namespace tests
}  // namespace ni
#endif  // NIDAQMX_GRPC_MOCK_LIBRARY_H

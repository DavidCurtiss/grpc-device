enums = {
    'AcpAveragingEnabled': {
        'values': [
            {
                'name': 'FALSE',
                'value': 0
            },
            {
                'name': 'TRUE',
                'value': 1
            }
        ]
    },
    'AcpBurstSynchronizationType': {
        'values': [
            {
                'name': 'NONE',
                'value': 0
            },
            {
                'name': 'PREAMBLE',
                'value': 1
            },
            {
                'name': 'SYNC_WORD',
                'value': 2
            }
        ]
    },
    'AcpOffsetChannelMode': {
        'values': [
            {
                'name': 'SYMMETRIC',
                'value': 0
            },
            {
                'name': 'INBAND',
                'value': 1
            }
        ]
    },
    'AcpResultsMeasurementStatus': {
        'values': [
            {
                'name': 'NOT_APPLICABLE',
                'value': -1
            },
            {
                'name': 'FAIL',
                'value': 0
            },
            {
                'name': 'PASS',
                'value': 1
            }
        ]
    },
    'Boolean': {
        'values': [
            {
                'name': 'FALSE',
                'value': 0
            },
            {
                'name': 'TRUE',
                'value': 1
            }
        ]
    },
    'DigitalEdgeTriggerEdge': {
        'values': [
            {
                'name': 'RISING_EDGE',
                'value': 0
            },
            {
                'name': 'FALLING_EDGE',
                'value': 1
            }
        ]
    },
    'DirectionFindingMode': {
        'values': [
            {
                'name': 'DISABLED',
                'value': 0
            },
            {
                'name': 'ANGLE_OF_ARRIVAL',
                'value': 1
            },
            {
                'name': 'ANGLE_OF_DEPARTURE',
                'value': 2
            }
        ]
    },
    'FrequencyRangeAveragingEnabled': {
        'values': [
            {
                'name': 'FALSE',
                'value': 0
            },
            {
                'name': 'TRUE',
                'value': 1
            }
        ]
    },
    'FrequencyReferenceSource': {
        'generate-mappings': True,
        'values': [
            {
                'name': 'ONBOARD_CLOCK',
                'value': 'OnboardClock'
            },
            {
                'name': 'REF_IN',
                'value': 'RefIn'
            },
            {
                'name': 'PXI_CLK',
                'value': 'PXI_Clk'
            },
            {
                'name': 'CLK_IN',
                'value': 'ClkIn'
            }
        ]
    },
    'IQPowerEdgeTriggerLevelType': {
        'values': [
            {
                'name': 'RELATIVE',
                'value': 0
            },
            {
                'name': 'ABSOLUTE',
                'value': 1
            }
        ]
    },
    'IQPowerEdgeTriggerSlope': {
        'values': [
            {
                'name': 'RISING_SLOPE',
                'value': 0
            },
            {
                'name': 'FALLING_SLOPE',
                'value': 1
            }
        ]
    },
    'LimitedConfigurationChange': {
        'values': [
            {
                'name': 'DISABLED',
                'value': 0
            },
            {
                'name': 'NO_CHANGE',
                'value': 1
            },
            {
                'name': 'FREQUENCY',
                'value': 2
            },
            {
                'name': 'REFERENCE_LEVEL',
                'value': 3
            },
            {
                'name': 'FREQUENCY_AND_REFERENCE_LEVEL',
                'value': 4
            },
            {
                'name': 'SELECTED_PORTS_FREQUENCY_AND_REFERENCE_LEVEL',
                'value': 5
            }
        ]
    },
    'MeasurementTypes': {
        'values': [
            {
                'name': 'TXP',
                'value': 1
            },
            {
                'name': 'MODACC',
                'value': 2
            },
            {
                'name': '20_DB_BANDWIDTH',
                'value': 4
            },
            {
                'name': 'FREQUENCY_RANGE',
                'value': 8
            },
            {
                'name': 'ACP',
                'value': 16
            }
        ]
    },
    'MechanicalAttenuationAuto': {
        'values': [
            {
                'name': 'FALSE',
                'value': 0
            },
            {
                'name': 'TRUE',
                'value': 1
            }
        ]
    },
    'ModAccAveragingEnabled': {
        'values': [
            {
                'name': 'FALSE',
                'value': 0
            },
            {
                'name': 'TRUE',
                'value': 1
            }
        ]
    },
    'ModAccBurstSynchronizationType': {
        'values': [
            {
                'name': 'NONE',
                'value': 0
            },
            {
                'name': 'PREAMBLE',
                'value': 1
            },
            {
                'name': 'SYNC_WORD',
                'value': 2
            }
        ]
    },
    'ModAccIQOriginOffsetCorrectionEnabled': {
        'values': [
            {
                'name': 'FALSE',
                'value': 0
            },
            {
                'name': 'TRUE',
                'value': 1
            }
        ]
    },
    'PacketType': {
        'values': [
            {
                'name': 'UNKNOWN',
                'value': -1
            },
            {
                'name': 'DH1',
                'value': 0
            },
            {
                'name': 'DH3',
                'value': 1
            },
            {
                'name': 'DH5',
                'value': 2
            },
            {
                'name': 'DM1',
                'value': 3
            },
            {
                'name': 'DM3',
                'value': 4
            },
            {
                'name': 'DM5',
                'value': 5
            },
            {
                'name': '2_DH1',
                'value': 6
            },
            {
                'name': '2_DH3',
                'value': 7
            },
            {
                'name': '2_DH5',
                'value': 8
            },
            {
                'name': '3_DH1',
                'value': 9
            },
            {
                'name': '3_DH3',
                'value': 10
            },
            {
                'name': '3_DH5',
                'value': 11
            },
            {
                'name': '2_EV3',
                'value': 12
            },
            {
                'name': '2_EV5',
                'value': 13
            },
            {
                'name': '3_EV3',
                'value': 14
            },
            {
                'name': '3_EV5',
                'value': 15
            },
            {
                'name': 'LE',
                'value': 16
            }
        ]
    },
    'PayloadBitPattern': {
        'values': [
            {
                'name': 'STANDARD_DEFINED',
                'value': 0
            },
            {
                'name': '11110000',
                'value': 1
            },
            {
                'name': '10101010',
                'value': 2
            }
        ]
    },
    'PayloadLengthMode': {
        'values': [
            {
                'name': 'MANUAL',
                'value': 0
            },
            {
                'name': 'AUTO',
                'value': 1
            }
        ]
    },
    'RFAttenuationAuto': {
        'values': [
            {
                'name': 'FALSE',
                'value': 0
            },
            {
                'name': 'TRUE',
                'value': 1
            }
        ]
    },
    'Standard': {
        'values': [
            {
                'name': 'BR_EDR',
                'value': 0
            },
            {
                'name': 'LE',
                'value': 1
            }
        ]
    },
    'TriggerMinimumQuietTimeMode': {
        'values': [
            {
                'name': 'MANUAL',
                'value': 0
            },
            {
                'name': 'AUTO',
                'value': 1
            }
        ]
    },
    'TriggerType': {
        'values': [
            {
                'name': 'NONE',
                'value': 0
            },
            {
                'name': 'DIGITAL_EDGE',
                'value': 1
            },
            {
                'name': 'IQ_POWER_EDGE',
                'value': 2
            },
            {
                'name': 'SOFTWARE',
                'value': 3
            }
        ]
    },
    'TwentydBBandwidthAveragingEnabled': {
        'values': [
            {
                'name': 'FALSE',
                'value': 0
            },
            {
                'name': 'TRUE',
                'value': 1
            }
        ]
    },
    'TxpAveragingEnabled': {
        'values': [
            {
                'name': 'FALSE',
                'value': 0
            },
            {
                'name': 'TRUE',
                'value': 1
            }
        ]
    },
    'TxpBurstSynchronizationType': {
        'values': [
            {
                'name': 'NONE',
                'value': 0
            },
            {
                'name': 'PREAMBLE',
                'value': 1
            },
            {
                'name': 'SYNC_WORD',
                'value': 2
            }
        ]
    }
}

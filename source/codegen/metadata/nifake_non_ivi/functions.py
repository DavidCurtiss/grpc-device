# -*- coding: utf-8 -*-
functions = {
    'Close': {
        'parameters': [
            {
                'direction': 'in',
                'name': 'handle',
                'type': 'FakeHandle'
            }
        ],
        'returns': 'int32'
    },
    'Init': {
        'init_method': True,
        'parameters': [
            {
                'direction': 'in',
                'name': 'sessionName',
                'type': 'const char[]',
                'is_session_name': True
            },
            {
                'direction': 'out',
                'name': 'handle',
                'type': 'FakeHandle'
            }
        ],
        'returns': 'int32'
    },
    'InitWithHandleNameAsSessionName': {
        'init_method': True,
        'parameters': [
            {
                'direction': 'in',
                'name': 'handleName',
                'type': 'const char[]',
                'is_session_name': True
            },
            {
                'direction': 'out',
                'name': 'handle',
                'type': 'FakeHandle'
            }
        ],
        'returns': 'int32'
    },
    'InputArraysWithNarrowIntegerTypes': {
        'parameters': [
            {
                'direction': 'in',
                'name': 'u16Array',
                'type': 'const myUInt16[]',
                'coerced': True
            },
            {
                'direction': 'in',
                'name': 'i16Array',
                'type': 'const myInt16[]',
                'coerced': True
            },
            {
                'direction': 'in',
                'name': 'i8Array',
                'type': 'const myInt8[]',
                'coerced': True
            }
        ],
        'returns': 'int32'
    },
    'IotaWithCustomSize': {
        'parameters': [
            {
                'direction': 'in',
                'name': 'sizeOne',
                'type': 'int32'
            },
            {
                'direction': 'in',
                'name': 'sizeTwo',
                'type': 'int32'
            },
            {
                'direction': 'out',
                'name': 'data',
                'size': {
                    'mechanism': 'custom-code',
                    'value': '(sizeOne < 0) ? sizeTwo : sizeOne + 1'
                },
                'type': 'int32[]'
            },
        ],
        'returns': 'int32'
    },
    'OutputArraysWithNarrowIntegerTypes': {
        'parameters': [
            {
                'direction': 'in',
                'name': 'numberOfU16Samples',
                'type': 'int32'
            },
            {
                'direction': 'out',
                'name': 'u16Data',
                'size': {
                    'mechanism': 'passed-in',
                    'value': 'numberOfU16Samples'
                },
                'type': 'myUInt16[]',
                'coerced': True
            },
            {
                'direction': 'in',
                'name': 'numberOfI16Samples',
                'type': 'int32'
            },
            {
                'direction': 'out',
                'name': 'i16Data',
                'size': {
                    'mechanism': 'passed-in',
                    'value': 'numberOfI16Samples'
                },
                'type': 'myInt16[]',
                'coerced': True
            },
            {
                'direction': 'in',
                'name': 'numberOfI8Samples',
                'type': 'int32'
            },
            {
                'direction': 'out',
                'name': 'i8Data',
                'size': {
                    'mechanism': 'passed-in',
                    'value': 'numberOfI8Samples'
                },
                'type': 'myInt8[]',
                'coerced': True
            },
        ],
        'returns': 'int32'
    },
    'InputArrayOfBytes': {
        'parameters': [
            {
                'direction': 'in',
                'name': 'u8Array',
                'type': 'const myUInt8[]',
            },
        ],
        'returns': 'int32'
    },
    'OutputArrayOfBytes': {
        'parameters': [
            {
                'direction': 'in',
                'name': 'numberOfU8Samples',
                'type': 'int32'
            },
            {
                'direction': 'out',
                'name': 'u8Data',
                'size': {
                    'mechanism': 'passed-in',
                    'value': 'numberOfU8Samples'
                },
                'type': 'myUInt8[]',
            },
        ],
        'returns': 'int32'
    },
    'RegisterCallback': {
        'codegen_method': 'CustomCode',
        'parameters': [
            {
                'direction': 'in',
                'name': 'inputData',
                'type': 'myInt16'
            },
            {
                'callback_params': [
                    {
                        'name': 'echoData',
                        'type': 'myInt16'
                    },
                ],
                'direction': 'in',
                'include_in_proto': False,
                'name': 'callbackFunction',
                'type': 'CallbackPtr'
            },
            {
                'direction': 'out',
                'include_in_proto': False,
                'name': 'callbackData',
                'type': 'void'
            }
        ],
        'returns': 'int32'
    }
}

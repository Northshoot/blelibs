/**
* This file is autogenerated by nRFgo Studio 1.17.0.3211
*/

#ifndef SETUP_MESSAGES_H__
#define SETUP_MESSAGES_H__

#include "hal_platform.h"
#include "aci.h"


#define SETUP_ID 1
#define SETUP_FORMAT 3 /** nRF8001 D */
#define ACI_DYNAMIC_DATA_SIZE 205

/* Service: TX Power - Characteristic: TX Power Level - Pipe: SET */
#define PIPE_TX_POWER_TX_POWER_LEVEL_SET          1
#define PIPE_TX_POWER_TX_POWER_LEVEL_SET_MAX_SIZE 1

/* Service: Immediate Alert - Characteristic: Alert Level - Pipe: RX */
#define PIPE_IMMEDIATE_ALERT_ALERT_LEVEL_RX          2
#define PIPE_IMMEDIATE_ALERT_ALERT_LEVEL_RX_MAX_SIZE 1

/* Service: Link Loss Alert - Characteristic: Alert Level - Pipe: RX_ACK_AUTO */
#define PIPE_LINK_LOSS_ALERT_ALERT_LEVEL_RX_ACK_AUTO          3
#define PIPE_LINK_LOSS_ALERT_ALERT_LEVEL_RX_ACK_AUTO_MAX_SIZE 1

/* Service: Battery - Characteristic: Battery Level - Pipe: TX */
#define PIPE_BATTERY_BATTERY_LEVEL_TX          4
#define PIPE_BATTERY_BATTERY_LEVEL_TX_MAX_SIZE 1

/* Service: Battery - Characteristic: Battery Level - Pipe: SET */
#define PIPE_BATTERY_BATTERY_LEVEL_SET          5
#define PIPE_BATTERY_BATTERY_LEVEL_SET_MAX_SIZE 1

/* Service: Device Information - Characteristic: Hardware Revision String - Pipe: SET */
#define PIPE_DEVICE_INFORMATION_HARDWARE_REVISION_STRING_SET          6
#define PIPE_DEVICE_INFORMATION_HARDWARE_REVISION_STRING_SET_MAX_SIZE 9

/* Service: Nordic Device Firmware Update Service - Characteristic: DFU Packet - Pipe: RX */
#define PIPE_NORDIC_DEVICE_FIRMWARE_UPDATE_SERVICE_DFU_PACKET_RX          7
#define PIPE_NORDIC_DEVICE_FIRMWARE_UPDATE_SERVICE_DFU_PACKET_RX_MAX_SIZE 20

/* Service: Nordic Device Firmware Update Service - Characteristic: DFU Control Point - Pipe: TX */
#define PIPE_NORDIC_DEVICE_FIRMWARE_UPDATE_SERVICE_DFU_CONTROL_POINT_TX          8
#define PIPE_NORDIC_DEVICE_FIRMWARE_UPDATE_SERVICE_DFU_CONTROL_POINT_TX_MAX_SIZE 20

/* Service: Nordic Device Firmware Update Service - Characteristic: DFU Control Point - Pipe: RX_ACK_AUTO */
#define PIPE_NORDIC_DEVICE_FIRMWARE_UPDATE_SERVICE_DFU_CONTROL_POINT_RX_ACK_AUTO          9
#define PIPE_NORDIC_DEVICE_FIRMWARE_UPDATE_SERVICE_DFU_CONTROL_POINT_RX_ACK_AUTO_MAX_SIZE 20

/* Service: Immediate Alert - Characteristic: Alert Level - Pipe: TX */
#define PIPE_IMMEDIATE_ALERT_ALERT_LEVEL_TX_1          10
#define PIPE_IMMEDIATE_ALERT_ALERT_LEVEL_TX_1_MAX_SIZE 1


#define NUMBER_OF_PIPES 10

#define SERVICES_PIPE_TYPE_MAPPING_CONTENT {\
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_RX},   \
  {ACI_STORE_LOCAL, ACI_RX_ACK_AUTO},   \
  {ACI_STORE_LOCAL, ACI_TX},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_RX},   \
  {ACI_STORE_LOCAL, ACI_TX},   \
  {ACI_STORE_LOCAL, ACI_RX_ACK_AUTO},   \
  {ACI_STORE_REMOTE, ACI_TX},   \
}

#define GAP_PPCP_MAX_CONN_INT 0x320 /**< Maximum connection interval as a multiple of 1.25 msec , 0xFFFF means no specific value requested */
#define GAP_PPCP_MIN_CONN_INT  0x190 /**< Minimum connection interval as a multiple of 1.25 msec , 0xFFFF means no specific value requested */
#define GAP_PPCP_SLAVE_LATENCY 0
#define GAP_PPCP_CONN_TIMEOUT 0x258 /** Connection Supervision timeout multiplier as a multiple of 10msec, 0xFFFF means no specific value requested */

#define NB_SETUP_MESSAGES 31
#define SETUP_MESSAGES_CONTENT {\
    {0x00,\
        {\
            0x07,0x06,0x00,0x00,0x03,0x02,0x42,0x07,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x10,0x00,0x01,0x00,0x00,0x00,0x02,0x02,0x07,0x02,0x0b,0x01,0x01,0x00,0x00,0x06,0x00,0x09,\
            0x02,0x02,0x18,0x03,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x10,0x1c,0x00,0x00,0x01,0x02,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
            0x00,0x00,0x44,0x22,0x00,0x00,0x40,0x52,0x03,0x90,0x01,0x64,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x10,0x38,0x02,0xff,0x02,0x58,0x63,0x05,0x00,0x00,0x05,0x42,0x00,0x00,0x05,0x42,0x00,0x00,\
            0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x01,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x05,0x06,0x10,0x54,0x01,0x01,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x00,0x04,0x04,0x02,0x02,0x00,0x01,0x28,0x00,0x01,0x00,0x18,0x04,0x04,0x05,0x05,0x00,\
            0x02,0x28,0x03,0x01,0x02,0x03,0x00,0x00,0x2a,0x04,0x04,0x14,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x1c,0x0d,0x00,0x03,0x2a,0x00,0x01,0x50,0x52,0x4f,0x58,0x49,0x4d,0x49,0x54,0x59,0x20,\
            0x31,0x2e,0x32,0x6d,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x38,0x05,0x05,0x00,0x04,0x28,0x03,0x01,0x02,0x05,0x00,0x01,0x2a,0x06,0x04,0x03,0x02,\
            0x00,0x05,0x2a,0x01,0x01,0x40,0x02,0x04,0x04,0x05,0x05,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x54,0x06,0x28,0x03,0x01,0x02,0x07,0x00,0x04,0x2a,0x06,0x04,0x09,0x08,0x00,0x07,0x2a,\
            0x04,0x01,0x90,0x01,0x20,0x03,0x00,0x00,0x58,0x02,0x04,0x04,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x70,0x02,0x02,0x00,0x08,0x28,0x00,0x01,0x01,0x18,0x04,0x04,0x02,0x02,0x00,0x09,0x28,\
            0x00,0x01,0x04,0x18,0x04,0x04,0x05,0x05,0x00,0x0a,0x28,0x03,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x8c,0x01,0x02,0x0b,0x00,0x07,0x2a,0x06,0x0c,0x02,0x01,0x00,0x0b,0x2a,0x07,0x01,0x00,\
            0x04,0x04,0x02,0x02,0x00,0x0c,0x28,0x00,0x01,0x02,0x18,0x04,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0xa8,0x04,0x05,0x05,0x00,0x0d,0x28,0x03,0x01,0x04,0x0e,0x00,0x06,0x2a,0x46,0x30,0x02,\
            0x01,0x00,0x0e,0x2a,0x06,0x01,0x00,0x04,0x04,0x02,0x02,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0xc4,0x0f,0x28,0x00,0x01,0x03,0x18,0x04,0x04,0x05,0x05,0x00,0x10,0x28,0x03,0x01,0x0a,\
            0x11,0x00,0x06,0x2a,0x46,0x3c,0x02,0x01,0x00,0x11,0x2a,0x06,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0xe0,0x01,0x00,0x04,0x04,0x02,0x02,0x00,0x12,0x28,0x00,0x01,0x0f,0x18,0x04,0x04,0x05,\
            0x05,0x00,0x13,0x28,0x03,0x01,0x12,0x14,0x00,0x19,0x2a,0x16,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0xfc,0x0c,0x02,0x01,0x00,0x14,0x2a,0x19,0x01,0x64,0x46,0x34,0x03,0x02,0x00,0x15,0x29,\
            0x02,0x01,0x00,0x00,0x04,0x04,0x02,0x02,0x00,0x16,0x28,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0x18,0x01,0x0a,0x18,0x04,0x04,0x05,0x05,0x00,0x17,0x28,0x03,0x01,0x02,0x18,0x00,0x27,\
            0x2a,0x04,0x0c,0x09,0x00,0x00,0x18,0x2a,0x27,0x01,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0x34,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x10,0x10,0x00,0x19,0x28,0x00,0x01,\
            0x23,0xd1,0xbc,0xea,0x5f,0x78,0x23,0x15,0xde,0xef,0x12,0x12,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0x50,0x30,0x15,0x00,0x00,0x04,0x04,0x13,0x13,0x00,0x1a,0x28,0x03,0x01,0x04,0x1b,0x00,\
            0x23,0xd1,0xbc,0xea,0x5f,0x78,0x23,0x15,0xde,0xef,0x12,0x12,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0x6c,0x32,0x15,0x00,0x00,0x44,0x30,0x14,0x00,0x00,0x1b,0x15,0x32,0x02,0x00,0x00,0x00,\
            0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0x88,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x13,0x13,0x00,0x1c,0x28,0x03,0x01,0x18,0x1d,\
            0x00,0x23,0xd1,0xbc,0xea,0x5f,0x78,0x23,0x15,0xde,0xef,0x12,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0xa4,0x12,0x31,0x15,0x00,0x00,0x54,0x30,0x14,0x00,0x00,0x1d,0x15,0x31,0x02,0x00,0x00,\
            0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x15,0x06,0x21,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46,0x34,0x03,0x02,0x00,0x1e,0x29,0x02,0x01,0x00,\
            0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x0d,0x06,0x30,0x00,0x18,0x02,0x01,0x07,0x01,0x18,0x01,0x01,0x08,0x01,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x40,0x00,0x2a,0x07,0x01,0x00,0x80,0x04,0x00,0x0b,0x00,0x00,0x2a,0x06,0x01,0x00,0x08,0x04,\
            0x00,0x0e,0x00,0x00,0x2a,0x06,0x01,0x04,0x00,0x04,0x00,0x11,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x40,0x1c,0x00,0x00,0x2a,0x19,0x01,0x00,0x82,0x04,0x00,0x14,0x00,0x15,0x2a,0x27,0x01,0x00,\
            0x80,0x04,0x00,0x18,0x00,0x00,0x15,0x32,0x02,0x00,0x08,0x04,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x40,0x38,0x00,0x1b,0x00,0x00,0x15,0x31,0x02,0x04,0x02,0x04,0x00,0x1d,0x00,0x1e,0x2a,0x06,\
            0x01,0x00,0x02,0x04,0x00,0x00,0x00,0x00,0x2a,0x05,0x01,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x09,0x06,0x40,0x54,0x10,0x04,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x13,0x06,0x50,0x00,0x23,0xd1,0xbc,0xea,0x5f,0x78,0x23,0x15,0xde,0xef,0x12,0x12,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1e,0x06,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
            0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x19,0x06,0x70,0x00,0x19,0x02,0x40,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
            0x00,0x00,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x06,0x06,0xf0,0x00,0x03,0x75,0x94,\
        },\
    },\
}

#endif

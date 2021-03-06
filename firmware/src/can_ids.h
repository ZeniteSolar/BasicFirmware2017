/**
 * @file can_ids.h
 *
 * @defgroup CANAPP    Ids for can application
 *
 * @brief Ids for canbus application
 *
 */

#ifndef CAN_IDS_H
#define CAN_IDS_H 

//------------------------------------------------------------------------------

// GENERIC FIELDS FROM ANY MODULE's STATE MESSAGE
#define CAN_LENGTH_MSG_STATE            3
#define CAN_SIGNATURE_BYTE              0       //<! ID from compilation
#define CAN_STATE_MSG_STATE_BYTE        1       //<! state flags
#define CAN_STATE_MSG_ERROR_BYTE        2       //<! error flags

//------------------------------------------------------------------------------

// SIGNATURES
#define CAN_SIGNATURE_MAM17             190
#define CAN_SIGNATURE_MCS17             200
#define CAN_SIGNATURE_MAD17             210
#define CAN_SIGNATURE_MCC17_1           221
#define CAN_SIGNATURE_MCC17_2           222
#define CAN_SIGNATURE_MCC17_3           223
#define CAN_SIGNATURE_MCC17_4           224
#define CAN_SIGNATURE_MAB17             230
#define CAN_SIGNATURE_MIC17             240

#define CAN_SIGNATURE_SELF              CAN_SIGNATURE_MAB17

//------------------------------------------------------------------------------

// FILTERS FOR MESSAGES FROM MIC17 :
#define CAN_MASK_MIC17                  0b11111111111   //<! Mask for MIC17
#define CAN_FILTER_MSG_MIC17_STATE      0b00000001000   //<! Informs about state and errors
#define CAN_FILTER_MSG_MIC17_MOTOR      0b00000001001   //<! Informs about motor controls.
#define CAN_FILTER_MSG_MIC17_PUMPS      0b00000001010   //<! Informs about pumps controls.
#define CAN_FILTER_MSG_MIC17_MPPTS      0b00000001011   //<! Informs about mppts controls.
#define CAN_FILTER_MSG_MIC17_MCS        0b00000001100   //<! Informs about boat_on to mcs.

// MESSAGES FROM MIC17 TO MAM17:
#define CAN_LENGTH_MSG_MIC17_MOTOR          4
#define CAN_MSG_MIC17_MOTOR_MOTOR_ON_BYTE   1
#define CAN_MSG_MIC17_MOTOR_MOTOR_ON_BIT    0
#define CAN_MSG_MIC17_MOTOR_DMS_BYTE    	1
#define CAN_MSG_MIC17_MOTOR_DMS_BIT      	1
#define CAN_MSG_MIC17_MOTOR_D_RAW_BYTE	    2
#define CAN_MSG_MIC17_MOTOR_I_RAW_BYTE		3

// MESSAGES FROM MIC17 TO MAB17:
#define CAN_LENGTH_MSG_MIC17_PUMPS          2
#define CAN_MSG_MIC17_PUMPS_PUMPS_BYTE      1
#define CAN_MSG_MIC17_PUMPS_PUMP1_BIT       0
#define CAN_MSG_MIC17_PUMPS_PUMP2_BIT       1
#define CAN_MSG_MIC17_PUMPS_PUMP3_BIT       2

// MESSAGES FROM MIC17 TO MCC17_x:
#define CAN_LENGTH_MSG_MIC17_MPPTS          3
#define CAN_MSG_MIC17_MPPTS_MPPTS_ON_BYTE   1
#define CAN_MSG_MIC17_MPPTS_MPPTS_ON_BIT    0
#define CAN_MSG_MIC17_MPPTS_POT_BYTE        2

// MESSAGES FROM MIC17 TO MCS17:
#define CAN_LENGHT_MSG_MIC17_MCS            2
#define CAN_MSG_MIC17_MCS_BOAT_ON_BYTE      1
#define CAN_MSG_MIC17_MCS_BOAT_ON_BIT       0

//------------------------------------------------------------------------------

// FILTERS FOR MESSAGES FROM MAM17:
#define CAN_MASK_MAM17                  0b11111111111   //<! Mask for MAM17
#define CAN_FILTER_MSG_MAM17_STATE      0b00000010000   //<! Informs about state and errors
#define CAN_FILTER_MSG_MAM17_MOTOR      0b00000010001   //<! Informs about motor

// MAM17 MOTOR:
#define CAN_LENGTH_MSG_MAM17_MOTOR      3
#define CAN_MSG_MAM17_MOTOR_D_BYTE      1
#define CAN_MSG_MAM17_MOTOR_LIM_BYTE    2

//------------------------------------------------------------------------------

// FILTERS FOR MESSAGES FROM MAB17:
#define CAN_MASK_MAB17                  0b11111111111   //<! Mask for MAB17
#define CAN_FILTER_MSG_MAB17_STATE      0b00001000000   //<! Informs about state and errors
#define CAN_FILTER_MSG_MAB17_PUMP       0b00001000001   //<! Informs about pumps

// MESSAGES FROM MIC17 TO MAM17:
#define CAN_LENGTH_MSG_MAB17_PUMPS      2
#define CAN_MSG_MAB17_PUMPS_BYTE        1
#define CAN_MSG_MAB17_PUMP1_BIT         0
#define CAN_MSG_MAB17_PUMP2_BIT         1
#define CAN_MSG_MAB17_PUMP3_BIT         2

//------------------------------------------------------------------------------

// FILTERS FOR MESSAGES FROM MCS17:
#define CAN_MASK_MCS17                  0b11111111111   //<! Mask for MCS17
#define CAN_FILTER_MSG_MCS17_STATE      0b00100000000   //<! Informs about state and errors
#define CAN_FILTER_MSG_MCS17_BOAT_ON    0b00100000001   //<! Informs about bat, cap and main relay

// MCS17 :
#define CAN_LENGTH_MSG_MCS17_BOAT_ON    4
#define CAN_MSG_MCS17_VBAT_BYTE         1
#define CAN_MSG_MCS17_VCAP_BYTE         2
#define CAN_MSG_MCS17_MAIN_RELAY_BYTE   3
#define CAN_MSG_MCS17_MAIN_RELAY_BIT    0

//------------------------------------------------------------------------------

// FILTERS FOR MESSAGES FROM MAD17:
#define CAN_MASK_MAD17                  0b11111111111   //<! Mask for MAD17
#define CAN_FILTER_MSG_MAD17_STATE      0b10000000000   //<! Informs about state and errors
 
//------------------------------------------------------------------------------

// FILTERS FOR MESSAGES FROM MCC17:
#define CAN_MASK_MCC17                  0b11111111111   //<! Mask for MAD17
#define CAN_FILTER_MSG_MCC17_STATE      0b00000100000   //<! Informs about state and errors
#define CAN_FILTER_MSG_MCC17_MPPT       0b00000100001   //<! Informs about mppts

// MCC17 MPPT:
#define CAN_LENGTH_MSG_MCC17_MPPT       5
#define CAN_MSG_MCC17_MPPT_D_BYTE       1
#define CAN_MSG_MCC17_MPPT_IPANEL_BYTE  2
#define CAN_MSG_MCC17_MPPT_VPANEL_BYTE  3
#define CAN_MSG_MCC17_MPPT_VBAT_BYTE    4
 
//------------------------------------------------------------------------------


#endif /* ifndef CAN_IDS_H */

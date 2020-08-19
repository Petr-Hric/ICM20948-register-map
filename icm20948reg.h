#ifndef ICM20948_REG_MAP_H_
#define ICM20948_REG_MAP_H_

// ICM-20948 register map
// Autor: Petr Hric

// USER BANK 0 REGISTER MAP

#define ICM20948_00_WHO_AM_I                              0x00

#define ICM20948_00_USER_CTRL                             0x03
#define ICM20948_00_USER_CTRL_DMP_EN                      7
#define ICM20948_00_USER_CTRL_FIFO_EN                     6
#define ICM20948_00_USER_CTRL_I2C_MST_EN                  5
#define ICM20948_00_USER_CTRL_I2C_IF_DIS                  4
#define ICM20948_00_USER_CTRL_DMP_RST                     3
#define ICM20948_00_USER_CTRL_SRAM_RST                    2
#define ICM20948_00_USER_CTRL_I2C_MST_RST                 1

#define ICM20948_00_LP_CONFIG                             0x05
#define ICM20948_00_LP_CONFIG_I2C_MST_CYCLE               6
#define ICM20948_00_LP_CONFIG_ACCEL_CYCLE                 5
#define ICM20948_00_LP_CONFIG_GYRO_CYCLE                  4

#define ICM20948_00_PWR_MGMT_1                            0x06
#define ICM20948_00_PWR_MGMT_1_DEVICE_RESET               7
#define ICM20948_00_PWR_MGMT_1_SLEEP                      6
#define ICM20948_00_PWR_MGMT_1_LP_EN                      5
#define ICM20948_00_PWR_MGMT_1_TEMP_DIS                   3
#define ICM20948_00_PWR_MGMT_1_CLKSEL                     2 // 3 bits

#define ICM20948_00_PWR_MGMT_2                            0x07
#define ICM20948_00_PWR_MGMT_2_DISABLE_ACCEL              5 // 3 bits
#define ICM20948_00_PWR_MGMT_2_DISABLE_GYRO               2 // 3 bits

#define ICM20948_00_INT_PIN_CFG                           0x0F
#define ICM20948_00_INT_PIN_CFG_INT1_ACTL                 7
#define ICM20948_00_INT_PIN_CFG_INT1_OPEN                 6
#define ICM20948_00_INT_PIN_CFG_INT1_LATCH_INT_EN         5
#define ICM20948_00_INT_PIN_CFG_INT_ANYRD_2CLEAR          4
#define ICM20948_00_INT_PIN_CFG_ACTL_FSYNC                3
#define ICM20948_00_INT_PIN_CFG_FSYNC_INT_MODE_EN         2
#define ICM20948_00_INT_PIN_CFG_BYPASS_EN                 1

#define ICM20948_00_INT_ENABLE                            0x10
#define ICM20948_00_INT_ENABLE_REG_WOF_EN                 7
#define ICM20948_00_INT_ENABLE_WOM_INT_EN                 3
#define ICM20948_00_INT_ENABLE_PLL_RDY_EN                 2
#define ICM20948_00_INT_ENABLE_DMP_INT1_EN                1
#define ICM20948_00_INT_ENABLE_I2C_MST_INT_EN             0

#define ICM20948_00_INT_ENABLE_1                          0x11
#define ICM20948_00_INT_ENABLE_1_RAW_DATA_0_RDY_EN        0

#define ICM20948_00_INT_ENABLE_2                          0x12
#define ICM20948_00_INT_ENABLE_2_FIFO_OVERFLOW_EN         4 // 5 bits

#define ICM20948_00_INT_ENABLE_3                          0x13
#define ICM20948_00_INT_ENABLE_3_FIFO_WM_EN               4 // 5 bits

#define ICM20948_00_I2C_MST_STATUS                        0x17
#define ICM20948_00_I2C_MST_STATUS_PASS_THROUGH           7
#define ICM20948_00_I2C_MST_STATUS_I2C_SLV4_DONE          6
#define ICM20948_00_I2C_MST_STATUS_I2C_LOST_ARB           5
#define ICM20948_00_I2C_MST_STATUS_I2C_SLV4_NACK          4
#define ICM20948_00_I2C_MST_STATUS_I2C_SLV3_NACK          3
#define ICM20948_00_I2C_MST_STATUS_I2C_SLV2_NACK          2
#define ICM20948_00_I2C_MST_STATUS_I2C_SLV1_NACK          1
#define ICM20948_00_I2C_MST_STATUS_I2C_SLV0_NACK          0

#define ICM20948_00_INT_STATUS                            0x19
#define ICM20948_00_INT_STATUS_WOM_INT                    3
#define ICM20948_00_INT_STATUS_PLL_RDY_INT                2
#define ICM20948_00_INT_STATUS_DMP_INT1                   1
#define ICM20948_00_INT_STATUS_I2C_MST_INT                0

#define ICM20948_00_INT_STATUS_1                          0x1A
#define ICM20948_00_INT_STATUS_1_RAW_DATA_0_RDY_INT       0

#define ICM20948_00_INT_STATUS_2                          0x1B
#define ICM20948_00_INT_STATUS_2_FIFO_OVERFLOW_INT        4 // 5 bits

#define ICM20948_00_INT_STATUS_3                          0x1C
#define ICM20948_00_INT_STATUS_3_FIFO_WM_INT              4 // 5 bits

#define ICM20948_00_DELAY_TIMEH                           0x28
#define ICM20948_00_DELAY_TIMEL                           0x29
#define ICM20948_00_ACCEL_XOUT_H                          0x2D
#define ICM20948_00_ACCEL_XOUT_L                          0x2E
#define ICM20948_00_ACCEL_YOUT_H                          0x2F
#define ICM20948_00_ACCEL_YOUT_L                          0x30
#define ICM20948_00_ACCEL_ZOUT_H                          0x31
#define ICM20948_00_ACCEL_ZOUT_L                          0x32
#define ICM20948_00_GYRO_XOUT_H                           0x33
#define ICM20948_00_GYRO_XOUT_L                           0x34
#define ICM20948_00_GYRO_YOUT_H                           0x35
#define ICM20948_00_GYRO_YOUT_L                           0x36
#define ICM20948_00_GYRO_ZOUT_H                           0x37
#define ICM20948_00_GYRO_ZOUT_L                           0x38
#define ICM20948_00_TEMP_OUT_H                            0x39
#define ICM20948_00_TEMP_OUT_L                            0x3A
#define ICM20948_00_EXT_SLV_SENS_DATA_00                  0x3B
#define ICM20948_00_EXT_SLV_SENS_DATA_01                  0x3C
#define ICM20948_00_EXT_SLV_SENS_DATA_02                  0x3D
#define ICM20948_00_EXT_SLV_SENS_DATA_03                  0x3E
#define ICM20948_00_EXT_SLV_SENS_DATA_04                  0x3F
#define ICM20948_00_EXT_SLV_SENS_DATA_05                  0x40
#define ICM20948_00_EXT_SLV_SENS_DATA_06                  0x41
#define ICM20948_00_EXT_SLV_SENS_DATA_07                  0x42
#define ICM20948_00_EXT_SLV_SENS_DATA_08                  0x43
#define ICM20948_00_EXT_SLV_SENS_DATA_09                  0x44
#define ICM20948_00_EXT_SLV_SENS_DATA_10                  0x45
#define ICM20948_00_EXT_SLV_SENS_DATA_11                  0x46
#define ICM20948_00_EXT_SLV_SENS_DATA_12                  0x47
#define ICM20948_00_EXT_SLV_SENS_DATA_13                  0x48
#define ICM20948_00_EXT_SLV_SENS_DATA_14                  0x49
#define ICM20948_00_EXT_SLV_SENS_DATA_15                  0x4A
#define ICM20948_00_EXT_SLV_SENS_DATA_16                  0x4B
#define ICM20948_00_EXT_SLV_SENS_DATA_17                  0x4C
#define ICM20948_00_EXT_SLV_SENS_DATA_18                  0x4D
#define ICM20948_00_EXT_SLV_SENS_DATA_19                  0x4E
#define ICM20948_00_EXT_SLV_SENS_DATA_20                  0x4F
#define ICM20948_00_EXT_SLV_SENS_DATA_21                  0x50
#define ICM20948_00_EXT_SLV_SENS_DATA_22                  0x51
#define ICM20948_00_EXT_SLV_SENS_DATA_23                  0x52

#define ICM20948_00_FIFO_EN_1                             0x66
#define ICM20948_00_FIFO_EN_1_SLV3_FIFO_EN                3
#define ICM20948_00_FIFO_EN_1_SLV2_FIFO_EN                2
#define ICM20948_00_FIFO_EN_1_SLV1_FIFO_EN                1
#define ICM20948_00_FIFO_EN_1_SLV0_FIFO_EN                0

#define ICM20948_00_FIFO_EN_2                             0x67
#define ICM20948_00_FIFO_EN_2_ACCEL_FIFO_EN               4
#define ICM20948_00_FIFO_EN_2_GYRO_Z_FIFO_EN              3
#define ICM20948_00_FIFO_EN_2_GYRO_Y_FIFO_EN              2
#define ICM20948_00_FIFO_EN_2_GYRO_X_FIFO_EN              1
#define ICM20948_00_FIFO_EN_2_TEMP_FIFO_EN                0

#define ICM20948_00_FIFO_RST                              0x68
#define ICM20948_00_FIFO_RST_FIFO_RESET                   4 // 5 bits

#define ICM20948_00_FIFO_MODE                             0x69
#define ICM20948_00_FIFO_MODE_FIFO_MODE                   4 // 5 bits

#define ICM20948_00_FIFO_COUNTH                           0x70
#define ICM20948_00_FIFO_COUNTH_FIFO_CNT                  4 // 5 bits

#define ICM20948_00_FIFO_COUNTL                           0x71
#define ICM20948_00_FIFO_R_W                              0x72

#define ICM20948_00_DATA_RDY_STATUS                       0x74
#define ICM20948_00_DATA_RDY_STATUS_WOF_STATUS            7
#define ICM20948_00_DATA_RDY_STATUS_RAW_DATA_RDY          3 // 4 bits

#define ICM20948_00_FIFO_CFG                              0x76
#define ICM20948_00_FIFO_CFG_FIFO_CFG                     0

#define ICM20948_00_REG_BANK_SEL                          0x7F
#define ICM20948_00_REG_BANK_SEL_USER_BANK                5 // 2 bits

// USER BANK 1 REGISTER MAP

#define ICM20948_01_SELF_TEST_X_GYRO                      0x02
#define ICM20948_01_SELF_TEST_Y_GYRO                      0x03
#define ICM20948_01_SELF_TEST_Z_GYRO                      0x04
#define ICM20948_01_SELF_TEST_X_ACCEL                     0x0E
#define ICM20948_01_SELF_TEST_Y_ACCEL                     0x0F
#define ICM20948_01_SELF_TEST_Z_ACCEL                     0x10
#define ICM20948_01_XA_OFFS_H                             0x14
#define ICM20948_01_XA_OFFS_L                             0x15 // 7 bits
#define ICM20948_01_YA_OFFS_H                             0x17
#define ICM20948_01_YA_OFFS_L                             0x18 // 7 bits
#define ICM20948_01_ZA_OFFS_H                             0x1A
#define ICM20948_01_ZA_OFFS_L                             0x1B // 7 bits
#define ICM20948_01_TIMEBASE_CORRECTION_PLL               0x28

#define ICM20948_01_REG_BANK_SEL                          0x7F
#define ICM20948_01_REG_BANK_SEL_USER_BANK                5 // 2 bits

// USER BANK 2 REGISTER MAP

#define ICM20948_02_GYRO_SMPLRT_DIV                       0x00

#define ICM20948_02_GYRO_CONFIG_1                         0x01
#define ICM20948_02_GYRO_CONFIG_1_GYRO_DLPFCFG            5 // 3 bits
#define ICM20948_02_GYRO_CONFIG_1_GYRO_FS_SEL             2 // 2 bits
#define ICM20948_02_GYRO_CONFIG_1_GYRO_FCHOICE            0

#define ICM20948_02_GYRO_CONFIG_2                         0x02
#define ICM20948_02_GYRO_CONFIG_2_XGYRO_CTEN              5
#define ICM20948_02_GYRO_CONFIG_2_YGYRO_CTEN              4
#define ICM20948_02_GYRO_CONFIG_2_ZGYRO_CTEN              3
#define ICM20948_02_GYRO_CONFIG_2_GYRO_AVGCFG             2 // 3 bits

#define ICM20948_02_XG_OFFS_USRH                          0x03
#define ICM20948_02_XG_OFFS_USRL                          0x04
#define ICM20948_02_YG_OFFS_USRH                          0x05
#define ICM20948_02_YG_OFFS_USRL                          0x06
#define ICM20948_02_ZG_OFFS_USRH                          0x07
#define ICM20948_02_ZG_OFFS_USRL                          0x08

#define ICM20948_02_ODR_ALIGN_EN                          0x09
#define ICM20948_02_ODR_ALIGN_EN_ODR_ALIGN_EN             0

#define ICM20948_02_ACCEL_SMPLRT_DIV_1                    0x10
#define ICM20948_02_ACCEL_SMPLRT_DIV_1_ACCEL_SMPLRT_DIV   3 // 4 bits

#define ICM20948_02_ACCEL_SMPLRT_DIV_2                    0x11
 
#define ICM20948_02_ACCEL_INTEL_CTRL                      0x12
#define ICM20948_02_ACCEL_INTEL_CTRL_ACCEL_INTEL_EN       1
#define ICM20948_02_ACCEL_INTEL_CTRL_ACCEL_INTEL_MODE_INT 0

#define ICM20948_02_ACCEL_WOM_THR                         0x13

#define ICM20948_02_ACCEL_CONFIG                          0x14
#define ICM20948_02_ACCEL_CONFIG_ACCEL_DLPFCFG            5 // 3 bits
#define ICM20948_02_ACCEL_CONFIG_ACCEL_FS_SEL             2 // 2 bits
#define ICM20948_02_ACCEL_CONFIG_ACCEL_FCHOICE            0

#define ICM20948_02_ACCEL_CONFIG_2                        0x15
#define ICM20948_02_ACCEL_CONFIG_2_AX_ST_EN_REG           4
#define ICM20948_02_ACCEL_CONFIG_2_AY_ST_EN_REG           3
#define ICM20948_02_ACCEL_CONFIG_2_AZ_ST_EN_REG           2
#define ICM20948_02_ACCEL_CONFIG_2_DEC3_CFG               1 // 2 bits

#define ICM20948_02_FSYNC_CONFIG                          0x52
#define ICM20948_02_FSYNC_CONFIG_DELAY_TIME_EN            7
#define ICM20948_02_FSYNC_CONFIG_WOF_DEGLITCH_EN          5
#define ICM20948_02_FSYNC_CONFIG_EDGE_INT                 4
#define ICM20948_02_FSYNC_CONFIG_EXT_SYNC_SET             3 // 4 bits

#define ICM20948_02_TEMP_CONFIG                           0x53
#define ICM20948_02_TEMP_CONFIG_TEMP_DLPFCFG              2 // 3 bits

#define ICM20948_02_MOD_CTRL_USR                          0x54
#define ICM20948_02_MOD_CTRL_USR_REG_LP_DMP_EN            0

#define ICM20948_02_REG_BANK_SEL                          0x7F
#define ICM20948_02_REG_BANK_SEL_USER_BANK                5 // 2 bits

// USER BANK 3 REGISTER MAP

#define ICM20948_03_I2C_MST_ODR_CONFIG                    0x00
#define ICM20948_03_I2C_MST_ODR_CONFIG_I2C_MST_ODR_CONFIG 3 // 4 bits

#define ICM20948_03_I2C_MST_CTRL                          0x01
#define ICM20948_03_I2C_MST_CTRL_MULT_MST_EN              7
#define ICM20948_03_I2C_MST_CTRL_I2C_MST_P_NST            4
#define ICM20948_03_I2C_MST_CTRL_I2C_MST_CLK              3 // 4 bits

#define ICM20948_03_I2C_MST_DELAY_CTRL                    0x02
#define ICM20948_03_I2C_MST_DELAY_CTRL_DELAY_ES_SHADOW    7
#define ICM20948_03_I2C_MST_DELAY_CTRL_I2C_SLV4_DELAY_EN  4
#define ICM20948_03_I2C_MST_DELAY_CTRL_I2C_SLV3_DELAY_EN  3
#define ICM20948_03_I2C_MST_DELAY_CTRL_I2C_SLV2_DELAY_EN  2
#define ICM20948_03_I2C_MST_DELAY_CTRL_I2C_SLV1_DELAY_EN  1
#define ICM20948_03_I2C_MST_DELAY_CTRL_I2C_SLV0_DELAY_EN  0

#define ICM20948_03_I2C_SLV0_ADDR                         0x03
#define ICM20948_03_I2C_SLV0_ADDR_I2C_SLV0_RNW            7
#define ICM20948_03_I2C_SLV0_ADDR_I2C_ID0                 6 // 7 bits

#define ICM20948_03_I2C_SLV0_REG                          0x04

#define ICM20948_03_I2C_SLV0_CTRL                         0x05
#define ICM20948_03_I2C_SLV0_CTRL_I2C_SLV0_EN             7
#define ICM20948_03_I2C_SLV0_CTRL_I2C_SLV0_BYTE_SW        6
#define ICM20948_03_I2C_SLV0_CTRL_I2C_SLV0_REG_DIS        5
#define ICM20948_03_I2C_SLV0_CTRL_I2C_SLV0_GRP            4
#define ICM20948_03_I2C_SLV0_CTRL_I2C_SLV0_LENG           3 // 4 bits

#define ICM20948_03_I2C_SLV0_DO                           0x06

#define ICM20948_03_I2C_SLV1_ADDR                         0x07
#define ICM20948_03_I2C_SLV1_ADDR_I2C_SLV1_RNW            7
#define ICM20948_03_I2C_SLV1_ADDR_I2C_ID1                 6 // 7 bits

#define ICM20948_03_I2C_SLV1_REG                          0x08

#define ICM20948_03_I2C_SLV1_CTRL                         0x09
#define ICM20948_03_I2C_SLV1_CTRL_I2C_SLV1_EN             7
#define ICM20948_03_I2C_SLV1_CTRL_I2C_SLV1_BYTE_SW        6
#define ICM20948_03_I2C_SLV1_CTRL_I2C_SLV1_REG_DIS        5
#define ICM20948_03_I2C_SLV1_CTRL_I2C_SLV1_GRP            4
#define ICM20948_03_I2C_SLV1_CTRL_I2C_SLV1_LENG           3 // 4 bits

#define ICM20948_03_I2C_SLV1_DO                           0x0A

#define ICM20948_03_I2C_SLV2_ADDR                         0x0B
#define ICM20948_03_I2C_SLV2_ADDR_I2C_SLV2_RNW            7
#define ICM20948_03_I2C_SLV2_ADDR_I2C_ID2                 6 // 7 bits

#define ICM20948_03_I2C_SLV2_REG                          0x0C

#define ICM20948_03_I2C_SLV2_CTRL                         0x0D
#define ICM20948_03_I2C_SLV2_CTRL_I2C_SLV2_EN             7
#define ICM20948_03_I2C_SLV2_CTRL_I2C_SLV2_BYTE_SW        6
#define ICM20948_03_I2C_SLV2_CTRL_I2C_SLV2_REG_DIS        5
#define ICM20948_03_I2C_SLV2_CTRL_I2C_SLV2_GRP            4
#define ICM20948_03_I2C_SLV2_CTRL_I2C_SLV2_LENG           3 // 4 bits

#define ICM20948_03_I2C_SLV2_DO                           0x0E

#define ICM20948_03_I2C_SLV3_ADDR                         0x0F
#define ICM20948_03_I2C_SLV3_ADDR_I2C_SLV3_RNW            7
#define ICM20948_03_I2C_SLV3_ADDR_I2C_ID3                 6 // 7 bits

#define ICM20948_03_I2C_SLV3_REG                          0x10

#define ICM20948_03_I2C_SLV3_CTRL                         0x11
#define ICM20948_03_I2C_SLV3_CTRL_I2C_SLV3_EN             7
#define ICM20948_03_I2C_SLV3_CTRL_I2C_SLV3_BYTE_SW        6
#define ICM20948_03_I2C_SLV3_CTRL_I2C_SLV3_REG_DIS        5
#define ICM20948_03_I2C_SLV3_CTRL_I2C_SLV3_GRP            4
#define ICM20948_03_I2C_SLV3_CTRL_I2C_SLV3_LENG           3 // 4 bits

#define ICM20948_03_I2C_SLV3_DO                           0x12

#define ICM20948_03_I2C_SLV4_ADDR                         0x13
#define ICM20948_03_I2C_SLV4_ADDR_I2C_SLV4_RNW            7
#define ICM20948_03_I2C_SLV4_ADDR_I2C_ID4                 6 // 7 bits

#define ICM20948_03_I2C_SLV4_REG                          0x14

#define ICM20948_03_I2C_SLV4_CTRL                         0x15
#define ICM20948_03_I2C_SLV4_CTRL_I2C_SLV4_EN             7
#define ICM20948_03_I2C_SLV4_CTRL_I2C_SLV4_BYTE_SW        6
#define ICM20948_03_I2C_SLV4_CTRL_I2C_SLV4_REG_DIS        5
#define ICM20948_03_I2C_SLV4_CTRL_I2C_SLV4_DLY            4 // 4 bits

#define ICM20948_03_I2C_SLV4_DO                           0x16
#define ICM20948_03_I2C_SLV4_DI                           0x17

#define ICM20948_03_REG_BANK_SEL                          0x7F
#define ICM20948_03_REG_BANK_SEL_USER_BANK                5 // 2 bits

#endif

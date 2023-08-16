#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x6776
#define PRODUCT_ID      0x4E36
#define DEVICE_VER      0x0001
#define MANUFACTURER    Gvalchca
#define PRODUCT         Neon60

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

// ROWS: Top to bottom, COLS: Left to right

#define MATRIX_ROW_PINS {B13,B12,B14,B15,A8}
#define MATRIX_COL_PINS {B1,B8,A2,A1,A0,C15,C14,C13,B7,B6,B5,B4,B3,A15}

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#define QMK_ESC_OUTPUT B1 // usually COL
#define QMK_ESC_INPUT B13 // usually ROW

#define CH_CFG_ST_RESOLUTION 16

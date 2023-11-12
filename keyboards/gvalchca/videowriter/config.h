#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x6776
#define PRODUCT_ID      0x5657
#define DEVICE_VER      0x0001
#define MANUFACTURER    Gvalchca
#define PRODUCT         Videowriter

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 8

// ROWS: Top to bottom, COLS: Left to right

#define MATRIX_ROW_PINS {D3,D2,B5,D7,E6,D4,B4,C6,D1,D0}
#define MATRIX_COL_PINS {B6,B2,B3,B1,F7,F6,F5,F4}

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#define QMK_ESC_OUTPUT B6 // usually COL
#define QMK_ESC_INPUT D3 // usually ROW

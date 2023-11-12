#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x6776
#define PRODUCT_ID      0x5354
#define DEVICE_VER      0x0001
#define MANUFACTURER    Gvalchca
#define PRODUCT         SpaccBoard TKL

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 17

// ROWS: Top to bottom, COLS: Left to right

#define MATRIX_ROW_PINS {D3,D2,D1,D0,D4,D5}
#define MATRIX_COL_PINS {D7,B4,B5,B6,C6,C7,F7,F6,F5,F4,F1,F0,D6,E6,B1,B2,B3}

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#define QMK_ESC_OUTPUT D7 // usually COL
#define QMK_ESC_INPUT D3 // usually ROW

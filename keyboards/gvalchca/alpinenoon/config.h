#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x6776
#define PRODUCT_ID      0x414E
#define DEVICE_VER      0x0001
#define MANUFACTURER    Gvalchca
#define PRODUCT         AlpineNoon

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 17

// ROWS: Top to bottom, COLS: Left to right

#define MATRIX_ROW_PINS {D2,D1,D0,B7,B3}
#define MATRIX_COL_PINS {D5,D3,C7,C6,B6,B5,B4,D7,D6,D4,F0,F1,F4,F5,F6,F7,E6}

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define ENCODERS_PAD_A {B1}
#define ENCODERS_PAD_B {B2}

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#define QMK_ESC_OUTPUT C7 // usually COL
#define QMK_ESC_INPUT D2 // usually ROW

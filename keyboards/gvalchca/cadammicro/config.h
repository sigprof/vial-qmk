#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x6776
#define PRODUCT_ID      0x434D
#define DEVICE_VER      0x0001
#define MANUFACTURER    Gvalchca
#define PRODUCT         CadamMicro

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 6

// ROWS: Top to bottom, COLS: Left to right

#define MATRIX_ROW_PINS {F4,F5,F6,F7,B1,B3}
#define MATRIX_COL_PINS {D1,D0,D4,C6,B4,B6}

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#define QMK_ESC_OUTPUT D0 // usually COL
#define QMK_ESC_INPUT F4 // usually ROW

#define BACKLIGHT_PIN B5
#define BACKLIGHT_LEVELS 5

#define LED_COMPOSE_PIN B2

#ifndef CONFIG_H
#define CONFIG_H

//#include "config_common.h"

/* USB Device descriptor parameter */
// #define VENDOR_ID       0xFEED
// #define PRODUCT_ID      0x6060
// #define DEVICE_VER      0x0001
// #define MANUFACTURER    syn
// #define PRODUCT         tinpad
// #define DESCRIPTION     tin numpad

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 4

/* key matrix pins */
#define MATRIX_ROW_PINS { GP4, GP5, GP6, GP7, GP8, GP9 }
#define MATRIX_COL_PINS { GP22, GP20, GP23, GP21 }
// #define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* number of backlight levels */

// #ifdef BACKLIGHT_PIN
// #define BACKLIGHT_LEVELS 1
// #endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT)) \
)

/* prevent stuck modifiers */
// #define PREVENT_STUCK_MODIFIERS


// #ifdef RGB_DI_PIN
// #define RGBLIGHT_ANIMATIONS
// #define RGBLED_NUM 0
// #define RGBLIGHT_HUE_STEP 8
// #define RGBLIGHT_SAT_STEP 8
// #define RGBLIGHT_VAL_STEP 8
// #endif

#endif
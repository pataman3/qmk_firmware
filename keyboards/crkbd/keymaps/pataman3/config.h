#pragma once

//#define USE_MATRIX_I2C

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define USE_SERIAL_PD2

#define TAPPING_TERM 170
#define TAPPING_FORCE_HOLD
#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT

#ifdef RGBLIGHT_ENABLE
    #undef RGBLED_NUM
    #define RGBLIGHT_ANIMATIONS
    #define RGBLED_NUM 27
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif

#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"

#pragma once

#define RGBLIGHT_DEFAULT_MODE SOLID_WHITE
#ifdef RGB_MATRIX_ENABLE
    #define RGB_DISABLE_TIMEOUT 600000     // 10 minutes (10 * 60 * 1000ms)
    #define RGB_DISABLE_WHEN_USB_SUSPENDED
#endif

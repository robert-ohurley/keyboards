#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/

#define TAPPING_TERM 200 
// #define QUICK_TAP_TERM 0 
//Add RGB underglow
#define RGB_DI_PIN D3
#define RGBLED_NUM 14
#define RGBLED_SPLIT {7,7}
#define RGBLIGHT_ANIMATIONS
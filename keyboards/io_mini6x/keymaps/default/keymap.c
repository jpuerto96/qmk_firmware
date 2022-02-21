// Copyright 2022 s8erdude (@jpuerto96)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT_65_625u(
        KC_ESC,    KC_1,    MO(_FN),
            KC_TAB,   KC_SPC
    )
};



//    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k010, k011, k012, k013, k214, k014, k015, \
//    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k110, k111, k112, k113, k114, k115, \
//    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k210, k211, k212, \
//    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k310, k311,             k314,  \
//    k40, k41, k42,           k45,                k49, k410, k411,       k413, k414, k415

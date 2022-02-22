// Copyright 2022 s8erdude (@jpuerto96)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "io_minifullsize.h"

#ifdef ENCODER_ENABLE
bool encoder_update_kb(uint8_t index, bool clockwise) {
    if (!encoder_update_user(index, clockwise)) { return false; }
    if (index == 0) {
        if (clockwise) {
            tap_code_delay(KC_VOLU, 10);
        } else {
            tap_code_delay(KC_VOLD, 10);
        }
    }
    return true;
}
#endif

#ifdef SLIDER_ENABLE
#include "analog.h"
int16_t max_pot_val = 1023;
int16_t max_ticks = 20;
int16_t pot_oldVal = 0;
int16_t pot_val    = 0;
bool moving     = false;
#define POT_TOLERANCE 50
#define POT_PIN D0
#include "print.h"


void matrix_init_user(void) {
    analogReference(ADC_REF_POWER);
}

void matrix_scan_user(void){
    pot_val   = (analogReadPin(POT_PIN));

    // If there is a big enough change, then we need to do something
    if (abs(pot_val - pot_oldVal) > POT_TOLERANCE) {
        moving = true;
        pot_oldVal = pot_val;
    }
    else{
        if (moving){
            // Do some fancy conversion to get 'absolute' position to num tap_codes to send
            // Reset moving to 0 so that we don't get multiple attempts to do this
            int num_ticks = ((float)pot_val/max_pot_val)*max_ticks;
            for (int i = 0; i<max_ticks;++i){
                tap_code(KC__VOLDOWN);
            }
            for (int i = 0; i<num_ticks;++i){
                tap_code(KC__VOLUP);
            }
            moving = false;
        }
    }
}
#endif

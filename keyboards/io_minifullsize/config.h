// Copyright 2022 s8erdude (@jpuerto96)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0xFEED
#define PRODUCT_ID   0x0000
#define DEVICE_VER   0x0001
#define MANUFACTURER jpuerto96
#define PRODUCT      io_minifullsize

/* key matrix size */
#define MATRIX_ROWS 12
#define MATRIX_COLS 10

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
#define MATRIX_ROW_PINS { F0, F1, C7, C6, B6, B5, B7, E6, B2, D4, D6, D7 }
#define MATRIX_COL_PINS { D1, D2, D3, D5, B3, B4, F4, F5, F6, F7 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

#define ENCODERS_PAD_A { B0 }
#define ENCODERS_PAD_B { B1 }

#define SLIDER_PIN D0

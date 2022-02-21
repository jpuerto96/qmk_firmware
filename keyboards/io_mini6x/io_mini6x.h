// Copyright 2022 s8erdude (@jpuerto96)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define XXX KC_NO

#define LAYOUT_65_625u( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k010, k011, k012, k013, k214, k014, k015, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k110, k111, k112, k113, k114, k115, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k210, k211, k212, \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k310, k311,             k314,  \
    k40, k41, k42,           k45,                k49, k410, k411,       k413, k414, k415
) { \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k010, k011, k012, k013, k014, k015 }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k110, k111, k112, k113, k114, k115, }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k210, k211, k212, XXX,  k214, XXX}, \
    { k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k310, k311, XXX,  XXX,  k314, XXX }, \
    { k40, k41, k42, XXX, XXX, k45, XXX, XXX, XXX, k49, k410, k411, XXX,  k413, k414, k415 }
}

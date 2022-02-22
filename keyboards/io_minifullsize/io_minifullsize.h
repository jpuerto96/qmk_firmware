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


#define LAYOUT_625u( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k69, k68, k67, k66,                 k63, k62, k61, k60, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k79, k78, k77, k76, k65, k75, k74,  k73, k72, k71, k70, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k89, k88, k87, k86,      k85, k84,  k83, k82, k81, k80, \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k99, k98, k97,                      k93, k92, k91, k90, \
    k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k109, k108,             k105,       k103, k102, k101, k100, \
    k50, k51, k52,           k55,                k59, k119, k118,    k116,    k115, k114,       k112, k111, k110 \
) { \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09 }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19 }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29 }, \
    { k30, k31, k32, k33, k34, k35, k36, k37, k38, k39 }, \
    { k40, k41, k42, k43, k44, k45, k46, k47, k48, k49 }, \
    { k50, k51, k52, XXX, XXX, k55, XXX, XXX, XXX, k59 }, \
    { k60, k61, k62, k63, XXX, k65, k66, k67, k68, k69 }, \
    { k70, k71, k72, k73, k74, k75, k76, k77, k78, k79 }, \
    { k80, k81, k82, k83, k84, k85, k86, k87, k88, k89 }, \
    { k90, k91, k92, k93, XXX, XXX, XXX, k97, k98, k99 }, \
    { k100, k101, k102, k103, XXX, k105, XXX, XXX, k108, k109 }, \
    { k110, k111, k112, XXX, k114, k115, k116, XXX, k118, k119 } \
}

#define LAYOUT_2x3u( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k69, k68, k67, k66,                 k63, k62, k61, k60, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k79, k78, k77, k76, k65, k75, k74,  k73, k72, k71, k70, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k89, k88, k87, k86,      k85, k84,  k83, k82, k81, k80, \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k99, k98, k97,                      k93, k92, k91, k90, \
    k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k109, k108,             k105,       k103, k102, k101, k100, \
    k50, k51, k52, k53,           k56,           k59, k119, k118,    k116,    k115, k114,       k112, k111, k110 \
) { \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09 }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19 }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29 }, \
    { k30, k31, k32, k33, k34, k35, k36, k37, k38, k39 }, \
    { k40, k41, k42, k43, k44, k45, k46, k47, k48, k49 }, \
    { k50, k51, k52, k53, XXX, XXX, k56, XXX, XXX, k59 }, \
    { k60, k61, k62, k63, XXX, k65, k66, k67, k68, k69 }, \
    { k70, k71, k72, k73, k74, k75, k76, k77, k78, k79 }, \
    { k80, k81, k82, k83, k84, k85, k86, k87, k88, k89 }, \
    { k90, k91, k92, k93, XXX, XXX, XXX, k97, k98, k99 }, \
    { k100, k101, k102, k103, XXX, k105, XXX, XXX, k108, k109 }, \
    { k110, k111, k112, XXX, k114, k115, k116, XXX, k118, k119 } \
}

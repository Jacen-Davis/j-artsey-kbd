// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "artsey.h"
#include "keymap_combo.h"
#include "artsey.c"

enum layer_names {
    _BASE,
    _SYMBOL1,
    _SYMBOL2,
    _NUMBER,
    _CUSTOM
}

#define 

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
        [] [] [] []
           [] [] [] []
     */
    [_BASE] = LAYOUT(
        KC_S,   KC_T,   KC_R,   KC_A,
        KC_O,   KC_I,   KC_Y,   LT(,KC_E,
    ),
    [_SYMBOL1 ] = LAYOUT(

    )
};

const uint16_t PROGMEM 
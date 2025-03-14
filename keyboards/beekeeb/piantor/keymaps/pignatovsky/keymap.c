// Copyright 2022 beekeeb
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#define _BASE 0
#define _NUMS 1
#define _SIGNS 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_split_3x6_3(
KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,  KC_Y, KC_U, KC_I, KC_O, KC_SCLN, KC_EQL,
KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G,  KC_H, KC_J, KC_K, KC_L, KC_P, KC_QUOT,
KC_LALT, KC_Z, KC_X, KC_C, KC_V, KC_B,  KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_BSLS,
KC_LGUI, LT(_NUMS, KC_BSPC), KC_LSFT,             KC_RALT, LT(_SIGNS, KC_SPC), KC_LCTL
    ),
    [_NUMS] = LAYOUT_split_3x6_3(
KC_TAB, KC_1, KC_2, KC_3, KC_4, KC_5,  KC_6, KC_7, KC_8, KC_9, KC_0, KC_EQL,
KC_ESC, MT(MOD_LGUI, KC_A), MT(MOD_LCTL, KC_S), MT(MOD_LALT, KC_D), KC_F, KC_G,  KC_H, KC_J, MT(MOD_LALT, KC_K), MT(MOD_LCTL, KC_L), MT(MOD_LGUI, KC_P), KC_QUOT,
KC_GRV, KC_Z, KC_X, KC_C, KC_V, KC_B,  KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_BSLS,
KC_LGUI, KC_BSPC, KC_LSFT,             KC_RALT, KC_SPC, KC_LCTL
    ),
    [_SIGNS] = LAYOUT_split_3x6_3(
KC_TAB, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,  KC_CIRC, KC_AMPR, KC_ASTR, KC_9, KC_0, KC_EQL,
KC_ESC, MT(MOD_LGUI, KC_A), MT(MOD_LCTL, KC_S), MT(MOD_LALT, KC_D), KC_F, KC_G,  KC_H, KC_J, MT(MOD_LALT, KC_K), MT(MOD_LCTL, KC_L), MT(MOD_LGUI, KC_P), KC_QUOT,
KC_GRV, KC_Z, KC_X, KC_C, KC_V, KC_B,  KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_BSLS,
KC_LGUI, KC_BSPC, KC_LSFT,             KC_RALT, KC_SPC, KC_LCTL
    ),
};
const uint16_t PROGMEM left_paren[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM right_paren[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM lp1[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM rp1[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM lp2[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM rp2[] = {KC_M, KC_COMM, COMBO_END};
const uint16_t PROGMEM left[] = {KC_H, KC_P, COMBO_END};
const uint16_t PROGMEM down[] = {KC_J, KC_P, COMBO_END};
const uint16_t PROGMEM up[] = {KC_K, KC_P, COMBO_END};
const uint16_t PROGMEM right[] = {KC_L, KC_P, COMBO_END};
const uint16_t PROGMEM enter[] = {KC_H, KC_J, COMBO_END};
const uint16_t PROGMEM del[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM minus[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM pgup[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM pgdwn[] = {KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM ctrl[] = {KC_ESC, KC_P, COMBO_END};
const uint16_t PROGMEM alt[] = {KC_ESC, KC_L, COMBO_END};
const uint16_t PROGMEM gui[] = {KC_ESC, KC_K, COMBO_END};
const uint16_t PROGMEM grv[] = {KC_S, KC_D, COMBO_END};
combo_t key_combos[] = {
	COMBO(left_paren, KC_LPRN),
	COMBO(right_paren, KC_RPRN),
	COMBO(lp1, KC_LCBR),
	COMBO(rp1, KC_RCBR),
	COMBO(lp2, KC_LBRC),
	COMBO(rp2, KC_RBRC),
	COMBO(left, KC_LEFT),
	COMBO(right, KC_RIGHT),
	COMBO(up, KC_UP),
	COMBO(down, KC_DOWN),
	COMBO(enter, KC_ENT),
	COMBO(del, KC_DEL),
	COMBO(minus, KC_MINUS),
    COMBO(pgup, KC_PGUP),
    COMBO(pgdwn, KC_PGDN),
    COMBO(ctrl, KC_LCTL),
    COMBO(alt, KC_LALT),
    COMBO(gui, KC_LGUI),
    COMBO(grv, KC_GRV),
};

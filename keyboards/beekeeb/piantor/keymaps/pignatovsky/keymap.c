#include QMK_KEYBOARD_H
#define _BASE 0
#define _NUMS 1

enum tap_dance_codes {
    TD_RALT_LALT,
    TD_LCTRL_LGUI,
    TD_LGUI_LCTRL,
    TD_BSPC_NUMS,
    TD_SPC_SIGNS
};

tap_dance_action_t tap_dance_actions[] = {
    [TD_RALT_LALT] = ACTION_TAP_DANCE_DOUBLE(KC_RALT, KC_LALT),
    [TD_LCTRL_LGUI] = ACTION_TAP_DANCE_DOUBLE(KC_LCTL, KC_LGUI),
    [TD_LGUI_LCTRL] = ACTION_TAP_DANCE_DOUBLE(KC_LGUI, KC_LCTL)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_split_3x6_3(
KC_TRNS, KC_Q, KC_W, KC_E, KC_R, KC_T,  KC_Y, KC_U, KC_I, KC_O, KC_SCLN, KC_TRNS,
KC_TRNS, MT(KC_LSFT, KC_A), MT(KC_LGUI, KC_S), MT(KC_LCTL, KC_D), MT(KC_LALT, KC_F), KC_G,  KC_H, MT(KC_LALT, KC_J), MT(KC_LCTL, KC_K), MT(KC_LGUI, KC_L), MT(KC_LSFT, KC_P), KC_TRNS,
KC_TRNS, KC_Z, KC_X, KC_C, KC_V, KC_B,  KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_TRNS,
TD(TD_LGUI_LCTRL), KC_BSPC, MO(_NUMS),               KC_RALT, KC_SPC, TD(TD_LCTRL_LGUI)
    ),
    [_NUMS] = LAYOUT_split_3x6_3(
KC_TAB, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,  KC_CIRC, KC_AMPR, KC_ASTR, KC_KB_VOLUME_DOWN, KC_KB_VOLUME_UP, KC_QUOT,
KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5,  KC_6, KC_7, KC_8, KC_9, KC_0, KC_QUOT,
KC_GRV, KC_Z, KC_X, KC_C, KC_V, KC_B,  KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_BSLS,
KC_LGUI, KC_BSPC, KC_LSFT,             KC_RALT, KC_SPC, KC_LCTL
    ),
};

const uint16_t PROGMEM equal[] = {KC_O, KC_SCLN, COMBO_END};
const uint16_t PROGMEM quote[] = {KC_J, KC_L, COMBO_END};
const uint16_t PROGMEM backslash[] = {KC_DOT, KC_SLSH, COMBO_END};
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
const uint16_t PROGMEM grv[] = {KC_Z, KC_X, COMBO_END};
const uint16_t PROGMEM tab[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM ecs[] = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM home[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM end[] = {KC_X, KC_C, COMBO_END};
// const uint16_t PROGMEM space[] = {KC_J, KC_L, COMBO_END};
const uint16_t PROGMEM bkspace[] = {KC_S, KC_F, COMBO_END};

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
        COMBO(grv, KC_GRV),
        COMBO(tab, KC_TAB),
        COMBO(ecs, KC_ESC),
//       COMBO(space, KC_SPC),
        COMBO(bkspace, KC_BSPC),
        COMBO(equal, KC_EQL),
        COMBO(backslash, KC_BSLS),
        COMBO(quote, KC_QUOT),
        COMBO(home, KC_HOME),
        COMBO(end, KC_END),
};

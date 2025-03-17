#include QMK_KEYBOARD_H
#define _BASE 0
#define _NUMS 1
#define _SIGNS 2

enum tap_dance_codes {
    TD_RALT_LALT,
    TD_LCTRL_LGUI,
    TD_LGUI_LCTRL,
};

void td_ralt_lalt_finished(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        register_code(KC_RALT);
    } else if (state->count == 2) {
        register_code(KC_LALT);
    }
}

void td_ralt_lalt_reset(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        unregister_code(KC_RALT);
    } else if (state->count == 2) {
        unregister_code(KC_LALT);
    }
}

void td_lctrl_lgui_finished(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        register_code(KC_LCTL);
    } else if (state->count == 2) {
        register_code(KC_LGUI);
    }
}

void td_lctrl_lgui_reset(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        unregister_code(KC_LCTL);
    } else if (state->count == 2) {
        unregister_code(KC_LGUI);
    }
}

void td_lgui_lctrl_finished(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        register_code(KC_LGUI);
    } else if (state->count == 2) {
        register_code(KC_LCTL);
    }
}

void td_lgui_lctrl_reset(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        unregister_code(KC_LGUI);
    } else if (state->count == 2) {
        unregister_code(KC_LCTL);
    }
}

tap_dance_action_t tap_dance_actions[] = {
    [TD_RALT_LALT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_ralt_lalt_finished, td_ralt_lalt_reset),
    [TD_LCTRL_LGUI] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_lctrl_lgui_finished, td_lctrl_lgui_reset),
    [TD_LGUI_LCTRL] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_lgui_lctrl_finished, td_lgui_lctrl_reset)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_split_3x6_3(
KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,  KC_Y, KC_U, KC_I, KC_O, KC_SCLN, KC_EQL,
KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G,  KC_H, KC_J, KC_K, KC_L, KC_P, KC_QUOT,
KC_LALT, KC_Z, KC_X, KC_C, KC_V, KC_B,  KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_BSLS,
TD(TD_LGUI_LCTRL), KC_LSFT, MO(_NUMS),               MO(_SIGNS), TD(TD_RALT_LALT), TD(TD_LCTRL_LGUI)
    ),
    [_NUMS] = LAYOUT_split_3x6_3(
KC_TAB, KC_1, KC_2, KC_3, KC_4, KC_5,  KC_KB_MUTE, KC_KB_VOLUME_DOWN, KC_KB_VOLUME_UP, KC_9, KC_0, KC_EQL,
KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5,  KC_6, KC_7, KC_8, KC_9, KC_0, KC_QUOT,
KC_GRV, KC_Z, KC_X, KC_C, KC_V, KC_B,  KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_BSLS,
KC_LGUI, KC_BSPC, KC_LSFT,             KC_RALT, KC_SPC, KC_LCTL
    ),
    [_SIGNS] = LAYOUT_split_3x6_3(
KC_TAB, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,  KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_EQL,
KC_ESC, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,  KC_CIRC, KC_AMPR, KC_ASTR, MT(MOD_LCTL, KC_L), MT(MOD_LGUI, KC_P), KC_QUOT,
KC_GRV, KC_F11, KC_F12, KC_C, KC_V, KC_B,  KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_BSLS,
KC_LGUI, KC_BSPC, KC_LSFT,             KC_RALT, KC_SPC, KC_LCTL
    ),
};

const uint16_t PROGMEM equal[] = {KC_O, KC_SCLN, COMBO_END};
const uint16_t PROGMEM quote[] = {KC_L, KC_P, COMBO_END};
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
const uint16_t PROGMEM space[] = {KC_J, KC_L, COMBO_END};
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
        COMBO(space, KC_SPC),
        COMBO(bkspace, KC_BSPC),
        COMBO(equal, KC_EQL),
        COMBO(backslash, KC_BSLS),
        COMBO(quote, KC_QUOT)
};

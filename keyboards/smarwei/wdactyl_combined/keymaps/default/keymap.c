#include QMK_KEYBOARD_H

// Tap Dance declarations
enum {
    TD_AE,
    TD_OE,
    TD_UE,
    TD_SS,
};

//  Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_AE] = ACTION_TAP_DANCE_DOUBLE(KC_A, RALT(KC_Q)),
    [TD_OE] = ACTION_TAP_DANCE_DOUBLE(KC_O, RALT(KC_P)),
    [TD_UE] = ACTION_TAP_DANCE_DOUBLE(KC_U, RALT(KC_Y)),
    [TD_SS] = ACTION_TAP_DANCE_DOUBLE(KC_S, RALT(KC_S)),
};

#include "../common_layout.c"

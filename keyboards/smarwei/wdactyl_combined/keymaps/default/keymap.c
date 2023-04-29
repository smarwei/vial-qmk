#include QMK_KEYBOARD_H

// Custom keycodes
enum custom_keycodes {
    CK_AE = SAFE_RANGE,
    CK_OE,
    CK_UE,
    CK_SS,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    static uint16_t key_timer;

    switch (keycode) {
        case CK_AE:
            if (record->event.pressed) {
                key_timer = timer_read();
                register_code(KC_A);
            } else {
                unregister_code(KC_A);
                if (timer_elapsed(key_timer) < TAPPING_TERM) {
                    tap_code(KC_A);
                }
            }
            return false;
        case CK_OE:
            if (record->event.pressed) {
                key_timer = timer_read();
                register_code(KC_O);
            } else {
                unregister_code(KC_O);
                if (timer_elapsed(key_timer) < TAPPING_TERM) {
                    tap_code(KC_O);
                }
            }
            return false;
        case CK_UE:
            if (record->event.pressed) {
                key_timer = timer_read();
                register_code(KC_U);
            } else {
                unregister_code(KC_U);
                if (timer_elapsed(key_timer) < TAPPING_TERM) {
                    tap_code(KC_U);
                }
            }
            return false;
        case CK_SS:
            if (record->event.pressed) {
                key_timer = timer_read();
                register_code(KC_S);
            } else {
                unregister_code(KC_S);
                if (timer_elapsed(key_timer) < TAPPING_TERM) {
                    tap_code(KC_S);
                }
            }
            return false;
    }
    return true;
}

void matrix_scan_user(void) {
    if (is_key_pressed(CK_AE) && timer_elapsed(key_timer) > TAPPING_TERM) {
        unregister_code(KC_A);
        register_code16(RALT(KC_Q));
    }
    if (is_key_pressed(CK_OE) && timer_elapsed(key_timer) > TAPPING_TERM) {
        unregister_code(KC_O);
        register_code16(RALT(KC_P));
    }
    if (is_key_pressed(CK_UE) && timer_elapsed(key_timer) > TAPPING_TERM) {
        unregister_code(KC_U);
        register_code16(RALT(KC_Y));
    }
    if (is_key_pressed(CK_SS) && timer_elapsed(key_timer) > TAPPING_TERM) {
        unregister_code(KC_S);
        register_code16(RALT(KC_S));
    }
}

#include "../common_layout.c"


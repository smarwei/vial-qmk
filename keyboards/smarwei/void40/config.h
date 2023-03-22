// Copyright 2022 Arne Weiss (@smarwei)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define LEADER_PER_KEY_TIMING
#define LEADER_TIMEOUT 250

#define TAPPING_TOGGLE 2

#define USB_MAX_POWER_CONSUMPTION 500

// LED stuff
#define RGB_DI_PIN D3
#define RGBLED_NUM 36
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_STATIC_LIGHT
#define RGBLIGHT_DEFAULT_HUE 255
#define RGBLIGHT_DEFAULT_SAT 0
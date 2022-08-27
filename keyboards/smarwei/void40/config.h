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


// LED stuff
#define RGB_DI_PIN D3
#define RGBLED_NUM 13
#define RGBLIGHT_DEFAULT_HUE 120
#define RGBLIGHT_MODE_BREATHING 2
// Copyright 2022 Emerson Jacobson (@emwjacobson)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* Encoder Configuration */

#define ENCODERS_PAD_A { B14 }
#define ENCODERS_PAD_B { B15 }

/* WS2182B Configuration */

#define WS2812_BYTE_ORDER WS2812_BYTE_ORDER_RGB
#define WS2812_PWM_DRIVER PWMD1
#define WS2812_PWM_CHANNEL 3
// // #define WS2812_PWM_PAL_MODE 2
// #define WS2812_DMA_STREAM STM32_DMA2_STREAM6
// #define WS2812_DMA_CHANNEL 6
// #define WS2812_DMAMUX_ID STM32_DMAMUX1_TIM2_UP
#define RGB_DI_PIN A10
#define RGBLED_NUM 8

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

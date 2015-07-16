/* mbed Microcontroller Library
 * Copyright (c) 2006-2013 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "mbed_assert.h"
#include "pwmout_api.h"

#include "cmsis.h"
#include "pinmap.h"
#include "PeripheralPins.h"


void pwmout_init(pwmout_t* obj, PinName pin)
{
}

void pwmout_free(pwmout_t* obj)
{
}

void pwmout_write(pwmout_t* obj, float value)
{
}

float pwmout_read(pwmout_t* obj)
{
}

void pwmout_period(pwmout_t* obj, float seconds)
{
}

void pwmout_period_ms(pwmout_t* obj, int ms)
{
}

void pwmout_period_us(pwmout_t* obj, int us)
{
}

void pwmout_pulsewidth(pwmout_t* obj, float seconds)
{
}

void pwmout_pulsewidth_ms(pwmout_t* obj, int ms)
{
}

void pwmout_pulsewidth_us(pwmout_t* obj, int us)
{
}

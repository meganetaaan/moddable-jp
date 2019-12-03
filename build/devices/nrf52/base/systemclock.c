/*
 * Copyright (c) 2016-2019  Moddable Tech, Inc.
 *
 *   This file is part of the Moddable SDK Runtime.
 *
 *   The Moddable SDK Runtime is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU Lesser General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   The Moddable SDK Runtime is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU Lesser General Public License for more details.
 *
 *   You should have received a copy of the GNU Lesser General Public License
 *   along with the Moddable SDK Runtime.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "xsmc.h"
#include "xsPlatform.h"

#include "nrf_delay.h"

#include "task.h"

#define TIMER_RESOLUTION_IN_MS	1
#define TICK_INTERVAL_MS		1

volatile uint32_t gTicksMS = 0;

void nrf52_delay(uint32_t delayMS) {

	nrf_delay_us(delayMS * 1000);
}

uint32_t nrf52_milliseconds() {
	return xTaskGetTickCount();
}

void nrf52_watchdog() {
}


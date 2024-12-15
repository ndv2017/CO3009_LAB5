/*
 * led.c
 *
 *  Created on: Nov 30, 2024
 *      Author: Admin
 */

#include "led.h"

void ledBlink(void) {
	HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
}

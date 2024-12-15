/*
 * sensor.c
 *
 *  Created on: Nov 30, 2024
 *      Author: Admin
 */

#include "sensor.h"

uint32_t sensorValue = 0;

void sensorRead(void) {
	sensorValue = HAL_ADC_GetValue(&hadc1);
}

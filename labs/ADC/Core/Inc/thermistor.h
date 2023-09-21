/*
 * thermistor.h
 *
 *  Created on: Sep 21, 2023
 *      Author: a_hui
 */

#ifndef INC_THERMISTOR_H_
#define INC_THERMISTOR_H_

#include <math.h>
#include <stdint.h>

double convertAnalogToTemperature(uint32_t AnalogReadValue);

#endif /* INC_THERMISTOR_H_ */

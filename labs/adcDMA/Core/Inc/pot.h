/*
 * pot.h
 *
 *  Created on: Sep 28, 2023
 *      Author: a_hui
 */

#ifndef INC_POT_H_
#define INC_POT_H_

#include <stdint.h>

#define ADC_MAX		4095.0		// max adc value
#define V_REF		3.3			// reference voltage


float ConvertPotADCtoFloat(float adcVal);


#endif /* INC_POT_H_ */

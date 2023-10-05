/*
 * dieTemp.h
 *
 *  Created on: Oct 4, 2023
 *      Author: a_hui
 */

#ifndef INC_DIETEMP_H_
#define INC_DIETEMP_H_

#include "main.h"

// Define variables from data sheet
#define AVG_SLOPE 	0.0025		// average slope in V/degC
#define V_25		0.76		// voltage at 25 deg C
#define V_REF		3.3			// maximum reference voltage
#define ADC_MAX		4095.0		// maximum ADC value (as a float)


// converts the adc value to a temperature
float ConvertDieTempADCtoFloat(uint16_t adcVal);

#endif /* INC_DIETEMP_H_ */

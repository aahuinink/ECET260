/*
 * pot.c
 *
 *  Created on: Sep 28, 2023
 *      Author: a_hui
 */

/*
 * ADC functionality for reading a pot voltage
 */

#include "pot.h"

double ConvertPotADCtoFloat(uint32_t adcVal, double min, double max){
	double result; 		// stores the resultant pot voltage
	switch (adcVal){
	case 0:
		result = min;
		break;
	case 4095:
		result = max;
		break;
	default:
		result = min + (adcVal/4095.0)*(max - min);
		break;
	}
	return result;
}

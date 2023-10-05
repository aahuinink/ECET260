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

float ConvertPotADCtoFloat(uint16_t adcVal){
	float result; 		// stores the resultant pot voltage
	switch (adcVal){
	case 0:
		result = 0.0;
		break;
	case 4095:
		result = V_REF;
		break;
	default:
		result = V_REF*((adcVal)/ADC_MAX);
		break;
	}
	return result;
}

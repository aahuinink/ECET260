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

float ConvertPotADCtoFloat(float adcVal){

	float result; 		// stores the resultant pot voltage

	result = V_REF*((adcVal)/ADC_MAX);

	break;
	return result;
}

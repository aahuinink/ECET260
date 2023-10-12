/*
 * dieTemp.c
 *
 *  Created on: Oct 4, 2023
 *      Author: a_hui
 */


#include "dieTemp.h"

float ConvertDieTempADCtoFloat(float adcVal)
{
	return (V_REF/ADC_MAX * (adcVal) - V_25)/AVG_SLOPE + 25.0;
}

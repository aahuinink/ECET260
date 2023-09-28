/*
 * pot.h
 *
 *  Created on: Sep 28, 2023
 *      Author: a_hui
 */

#ifndef INC_POT_H_
#define INC_POT_H_

#include <stdint.h>
#include <math.h>


double ConvertPotADCtoFloat(uint32_t adcVal, float max, float min);


#endif /* INC_POT_H_ */

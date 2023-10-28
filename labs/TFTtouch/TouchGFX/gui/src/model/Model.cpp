#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include <gui/screen_screen/screenPresenter.hpp>
#include "stm32f4xx_hal.h"
#include "main.h"

Model::Model() : modelListener(0), buttonState (Released), ledON (false)
{

}

void Model::tick()
{
	// read the button pin to see if it is pressed
	if(HAL_GPIO_ReadPin(B1_GPIO_Port, B1_Pin))
	{
		switch (buttonState){
		case Released:				// if registering a new press
			ledON = ledON ^ true;	// toggle led state
			buttonState = Pressed;	// change to pressed state
			break;
		case Pressed:
			break;			// do nothing, wait for release
		}
	}else{
		buttonState = Released; // otherwise reset button state
	}

	modelListener->setLED (ledON);

}

#include <gui/screen_screen/screenView.hpp>

screenView::screenView()
{

}

void screenView::setupScreen()
{
    screenViewBase::setupScreen();
}

void screenView::tearDownScreen()
{
    screenViewBase::tearDownScreen();
}

void screenView::setLED (bool state)
{
	// toggle visibility of dark and bright led images based on the state of the hardware button
	BrightLED.setVisible(state);
	DarkLED.setVisible(!state);
	BrightLED.invalidate();
	DarkLED.invalidate();
}

void screenView::RedButtonPressed()
{
	HAL_GPIO_TogglePin(RED_GPIO_Port, RED_Pin);
	return;
}

void screenView::GreenButtonPressed()
{
	HAL_GPIO_TogglePin(GREEN_GPIO_Port, GREEN_Pin);
		return;
}

void screenView::BlueButtonPressed()
{
	HAL_GPIO_TogglePin(BLUE_GPIO_Port, BLUE_Pin);
		return;
}



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

void RedButtonPressed()
{
	HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
	return;
}

void screenView::setLED (bool state)
{
	BrightLED.setVisible(state);	// toggle the bright and dark led images
	DarkLED.setVisible(!state);
}

#ifndef SCREENVIEW_HPP
#define SCREENVIEW_HPP

#include <gui_generated/screen_screen/screenViewBase.hpp>
#include <gui/screen_screen/screenPresenter.hpp>
#include "stm32f4xx_hal.h"
#include "main.h"

class screenView : public screenViewBase
{
public:
    screenView();
    virtual ~screenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void setLED(bool state);
    virtual void RedButtonPressed();
    virtual void GreenButtonPressed();
    virtual void BlueButtonPressed();
};

#endif // SCREENVIEW_HPP

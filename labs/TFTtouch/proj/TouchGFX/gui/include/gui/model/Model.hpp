#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

class Model
{
	// enum for button states
		typedef enum ButtonStates {
			Pressed,
			Released,
		};

		// struct for button object
		typedef struct {
			ButtonStates state;
			bool UIledON;
		} Button;
public:

	ButtonStates buttonState;

	bool ledON;

    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();

    void setLED(bool state);
protected:
    ModelListener* modelListener;
};

#endif // MODEL_HPP

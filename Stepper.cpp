#include "Stepper.h"
#include "Arduino.h"

const int delayms = 2;

Stepper::Stepper(int pin1, int pin2, int pin3, int pin4)
    : _pin1(pin1), _pin2(pin2), _pin3(pin3), _pin4(pin4)
{
    pinMode(_pin1, OUTPUT);
    pinMode(_pin2, OUTPUT);
    pinMode(_pin3, OUTPUT);
    pinMode(_pin4, OUTPUT);
}

void Stepper::nStepsForward(int n)
{
    for (int i = 0; i < n; ++i)
    {
        oneFourStepForward();
    }
}

void Stepper::nStepsBackward(int n)
{
    for (int i = 0; i < n; ++i)
    {
        oneFourStepBackward();
    }
}

void Stepper::write(int pin1, int pin2, int pin3, int pin4)
{
    digitalWrite(_pin1, pin1);
    digitalWrite(_pin2, pin2);
    digitalWrite(_pin3, pin3);
    digitalWrite(_pin4, pin4);
}

void Stepper::oneFourStepForward()
{
    write(1, 1, 0, 0);
    delay(delayms);
    write(0, 1, 1, 0);
    delay(delayms);
    write(0, 0, 1, 1);
    delay(delayms);
    write(1, 0, 0, 1);
    delay(delayms);
}

void Stepper::oneFourStepBackward()
{
    write(1, 0, 0, 1);
    delay(delayms);
    write(0, 0, 1, 1);
    delay(delayms);
    write(0, 1, 1, 0);
    delay(delayms);
    write(1, 1, 0, 0);
    delay(delayms);
}

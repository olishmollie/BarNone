#include "Stepper.h"
#include "Arduino.h"

Stepper(int nsteps, int rpm, int pin1, int pin2, int pin3, int pin4)
    : _nsteps(nsteps), _rpm(rpm), _pin1(pin1), _pin2(pin2), _pin3(pin3),
      _pin4(pin4)
{
    pinMode(_pin1, OUTPUT);
    pinMode(_pin2, OUTPUT);
    pinMode(_pin3, OUTPUT);
    pinMode(_pin4, OUTPUT);
}

void nStepsForward(int n) {}

void nStepsBackward(int n) {}

void Stepper::write(int pin1, int pin2, int pin3, int pin4)
{
    digitalWrite(A, a);
    digitalWrite(B, b);
    digitalWrite(C, c);
    digitalWrite(D, d);
}

void oneFourStepForward()
{
    write(1, 1, 0, 0);
    delay(5);
    write(0, 1, 1, 0);
    delay(5);
    write(0, 0, 1, 1);
    delay(5);
    write(1, 0, 0, 1);
    delay(5);
}

void oneFourStepBakward()
{
    write(1, 0, 0, 1);
    delay(5);
    write(0, 0, 1, 1);
    delay(5);
    write(0, 1, 1, 0);
    delay(5);
    write(1, 1, 0, 0);
    delay(5);
}

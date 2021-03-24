#ifndef STEPPER_H
#define STEPPER_H

class Stepper
{
public:
    Stepper(int nsteps, int rpm, int pin1, int pin2, int pin3, int pin4);

    // Take n steps forward.
    void nStepsForward(int n);

    // Take n steps backward.
    void nStepsBackward(int n);

private:
    int _nsteps, _pin1, _pin2, _pin3, _pin4, _rpm;
    void write(int, int, int, int);
    void oneFourStepForward();
    void oneFourStepBackward();
}

#endif

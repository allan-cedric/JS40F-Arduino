// -- Implementation of JS40F Class --
// -- Plataform: Arduino --
// -- Author: Allan Cedric --

#include "JS40F-Arduino.h"

JS40F::JS40F(uint8_t pin)
{
    _pin = pin;
    pinMode(_pin, INPUT);
}

uint8_t JS40F::read()
{
    return digitalRead(_pin);
}

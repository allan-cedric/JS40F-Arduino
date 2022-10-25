// -- JS40F Sensor Class --
// -- Plataform: Arduino --
// -- Author: Allan Cedric --

#ifndef __JS40F_ARDUINO_H__
#define __JS40F_ARDUINO_H__

// --- Libraries ---
#include <Arduino.h>

// --- JS40F Class ---
class JS40F
{
private:
    uint8_t _pin;   // Sensor pin

public:
    /*!
        @brief  Constructor

        @param  pin Sensor pin (must be digital)
    */
    JS40F(uint8_t pin);

    /*!
        @brief  Read sensor

        @return Digital value
    */
    uint8_t read();
};

#endif
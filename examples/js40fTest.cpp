#include <JS40F-Arduino.h>

#define SENSOR_PIN 3

JS40F sensor(SENSOR_PIN);

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    int val = sensor.read();
    if(val == 0)
        Serial.println("NOT detected");
    else
        Serial.println("detected");
    delay(200);
}

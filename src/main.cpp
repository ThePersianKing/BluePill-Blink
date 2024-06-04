/*
  main.cpp
  BluePill Skeleton Project in PlatformIO
*/

#include <Arduino.h>
#define DEBUG

#include "debugutils.h"

void setPinModes() {
    pinMode(LED_BUILTIN, OUTPUT);
}

void setup()
{
  Serial.begin(9600);
  Serial.println("Starting ...");
  setPinModes();
}

void loop()
{
    DEBUG_PRINTLN("Set LED OFF");
    digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
    delay(500);                      // wait for a second
    DEBUG_PRINTLN("Set LED ON");    
    digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
    delay(500); 
}


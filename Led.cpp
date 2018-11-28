#include "Led.h"
#include <Arduino.h>

void Led::Init(int pin)
{
  this->_pin = pin;
  pinMode(pin, OUTPUT);
  this->Apagar();
}

void Led::Encender() const
{
  digitalWrite(_pin, HIGH);
}

void Led::Apagar() const
{
  digitalWrite(_pin, LOW);
}

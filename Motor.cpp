#include "Motor.h"
#include <Servo.h>
#include <Arduino.h>

int MAX = 180;
int MIN = 0;
int STOP = 90;

int velocidadToAngulo(int velocidad){
  return map(velocidad, 0, 100, MIN, STOP);
}

void Motor::Init(int pin)
{
  this->_servo.attach(pin);
}

void Motor::Parar() const
{
  _servo.write(STOP);
}

void Motor::Adelante() const
{
  _servo.write(MAX);
}

void Motor::Adelante(int velocidad) const
{
  if (velocidad>=0 and velocidad<=100) {
    _servo.write(STOP + velocidadToAngulo(velocidad));
  } else {
    Parar();
  }
}

void Motor::Atras() const
{
  _servo.write(MIN);
}

void Motor::Atras(int velocidad) const
{
  if (velocidad>=0 and velocidad<=100) {
    _servo.write(STOP - velocidadToAngulo(velocidad));
  } else {
    Parar();
  }
}

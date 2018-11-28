#ifndef _MOTOR_h
#define _MOTOR_h

#include <Servo.h>

class Motor
{
public:
  void Init(int pin); //pin al que se conecta la señal del servo
  void Parar() const;
  void Adelante() const;
  void Adelante(int velocidad) const; //velocidad de 0 a 100
  void Atras() const;
  void Atras(int velocidad) const; //velocidad de 0 a 100

private:
  Servo _servo;
};

#endif

#include "Motor.h"
#include "Led.h"

Motor motor;
Led led;

void setup() {
   motor.Init(12);
   led.Init(LED_BUILTIN);
}

void loop() {
  motor.Parar();
  delay(1000);

  led.Encender();
  motor.Adelante(10);
  delay(1000);
  motor.Adelante(20);
  delay(3000);
  motor.Adelante(30);
  delay(3000);
  motor.Adelante(40);
  delay(1000);
  motor.Adelante(50);
  delay(1000);
  motor.Adelante(60);
  delay(1000);
  motor.Adelante(70);
  delay(1000);
  motor.Adelante(80);
  delay(1000);
  motor.Adelante(90);
  delay(1000);
  motor.Adelante(100);
  delay(1000);
  led.Apagar();

  motor.Parar();
  delay(1000);

  motor.Atras(50);
  delay(1000);
}

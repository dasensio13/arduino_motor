#include "Motor.h"
#include "Led.h"

int PIN_MOTOR = 12;

Motor motor;
Led led;

void setup() {
  motor.Init(PIN_MOTOR, true);
  led.Init(LED_BUILTIN);
}

void loop() {
  led.Encender();
  motor.Adelante();
  delay(500);

  motor.Adelante(10);
  delay(500);

  motor.AdelanteDirecto(10);
  delay(500);

  motor.Atras();
  delay(500);

  motor.Atras(10);
  delay(500);

  motor.AtrasDirecto(10);
  delay(500);

  motor.Velocidad(50);
  delay(500);
  
  motor.Velocidad(-50);
  delay(500);

  led.Apagar();
  motor.Parar();
  delay(5000);
}

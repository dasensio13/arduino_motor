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
  delay(1000);

  motor.Adelante(10);
  delay(1000);

  motor.AdelanteDirecto(10);
  delay(1000);

  motor.Atras();
  delay(1000);

  motor.Atras(10);
  delay(1000);

  motor.AtrasDirecto(10);
  delay(1000);

  led.Apagar();
  motor.Parar();
  delay(10000);

}

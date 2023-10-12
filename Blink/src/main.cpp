#include "Arduino.h"

const uint8_t led_pin = 2;
bool led_state = false;

extern "C" void app_main()
{
  initArduino();

  Serial.begin(115200);
  pinMode(led_pin, OUTPUT);

  while (true)
  {
    digitalWrite(led_pin, led_state ? LOW : HIGH);
    Serial.printf("LED STATE: %s\n", led_state ? "HIGH" : "LOW");
    
    led_state = !led_state;

    delay(1000);
  }
}

#include <Arduino.h>

void setup() {
  Serial.begin(115900);
  pinMode(LED_BUILTIN, OUTPUT);
}

uint8_t i {0};

void loop() {
  i++;
                                                                                                                                                                                                                                                                                                                 digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
  Serial.print(i);
}
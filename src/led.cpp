#include "main.h"

void blink() {
  for (int counter = 0; counter < 10; counter++) {
    digitalWrite(LED, counter % 2);
    delay(500);
  }
  digitalWrite(LED, LOW);
}
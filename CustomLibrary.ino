//We will make our own LIBRARY
#include "ledRGB.h"

ledRGB RGB;

#define ledR_pin  3
#define ledG_pin  5
#define ledB_pin  6

void setup() {
  RGB.begin(ledR_pin,ledG_pin,ledB_pin);
  RGB.black();
}

void loop() {
  RGB.green();
  delay(2000);
}

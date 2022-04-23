/*
   RGB LIBRARY
   04-23-2022

   test only
*/

#include "ledRGB.h"

ledRGB::ledRGB()
{
}


void ledRGB:: begin(byte ledRPin, byte ledGPin, byte ledBPin) {
  ledR = ledRPin;
  ledG = ledGPin;
  ledB = ledBPin;
  pinMode(ledRPin, OUTPUT);
  pinMode(ledGPin, OUTPUT);
  pinMode(ledBPin, OUTPUT);
  delayMicroseconds(10);

  analogWrite(ledR, 0);

  analogWrite(ledG, 0);

  analogWrite(ledB, 0);
}


void ledRGB::black() {
  analogWrite(ledR, 0);
  analogWrite(ledG, 0);
  analogWrite(ledB, 0);
}

void ledRGB::white() {
  analogWrite(ledR, 255);
  analogWrite(ledG, 255);
  analogWrite(ledB, 255);
}

void ledRGB::red() {
  analogWrite(ledR, 255);
  analogWrite(ledG, 0);
  analogWrite(ledB, 0);
}

void ledRGB::green() {
  analogWrite(ledR, 0);
  analogWrite(ledG, 255);
  analogWrite(ledB, 0);
}

void ledRGB::blue() {
  analogWrite(ledR, 0);
  analogWrite(ledG, 0);
  analogWrite(ledB, 255);
}

void ledRGB::setColor(byte Rbyte, byte Gbyte, byte Bbyte){
  analogWrite(ledR,Rbyte );
  analogWrite(ledG, Gbyte);
  analogWrite(ledB, Bbyte);
}

/*
 * RGB LIBRARY
 * 04-23-2022
 */


#ifndef RGBLED_H
#define RGBLED_H


#include "Arduino.h"

class ledRGB{
    public:
        ledRGB();
      
        void begin(byte ledRPin, byte ledGPin, byte ledBPin);
        void black();
        void white();
        void red();
        void green();
        void blue();

        void setColor(byte Rbyte, byte Gbyte, byte Bbyte);
        
    private:
        byte ledR = 0;
        byte ledG = 0;
        byte ledB = 0;
};

#endif

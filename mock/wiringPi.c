/*
  Placeholder functions for wiringpi when used outside RPi
*/

#include <stdio.h>

#include "wiringPi.h"

void pinMode (int pin, int mode)
{
  printf("pinMode :: setting pin:%d to mode:%d\n", pin, mode);
}

int wiringPiSetup (void)
{
  printf("wiringPiSetup :: setting raspberry pi GPIO\n");
}

void digitalWrite (int pin, int value)
{
  printf("digitalWrite :: setting pin:%d to value:%d\n", pin, value);
}
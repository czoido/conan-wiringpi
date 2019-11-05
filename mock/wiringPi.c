/*
  Placeholder functions for wiringpi when used outside RPi
*/

#include <stdio.h>
#ifdef WINDOWS
#include <windows.h>
#else
#include <unistd.h>
#endif
#include "wiringPi.h"

void _sleep(int sleepMs)
{
#ifdef WINDOWS
  Sleep(sleepMs);
#else
  usleep(sleepMs * 1000); // usleep takes sleep time in us (1 millionth of a second)
#endif
}

void pinMode(int pin, int mode)
{
  printf("pinMode :: setting pin:%d to mode:%d\n", pin, mode);
}

int wiringPiSetup(void)
{
  printf("wiringPiSetup :: setting raspberry pi GPIO\n");
}

void digitalWrite(int pin, int value)
{
  printf("digitalWrite :: setting pin:%d to value:%d\n", pin, value);
}

void delay(unsigned int howLong)
{
  printf("delay :: delay:%d ms\n", howLong);
  _sleep(howLong);
}
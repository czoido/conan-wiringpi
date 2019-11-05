#ifndef __WIRING_PI_H__
#define __WIRING_PI_H__

// C doesn't have true/false by default and I can never remember which
//	way round they are, so ...
//	(and yes, I know about stdbool.h but I like capitals for these and I'm old)

#ifndef TRUE
#define TRUE (1 == 1)
#define FALSE (!TRUE)
#endif

// GCC warning suppressor

#define UNU __attribute__((unused))

// Mask for the bottom 64 pins which belong to the Raspberry Pi
//	The others are available for the other devices

#define PI_GPIO_MASK (0xFFFFFFC0)

// Handy defines

// wiringPi modes

#define WPI_MODE_PINS 0
#define WPI_MODE_GPIO 1
#define WPI_MODE_GPIO_SYS 2
#define WPI_MODE_PHYS 3
#define WPI_MODE_PIFACE 4
#define WPI_MODE_UNINITIALISED -1

// Pin modes

#define INPUT 0
#define OUTPUT 1
#define PWM_OUTPUT 2
#define GPIO_CLOCK 3
#define SOFT_PWM_OUTPUT 4
#define SOFT_TONE_OUTPUT 5
#define PWM_TONE_OUTPUT 6

#define LOW 0
#define HIGH 1

// Pull up/down/none

#define PUD_OFF 0
#define PUD_DOWN 1
#define PUD_UP 2

// PWM

#define PWM_MODE_MS 0
#define PWM_MODE_BAL 1

// Interrupt levels

#define INT_EDGE_SETUP 0
#define INT_EDGE_FALLING 1
#define INT_EDGE_RISING 2
#define INT_EDGE_BOTH 3

// Pi model types and version numbers
//	Intended for the GPIO program Use at your own risk.

#define PI_MODEL_A 0
#define PI_MODEL_B 1
#define PI_MODEL_AP 2
#define PI_MODEL_BP 3
#define PI_MODEL_2 4
#define PI_ALPHA 5
#define PI_MODEL_CM 6
#define PI_MODEL_07 7
#define PI_MODEL_3 8
#define PI_MODEL_ZERO 9
#define PI_MODEL_CM3 10
#define PI_MODEL_ZERO_W 12
#define PI_MODEL_3P 13

#define PI_VERSION_1 0
#define PI_VERSION_1_1 1
#define PI_VERSION_1_2 2
#define PI_VERSION_2 3

#define PI_MAKER_SONY 0
#define PI_MAKER_EGOMAN 1
#define PI_MAKER_EMBEST 2
#define PI_MAKER_UNKNOWN 3

#ifdef __cplusplus
extern "C"
{
#endif

    extern void pinMode(int pin, int mode);
    extern int wiringPiSetup(void);
    extern void digitalWrite(int pin, int value);
    extern void delay(unsigned int howLong);

#ifdef __cplusplus
}
#endif

#endif
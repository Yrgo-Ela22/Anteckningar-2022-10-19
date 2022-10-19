/********************************************************************************
* header.h: Inneh�ller diverse makrodefinitioner och funktionsdeklarationer
*           f�r implementering av det inbyggda systemet.
********************************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

/* Inkluderingsdirektiv: */
#include <avr/io.h>        /* Information om I/O-register s�som PORTB. */
#include <avr/interrupt.h> /* Information om avbrottsvektorer, avbrottsrutiner med mera. */

/* Makrodefinitioner: */
#define LED1 0 /* Lysdiod 1 p� pin 8 / PORTB0. */
#define LED2 1 /* Lysdiod 2 p� pin 9 / PORTB1. */
#define LED3 2 /* Lysdiod 3 p� pin 10 / PORTB2. */

#define BUTTON1 3 /* Tryckknapp 1 p� pin 11 / PORTB3. */
#define BUTTON2 4 /* Tryckknapp 2 p� pin 12 / PORTB4. */
#define BUTTON3 5 /* Tryckknapp 3 p� pin 13 / PORTB5. */

#define LED1_ON PORTB |= (1 << LED1) /* T�nder lysdiod 1. */
#define LED2_ON PORTB |= (1 << LED2) /* T�nder lysdiod 2. */
#define LED3_ON PORTB |= (1 << LED3) /* T�nder lysdiod 3. */

#define LED1_OFF PORTB &= ~(1 << LED1) /* Sl�cker lysdiod 1. */
#define LED2_OFF PORTB &= ~(1 << LED2) /* Sl�cker lysdiod 2. */
#define LED3_OFF PORTB &= ~(1 << LED3) /* Sl�cker lysdiod 3. */

#define BUTTON1_IS_PRESSED (PINB & (1 << BUTTON1)) /* Indikerar nedtryckning av tryckknapp 1. */
#define BUTTON2_IS_PRESSED (PINB & (1 << BUTTON2)) /* Indikerar nedtryckning av tryckknapp 2. */
#define BUTTON3_IS_PRESSED (PINB & (1 << BUTTON3)) /* Indikerar nedtryckning av tryckknapp 3. */

/* Enumerationer: */
typedef enum { false, true } bool; /* Realiserar datatypen bool. */

/* Funktionsdeklarationer: */
void setup(void);
void led_toggle(const uint8_t pin);

#endif /* HEADER_H_ */ 
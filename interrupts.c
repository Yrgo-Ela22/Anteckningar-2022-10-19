/********************************************************************************
* interrupts.c: Inneh�ller avbrottsrutiner.
********************************************************************************/
#include "header.h"

/********************************************************************************
* ISR (PCINT0_vect): Avbrottsrutin f�r PCI-avbrott p� I/O-port B, som anropas 
*                    vid event p� n�gon av tryckknapparnas pinnar 11 - 13 / 
*                    PORTB3 - PORTB5. Om nedtryckning av n�gon av knapparna 
*                    orsakade avbrottet s� togglas motsvarande lysdiod.
********************************************************************************/
ISR (PCINT0_vect)
{
   if (BUTTON1_IS_PRESSED)
   {
      led_toggle(LED1);
   }
   else if (BUTTON2_IS_PRESSED)
   {
      led_toggle(LED2);
   }
   else if (BUTTON3_IS_PRESSED)
   {
      led_toggle(LED3);
   }
   return;
}
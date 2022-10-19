/********************************************************************************
* main.c: Interruptbaserad styrning av tre lysdiod anslutna till pin 8 - 10 
*         (PORTB0 - PORTB2) via nedtryckning av tryckknappar anslutna till pin
*         11 - 13 / PORTB3 - PORTB5. PCI-avbrott PCINT3 - PCINT5 �r aktiverat 
*         p� tryckknappens pin f�r att toggla lysdioderna mellan att vara t�nda 
*         och sl�ckt.
*
*         Vid nedtryckning av tryckknapp 1 ansluten till pin 11 / PORTB3 s�
*         togglas lysdiod 1 ansluten till pin 8 / PORTB0.

*         Vid nedtryckning av tryckknapp 2 ansluten till pin 12 / PORTB4 s�
*         togglas lysdiod 2 ansluten till pin 9 / PORTB1.

*         Vid nedtryckning av tryckknapp 3 ansluten till pin 13 / PORTB5 s�
*         togglas lysdiod 3 ansluten till pin 10 / PORTB2.
********************************************************************************/
#include "header.h"

/********************************************************************************
* led_toggle: Togglar tillst�ndet f�r angiven lysdiod p� I/O-port B mellan att
*             vara t�nd och sl�ckt. Statiska variabler anv�nds f�r att h�lla
*             reda p� lysdiodernas tillst�nd och togglas vid anrop f�r att
*             �ndra tillst�nd. 
*
*             - pin: Lysdiodens pin-nummer p� I/O-port B.
********************************************************************************/
void led_toggle(const uint8_t pin)
{
   static bool led1_enabled = false; 
   static bool led2_enabled = false;
   static bool led3_enabled = false;

   if (pin == LED1)
   {
      led1_enabled = !led1_enabled; 
      if (led1_enabled) LED1_ON;   
      else LED1_OFF;                
   }
   else if (pin == LED2)
   {
      led2_enabled = !led2_enabled;
      if (led2_enabled) LED2_ON;
      else LED2_OFF;
   }
   else if (pin == LED3)
   {
      led3_enabled = !led3_enabled;
      if (led3_enabled) LED3_ON;
      else LED3_OFF;
   }

   return;
}

/********************************************************************************
* main: Initierar mikrodatorn vid start. Programmet h�lls sedan ig�ng s� l�nge
*       matningssp�nning tillf�rs. Toggling av lysdioderna sker via interrupts,
*       d�rav avsaknad av kod i while-satsen.
********************************************************************************/
int main(void)
{
   setup();

   while (1)
   {
       
   }

   return 0;
}


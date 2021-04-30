
/**
 * @file act1.c
 * @author PAVAN KULKARNI (pavansk172@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include <util/delay.h>
#include "act1.h"

/**
 * @brief A function to operate the button and heater sensor
 * 
 */
void Buttons_LED_Init()
{
     /*Configure LED and Switch pins*/
    DDRB|=(1<<PB0);//setting PB0=1 for led
    DDRD&=~(1<<PD0);//making it 0
    PORTD|=(1<<PD0);//matching bit
    DDRD&=~(1<<PD4);//making 0
     PORTD|=(1<<PD4);//setting bit
     while(1)
     {
         if(!(PIND&(1<<PD0)))
         {
             if(!(PIND&(1<<PD4)))
             {
                 PORTB|=(1<<PB0);
             }
             else
                {
                PORTB&=~(1<<PB0);
             }
         }
         else
            {
            PORTB&=~(1<<PB0);
         }
     }
}

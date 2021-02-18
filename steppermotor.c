/*
 * File:   Stepper Motor Control
 * Author: Mohamed Hamdi
 * please visit my youtube channel:https://www.youtube.com/channel/UCzt_0MFbJiT93KSR74pW6Jw
 * 
 */

#include <xc.h>
#include "confg.h"
#define _XTAL_FREQ 4000000
void main(void)
{
    //create bit shifting variable
    unsigned char i = 0;
    //set port b pins to be output pins
    TRISB = 0X00;
    //set all ports pin to be off
    PORTB = 0x00;
    //creat the ststem routine

    while (1)
    {
        for (int j = 0; j < 48; j++)
        {
            PORTB = (1 << i);
            i++;
            __delay_ms(100);
            if (i == 4)
            {
                i = 0;
            }
        }
        __delay_ms(1000);

        for (int j = 0; j < 48; j++)
        {
            PORTB = (8 >> i);
            i++;
            __delay_ms(100);
            if (i == 4)
            {
                i = 0;
            }
        }
    }
    return;
}

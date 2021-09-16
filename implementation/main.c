/**
 * @file main.c
 * @author Rohit A Naik(rohitashoknaik@gmail.com)
 * @brief to call the function for led, read and display the temperature values
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"
/**
 * @brief main function to call the activity functions
 * 
 * @return int 
 */
int main(void)
{
    uint16_t tmp;

    while(1)
    {
        if(LED()==1) //Check if both the switches are pressed
        {
            LED_ON();          //Turn LED ON
            tmp=GetADC();     //To Get the ADC value
            PWM(tmp);         //this is to PWM output based on temperature
		        USARTWrite(tmp); //this is for Serial monitor to display Temperature
        }
        else  // other cases
        {
            LED_OFF();     //Turn LED OFF
	    _delay_ms(200);
        }
    }
    return 0;
}

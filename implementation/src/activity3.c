/**
 * @file activity3.c
 * @author Rohit A Naik (rohitashoknaik@gmail.com)
 * @brief to convert the read ADC value to PWM values
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "activity3.h"
#include "activity2.h"
/**
 * @brief to initialize the timer port
 * 
 */
void Init_Timer()
{
    TCCR1A |= (1<<COM1A1)|(1<<WGM11)|(1<<WGM10);
    TCCR1B |= (1<<WGM12)|(1<<CS11)|(1<<CS10);
    DDRB |=(1<<PB1);
}
/**
 * @brief to convert the temperature values to PWM values 
 * 
 * @param temp to store the ADC values 
 */

void PWM(uint16_t temp)
{
    Init_Timer();
    if(temp>=0 && temp<=200){
            OCR1A = PWM_20_PERCENT;
            _delay_ms(200);
        }
        else if(temp>=210 && temp<=500){
             OCR1A = PWM_40_PERCENT;
            _delay_ms(200);
        }
        else if(temp>=510 && temp<=700){
             OCR1A = PWM_70_PERCENT;
            _delay_ms(200);
        }
        else if(temp>=710 && temp<=1024){
             OCR1A = PWM_95_PERCENT;
            _delay_ms(200);
        }
        else{
            OCR1A=0;
            _delay_ms(200);
        }

}

/**
 * @file activity2.c
 * @author Rohit A Naik(rohitashoknaik@gmail.com)
 * @brief Functions to initialize the ADC port and read the ADC values
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "activity2.h"
/**
 * @brief initializing ADC port
 * 
 */
void Init_ADC()
{
    ADMUX=(1<<REFS0);
    ADCSRA= (1<<ADEN)|(7<<ADPS0);
}
/**
 * @brief reading the ADC values
 * 
 * @param ch ADC channel to read values
 * @return uint16_t ADC value
 */
uint16_t Read_ADC(uint8_t ch)
{
    ADMUX&=0xf8;
    ch=ch&0b00000111;
    ADMUX|=ch;

    ADCSRA|=(1<<ADSC);
    while(!(ADCSRA & (1<<ADIF)));
    ADCSRA|=(1<<ADIF);
    return(ADC);
}
/**
 * @brief to get the ADC valuues
 * 
 * @param temp to store th read values of ADC
 * @return uint16_t temp value
 */
uint16_t GetADC(void)
{
      Init_ADC();
      uint16_t temp;
      temp=Read_ADC(0);
      return temp;
}

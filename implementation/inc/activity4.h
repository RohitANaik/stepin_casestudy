/**
 * @file activity4.h
 * @author Rohit A Naik (rohitashoknaik@gmail.com)
 * @brief fuctions to display the temperature values through oscilloscope and serial monitors
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __ACTIVITY4_H__
#define __ACTIVITY4_H__
/**
 
 * @brief Macro definations
 * 
 */
#define F_CPU 16000000UL     /**< set Clock Frequency of MCU is 16 MHz */
#define USART_BAUDRATE 9600 /**< set Baud rate for serial communication  */
#define UBRR_VALUE (((F_CPU / (USART_BAUDRATE * 16UL))) - 1) /**< this is Formula to calculate UBRR value */


#include <util/delay.h>
#include <avr/io.h>
/**
 * @brief initializing USART port
 * 
 */

void Init_USART();
/**
 * @brief reading the values
 * 
 * @return int values
 */


int Read_USART();
/**
 * @brief write the temp values to the USART port
 * 
 * @param temp stored value of ADC
 */
void USARTWrite(uint16_t temp);

#endif /* __ACTIVITY4_H__ */

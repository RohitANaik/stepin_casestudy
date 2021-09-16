/**
 * @file activity2.h
 * @author Rohit A Naik(rohitashoknaik@gmail.com)
 * @brief this contains function to read the adc values
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACTIVITY2_H__
#define __ACTIVITY2_H__


#include <util/delay.h>
#include <avr/io.h>
/**
 * @brief to initialize adc ports and pins
 * 
 */
void Init_ADC();
/**
 * @brief to read the adc values
 * 
 * @param ch the adc channel
 * @return uint16_t 
 */

uint16_t Read_ADC(uint8_t ch);
/**
 * @brief to get the ADC values
 * 
 * @return uint16_t 
 */

uint16_t GetADC(void);

#endif /* __ACTIVITY2_H__ */

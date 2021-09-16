/**
 * @file activity3.h
 * @author Rohit A Naik (rohitashoknaik@gmail.com)
 * @brief contains functions for conversion of ADC to PWM
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __ACTIVITY3_H__
#define __ACTIVITY3_H__
/**
 
 * @brief macro definations
 *
 */

#define PWM_20_PERCENT (205) /**< This is for Output PWM for 20% duty cycle */
#define PWM_40_PERCENT (410) /**< This is for Output PWM for 40% duty cycle */
#define PWM_70_PERCENT (717) /**< This is for Output PWM for 70% duty cycle */
#define PWM_95_PERCENT (973) /**< This is for Output PWM for 95% duty cycle */

#include <util/delay.h>
#include <avr/io.h>
/**
 * @brief initialize timer
 * 
 */
void Init_Timer();
/**
 * @brief conversion to PWM
 * 
 * @param temp to store the ADC values
 */
void PWM(uint16_t temp);

#endif /* __ACTIVITY3_H__ */

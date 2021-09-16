#ifndef __ACTIVITY1_H__
#define __ACTIVITY1_H__

/**
 * @file activity1.h
 * @author Rohit A Naik(rohitashoknaik@gmail.com)
 * @brief contains all the function calls for led on and off
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * @brief macro definations
 * 
 */
#define F_CPU 16000000UL 	   /**< Clock Frequency of MCU is 16 MHz */
#define LED_PORT (PORTD)           /**< LED Port Number */
#define LED_PIN  (PORTD2)         /**< LED Pin number  */
#define BUTTON_SENSOR  (PORTD0)  /**< Port for Button Sensor  */
#define TEMP_SENSOR  (PORTD1)   /**< Port for Temperature Sensor   */

#include <util/delay.h>
#include <avr/io.h>

/**
 * @brief function to initialize peripherals
 * 
 */
void init_peripheral(void);
/**
 * @brief function to turn on led
 * 
 */

void LED_ON();
/**
 * @brief function to turn off led
 * 
 */

void LED_OFF();
/**
 * @brief to check if both the switches are ON
 * 
 * @return FLAG checks if both switches are ON 
 */

int LED(void);

#endif /* __ACTIVITY1_H__ */

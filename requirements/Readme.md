# INTRODUCTION
An embedded system project to interface AVR atmega328 microcontroller to various peripherals.Initially we check if the person is seated or not if the person is seated the we check if the heater sensor is on or not if the heater sensor is on then we display it by using a LED which blinks when both the conditions are true.
then we read the temperature value by interfacing the ADC port the ADC value then read is converted to PWM signal which is then displayed using a oscilloscope.

# requirements for this project are:
1.code blocks
2.simulIDE
3.visual studio code
4.github account

# SWOT Analysis
## strength:
1.user friendly
2.space and time efficient

## weakness:
1.complex calculations

## opportunities:
1.easy to check the values

## threats:
1.accuracy may not be obtained

# Research:
1.https://www.xanthium.in/atmega328p-10bit-sar-adc-usart-serial-transmit-to-pc-data-acquisition-tutorial
2.https://embedds.com/adc-on-atmega328-part-1/
3.https://extremeelectronics.co.in/avr-tutorials/using-adc-of-avr-microcontroller/
4.https://electrosome.com/push-button-switch-atmega32-microcontroller-atmel-studio/
5.https://www.instructables.com/AVR-Microcontroller-Toggle-LEDs-Using-a-Push-Butto/

# 4 W's and 1 H's

WHO : the person
WHAT : the button and temperature sensor
WHERE : serial peripheral and oscilloscope
WHEN : when both the sensors are ON
HOW : by reading the ADC temperature values and display it

# HIGH level requirements
1.person should be seated
2.heater sensor should be on

# LOW level requirements
1.ADC values shouls be read 
2.ADC to be converted to PWM
/**
 * @file act1.h
 * @author PAVAN KULKARNI (pavansk172@gmail.com.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY4_H_INCLUDED
#define ACTIVITY4_H_INCLUDED



#define F_CPU 16000000UL 	//Clock is set to 16 MHz 

#include<avr/io.h>
#include <util/delay.h>
#include <stdint.h>

/**
 * @brief Function to initialize the USART communication
 * @param[in] unsigned integer to set the baud rate to 9600
 * 
 */
void InitUSART(uint16_t);

/**
 * @brief Function to read the character from UDR register
 * @return Returning the character that is stored in UDR register
 * 
 */
char USARTRead();

/**
 * @brief Function to write the character to the USART buffer
 * @param[in] uint16_t type integer is temperature value which is passed as input value
 * 
 */
void USARTWrite(uint16_t);

#endif 

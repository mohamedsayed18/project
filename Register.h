/*
 * Register.h
 *
 *  Created on: Sep 10, 2018
 *      Author: sheded
 */

#ifndef REGISTER_H_
#define REGISTER_H_

#define Reg_DDRA    (*(volatile u8*)0x3A)
#define Reg_PORTA   (*(volatile u8*)0x3B)
#define Reg_PINA    (*(volatile u8*)0x39)

#define Reg_DDRB    (*(volatile u8*)0x37)
#define Reg_PORTB   (*(volatile u8*)0x38)
#define Reg_PINB    (*(volatile u8*)0x36)

#define Reg_DDRC    (*(volatile u8*)0x34)
#define Reg_PORTC   (*(volatile u8*)0x35)
#define Reg_PINC    (*(volatile u8*)0x33)

#define Reg_DDRD    (*(volatile u8*)0x31)
#define Reg_PORTD   (*(volatile u8*)0x32)
#define Reg_PIND    (*(volatile u8*)0x30)

// adress interput
#define Reg_MCUCSR    (*(volatile u8*)0x54)
#define Reg_MCUCR    (*(volatile u8*)0x55)
#define Reg_GICR    (*(volatile u8*)0x5B)
#define Reg_GIFR    (*(volatile u8*)0x5A)

//SREG
#define Reg_SREG    (*(volatile u8*)0x5F)

//WDTCR
#define Reg_WDTCR  (*(volatile u8*)0x41) 




//UART_Registers

#define Reg_UCSRA  (*(volatile u8*)0x2B) 
#define Reg_UCSRB  (*(volatile u8*)0x2A) 
#define Reg_UBRRL  (*(volatile u8*)0x29) 
#define Reg_UBRRH  (*(volatile u8*)0x40) 
#define Reg_UCSRC  (*(volatile u8*)0x40) 
#define Reg_UDR  (*(volatile u8*)0x2C)







#endif /* REGISTER_H_ */

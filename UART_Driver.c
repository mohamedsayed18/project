/*
 * UART_Driver.c
 *
 *  Created on: Oct 20, 2018
 *      Author: Amr sheded
 */
#include"STD_TYPES.h"
#include"Register.h"

void UART_vidInit(void)
{
	Reg_UBRRL=77;
	Reg_UBRRH=0;
	Reg_UCSRC=0b10000110;
	Reg_UCSRB=0b00011000;

}

void UART_vidSendData(u8 Data)
{
	while(((Reg_UCSRA)&(1<<5))==0);
     Reg_UDR=Data;
}

u8 UART_u8ReciveData(void)
{
u8 retval;
while(((Reg_UCSRA)&(1<<7))==0);

	retval=Reg_UDR;
	return retval;

}

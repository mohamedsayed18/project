/*
 * DIO.c
 *
 *  Created on: Sep 9, 2018
 *      Author: sheded
 */
#include"STD_TYPES.h"
#include"BIT_MATH.h"
#include"Register.h"
#include "DIO.h"
void DIO_SetPinDirection(u8 PortNumber, u8 PinNumber, u8 Direction)
{
	if(PortNumber==MY_PORTA)                                                      //DDRA
	{
		switch(Direction)
		{
		case INPUT: CLR_BIT(Reg_DDRA,PinNumber); break;
		case OUTPUT:SET_BIT(Reg_DDRA,PinNumber); break;
		}

	}
	else if(PortNumber==MY_PORTB)                                                 //DDRB
	{
		switch(Direction)
		{
		case INPUT: CLR_BIT(Reg_DDRB,PinNumber); break;
		case OUTPUT:SET_BIT(Reg_DDRB,PinNumber); break;
		}

	}
	else if(PortNumber==MY_PORTC)                                                  //DDRC
	{
		switch(Direction)
		{
		case INPUT: CLR_BIT(Reg_DDRC,PinNumber); break;
		case OUTPUT:SET_BIT(Reg_DDRC,PinNumber); break;
		}

	}
	else if(PortNumber==MY_PORTD)                                                   //DDRD
	{
		switch(Direction)
		{
		case INPUT: CLR_BIT(Reg_DDRD,PinNumber); break;
		case OUTPUT:SET_BIT(Reg_DDRD,PinNumber); break;
		}

	}

}


void DIO_SetPinValue(u8 PortNumber,u8 PinNumber,u8 PinValue)
{
	if(PortNumber==MY_PORTA)                                                         //PORTA
		{
			switch(PinValue)
			{
			case LOW: CLR_BIT(Reg_PORTA,PinNumber); break;
			case HIGH:SET_BIT(Reg_PORTA,PinNumber); break;
			}

		}
		else if(PortNumber==MY_PORTB)                                                 //PORTB
		{
			switch(PinValue)
			{
			case LOW: CLR_BIT(Reg_PORTB,PinNumber); break;
			case HIGH:SET_BIT(Reg_PORTB,PinNumber); break;
			}

		}
		else if(PortNumber==MY_PORTC)                                                 //PORTC
		{
			switch(PinValue)
			{
			case LOW: CLR_BIT(Reg_PORTC,PinNumber); break;
			case HIGH:SET_BIT(Reg_PORTC,PinNumber); break;
			}

		}
		else if(PortNumber==MY_PORTD)                                                 //PORTD
		{
			switch(PinValue)
			{
			case LOW: CLR_BIT(Reg_PORTD,PinNumber); break;
			case HIGH:SET_BIT(Reg_PORTD,PinNumber); break;
			}

		}
}

u8 DIO_GetPinValue(u8 PortNumber,u8 PinNumber)
{
	u8 retresult;
	switch(PortNumber)
	{
	case MY_PORTA: retresult=GET_BIT(Reg_PINA,PinNumber); break;
	case MY_PORTB: retresult=GET_BIT(Reg_PINB,PinNumber); break;
	case MY_PORTC: retresult=GET_BIT(Reg_PINC,PinNumber); break;
	case MY_PORTD: retresult=GET_BIT(Reg_PIND,PinNumber); break;
	}
return retresult ;
}

void DIO_SetPortDirection(u8 PortNumber,u8 PortDirection)
{
	if(PortDirection==INPUT)
	{
		switch(PortNumber)
		{
		case MY_PORTA:  Reg_DDRA=0x00;  break;
		case MY_PORTB:  Reg_DDRB=0x00;  break;
		case MY_PORTC:  Reg_DDRC=0x00;  break;
		case MY_PORTD:  Reg_DDRD=0x00;  break;
		}
	}
	else if(PortDirection==OUTPUT)
	{
		switch(PortNumber)
		{
		case MY_PORTA:  Reg_DDRA=0xff;  break;
		case MY_PORTB:  Reg_DDRB=0xff;  break;
		case MY_PORTC:  Reg_DDRC=0xff;  break;
		case MY_PORTD:  Reg_DDRD=0xff;  break;
		}
	}
}

void DIO_SetPortValue (u8 PortNumber, u8 PortValue)
{
	if(PortValue==LOW)
		{
			switch(PortNumber)
			{
			case MY_PORTA: Reg_PORTA=0x00;  break;
			case MY_PORTB: Reg_PORTB=0x00;  break;
			case MY_PORTC: Reg_PORTC=0x00;  break;
			case MY_PORTD: Reg_PORTD=0x00;  break;
			}
		}
	else if(PortValue==HIGH)
			{
			switch(PortNumber)
			{
			case MY_PORTA:  Reg_PORTA=0xff;  break;
			case MY_PORTB:  Reg_PORTB=0xff;  break;
			case MY_PORTC:  Reg_PORTC=0xff;  break;
			case MY_PORTD:  Reg_PORTD=0xff;  break;
				}
			}
}


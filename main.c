/*
 * main.c
 *
 *  Created on: Dec 14, 2018
 *      Author: Amr sheded
 */

#include"STD_TYPES.h"
#include"DIO.h"
#include"UART.h"
int main(void)
{
	u8 name[10];
	u8 pass[4];
	u8 i=0;
	u8 j=0;
	DIO_SetPinDirection(MY_PORTD,PIN0,INPUT);
	DIO_SetPinDirection(MY_PORTD,PIN1,OUTPUT);
	DIO_SetPinDirection(MY_PORTA,PIN0,OUTPUT);
	DIO_SetPinDirection(MY_PORTA,PIN1,OUTPUT);

	UART_vidInit();
	while(1)
  {
		while(i<10)
	   {
		name[i]=UART_u8ReciveData();
		i++;

		if((name[0]=='A')&&(name[1]=='m')&&(name[2]=='r'))
		        {
					i=10;
		        }

        if((name[0]=='j')&&(name[1]=='o')&&(name[2]=='o'))
		        {
					i=10;
		        }

        if((name[0]=='K')&&(name[1]=='a')&&(name[2]=='r')&&(name[3]=='e')&&(name[4]=='m'))
		        {
        	        i=10;
		        }

        if((name[0]=='A')&&(name[1]=='h')&&(name[2]=='m')&&(name[3]=='e')&&(name[4]=='d'))
        	   {
          	        i=10;
        	   }

        if((name[0]=='M')&&(name[1]=='o')&&(name[2]=='h')&&(name[3]=='a')&&(name[4]=='m')&&(name[5]=='e')&&(name[6]=='d'))
               {
                    i=10;
               }

	   }

		if((name[0]=='A')&&(name[1]=='m')&&(name[2]=='r'))
		{
			while(j<=2)
			{
				i=0;
						while(i<4)
								{
								pass[i]=UART_u8ReciveData();
								i++;
								}

						if((pass[0]=='0')&&(pass[1]=='0')&&(pass[2]=='0')&&(pass[3]=='0'))
						{
								DIO_SetPinValue(MY_PORTA,PIN0,HIGH);
								return 0;
						}

						if(j==2)
						{
							    DIO_SetPinValue(MY_PORTA,PIN1,HIGH);
						}
				j++;
			}
		}

		if((name[0]=='j')&&(name[1]=='o')&&(name[2]=='o'))
		{
			while(j<=2)
			{
					i=0;
						while(i<4)
								{
								pass[i]=UART_u8ReciveData();
								i++;
								}

						if((pass[0]=='1')&&(pass[1]=='1')&&(pass[2]=='1')&&(pass[3]=='1'))
						{
								DIO_SetPinValue(MY_PORTA,PIN0,HIGH);
								return 0;
						}

						if(j==2)
						{
							    DIO_SetPinValue(MY_PORTA,PIN1,HIGH);
							    return 0;
						}
					j++;
				}
		}

		 if((name[0]=='K')&&(name[1]=='a')&&(name[2]=='r')&&(name[3]=='e')&&(name[4]=='m'))
		 {
			 while(j<=2)
			 {
			 		i=0;
			 			while(i<4)
			 					{
			 					pass[i]=UART_u8ReciveData();
			 					i++;
			 					}

			 			if((pass[0]=='2')&&(pass[1]=='2')&&(pass[2]=='2')&&(pass[3]=='2'))
			 			{
			 					DIO_SetPinValue(MY_PORTA,PIN0,HIGH);
			 					return 0;
			 			}

			 			if(j==2)
			 			{
			 				    DIO_SetPinValue(MY_PORTA,PIN1,HIGH);
			 				   return 0;
			 			}
			 		j++;
			 	}
		 }

		 if((name[0]=='A')&&(name[1]=='h')&&(name[2]=='m')&&(name[3]=='e')&&(name[4]=='d'))
		 {
			 while(j<=2)
			 {
			 		i=0;
			 			while(i<4)
			 					{
			 					pass[i]=UART_u8ReciveData();
			 					i++;
			 					}

			 			if((pass[0]=='3')&&(pass[1]=='3')&&(pass[2]=='3')&&(pass[3]=='3'))
			 			{
			 					DIO_SetPinValue(MY_PORTA,PIN0,HIGH);
			 					return 0;
			 			}

			 			if(j==2)
			 			{
			 				    DIO_SetPinValue(MY_PORTA,PIN1,HIGH);
			 				   return 0;
			 			}
			 		j++;
		   	}
		 }

		 if((name[0]=='M')&&(name[1]=='o')&&(name[2]=='h')&&(name[3]=='a')&&(name[4]=='m')&&(name[5]=='e')&&(name[6]=='d'))
		 {
			 while(j<=2)
			 {
			 			i=0;
			 			while(i<4)
			 					{
			 					pass[i]=UART_u8ReciveData();
			 					i++;
			 					}

			 			if((pass[0]=='4')&&(pass[1]=='4')&&(pass[2]=='4')&&(pass[3]=='4'))
			 			{
			 					DIO_SetPinValue(MY_PORTA,PIN0,HIGH);
			 					return 0;
			 			}

			 			if(j==2)
			 			{
			 				    DIO_SetPinValue(MY_PORTA,PIN1,HIGH);
			 				   return 0;
			 			}
			 		j++;
			 }
		 }

	}
}

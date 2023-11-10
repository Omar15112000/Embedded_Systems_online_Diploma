/*
 * lab2.c
 *
 *  Created on: Oct 4, 2023
 *      Author: hp
 */

typedef volatile unsigned int vuint32_t;
#include <stdint.h>
//register address
#define RCC_BASE        0x40021000
#define GPIO_BASE       0X40010800
#define RCC_APB2ENR     *(volatile uint32_t *)(RCC_BASE   + 0X18)
#define GPIO_CRH        *(volatile uint32_t *)(GPIO_BASE  + 0X04)
#define GPIO_ODR        *(volatile uint32_t *)(GPIO_BASE  + 0X0C)



int main(void)
{
	int i ;
	RCC_APB2ENR |= 1<<2;
	GPIO_CRH    &= 0XFF0FFFFF;
	GPIO_CRH    |= 0X00200000;
	while(1)
	{
	  GPIO_ODR |= 1<<13;
	  for ( i = 0; i < 10000 ; i++);
	  GPIO_ODR &= ~ (1<<13);
	  for ( i = 0; i < 10000 ; i++);
    }
	return 0;
}

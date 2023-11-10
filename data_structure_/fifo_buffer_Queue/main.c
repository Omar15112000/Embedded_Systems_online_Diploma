/*
 * main.c
 *
 *  Created on: Nov 7, 2023
 *      Author: hp
 */
#include"fifo.h"

void main(){
	int i ,temp=0;
	fifo_buf_ty fifo_uart;
	if (fifo_init(&fifo_uart , uart_buffer ,5) == fifo_no_error )

		printf("fifo_init ---done \n");

	for ( i = 0 ; i<7 ; i++){

				printf ("fifo_enqueue : %x \n", i);
			if (fifo_enqueue(&fifo_uart ,&i) == fifo_no_error )
				printf("\t fifo_enqueue ---done \n");
			else
				printf("\t fifo_enqueue ---error \n");
		}
	fifo_print(&fifo_uart);
	if (fifo_dequeue(&fifo_uart , &temp) == fifo_no_error )
		printf ("fifo_dequeue : %x \n", temp);
	if (fifo_dequeue(&fifo_uart , &temp) == fifo_no_error )
			printf ("fifo_dequeue : %x \n", temp);
	fifo_print(&fifo_uart);
}


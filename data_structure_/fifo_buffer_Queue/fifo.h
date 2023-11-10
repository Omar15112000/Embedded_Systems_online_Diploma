/*
 * fifo.h
 *
 *  Created on: Nov 7, 2023
 *      Author: hp
 */


#ifndef fIFO_H_
#define fIFO_H_
//Type definitions
#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

#define element_type uint8_t

#define width1 5
element_type uart_buffer[width1];

typedef struct{
	unsigned int length;
	element_type* tail;
	element_type* base;
	element_type* head;
	unsigned int count ;
}fifo_buf_ty;

typedef enum {
	fifo_no_error,
	fifo_full,
	fifo_empty,
	fifo_null
}fifo_status;

//APIs
fifo_status fifo_init(fifo_buf_ty* fifo_buf ,element_type* buf , uint32_t length);
fifo_status fifo_enqueue(fifo_buf_ty* fifo_buf ,element_type* enq_data);
fifo_status fifo_dequeue(fifo_buf_ty* fifo_buf ,element_type* deq_data);
fifo_status fifo_is_full(fifo_buf_ty* fifo_buf);
void fifo_print(fifo_buf_ty* fifo_buf);


#endif /* LIFO_H_ */

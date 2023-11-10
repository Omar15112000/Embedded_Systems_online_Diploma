/*
 * lifo.h
 *
 *  Created on: Nov 7, 2023
 *      Author: hp
 */

#ifndef LIFO_H_
#define LIFO_H_
//Type definitions
typedef struct{
	unsigned int length;
	unsigned int count;
	unsigned int* base;
	unsigned int* head;
}lifo_buf_ty;

typedef enum {
	lifo_no_error,
	lifo_full,
	lifo_embty,
	lifo_null
}lifo_status;

//APIs
lifo_status lifo_add_item(lifo_buf_ty* lifo_buf ,unsigned int item);
lifo_status lifo_get_item(lifo_buf_ty* lifo_buf ,unsigned int* item);
lifo_status lifo_init(lifo_buf_ty* lifo_buf ,unsigned int* buf , unsigned int length);

#endif /* LIFO_H_ */

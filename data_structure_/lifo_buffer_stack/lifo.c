/*
 * lifo.c
 *
 *  Created on: Nov 7, 2023
 *      Author: hp
 */
#include"lifo.h"
#include <stdlib.h>
#include <stdio.h>


lifo_status lifo_add_item(lifo_buf_ty* lifo_buf ,unsigned int item){
	if(!lifo_buf->base || !lifo_buf->head)
		return lifo_null;
	if(lifo_buf->count == lifo_buf->length)
		return lifo_full;
	*(lifo_buf->head) = item;
	lifo_buf->head++ ;
	lifo_buf->count++ ;
	return lifo_no_error;
}

lifo_status lifo_get_item(lifo_buf_ty* lifo_buf ,unsigned int* item){
	if(!lifo_buf->base || !lifo_buf->head)
			return lifo_null;
		if(lifo_buf->count == 0)
			return lifo_embty;
		lifo_buf->head-- ;
		*item=*(lifo_buf->head) ;
		return lifo_no_error;
}


lifo_status lifo_init(lifo_buf_ty* lifo_buf ,unsigned int* buf , unsigned int length){
	if (buf == NULL)
		return lifo_null ;

	lifo_buf->base=buf;
	lifo_buf->head=buf;
	lifo_buf->length=length;
	lifo_buf->count=0;
	return lifo_no_error;


}


/*
 * fifo.c
 *
 *  Created on: Nov 7, 2023
 *      Author: hp
 */


#include"fifo.h"
fifo_status fifo_init(fifo_buf_ty* fifo_buf ,element_type* buf , uint32_t length){
	if(buf == NULL)
		return fifo_null;

	fifo_buf->base=buf;
	fifo_buf->head=buf;
	fifo_buf->tail=buf;
	fifo_buf->length=length;
	fifo_buf->count=0;
	return fifo_no_error;
}



fifo_status fifo_enqueue(fifo_buf_ty* fifo_buf ,element_type* enq_data){
	if(!fifo_buf->base || !fifo_buf->head || !fifo_buf->tail )
		return fifo_null ;
	if(fifo_is_full (fifo_buf) == fifo_full)
		return fifo_full ;
	*(fifo_buf->head) = *enq_data;
	fifo_buf->count++;

	if(fifo_buf->head ==(fifo_buf->base + (fifo_buf->length * sizeof(element_type))))
			fifo_buf->head = fifo_buf->base ;
	else
		fifo_buf->head++;
	return fifo_no_error;

}



fifo_status fifo_dequeue(fifo_buf_ty* fifo_buf ,element_type* deq_data){
	if(!fifo_buf->base || !fifo_buf->head || !fifo_buf->tail )
			return fifo_null ;
		if(fifo_buf->count == 0)
			return fifo_empty ;
		*deq_data=*fifo_buf->tail;
		fifo_buf->count--;
		if(fifo_buf->tail ==(fifo_buf->tail + (fifo_buf->length * sizeof(element_type))))
					fifo_buf->tail = fifo_buf->base ;
			else
				fifo_buf->tail++;
			return fifo_no_error;
}

fifo_status fifo_is_full(fifo_buf_ty* fifo_buf){

	if(!fifo_buf->base || !fifo_buf->head || !fifo_buf->tail )
			return fifo_null ;
	if(fifo_buf->count == fifo_buf->length)
		return fifo_full;
	return fifo_no_error;
}

void fifo_print(fifo_buf_ty* fifo_buf){
	element_type* temp ;
	int i;
		if(fifo_buf->count == 0){
			printf("fifo is empty\n") ;

		}else{
			temp =fifo_buf->tail;
			printf("===fifo  print===\n") ;
			for(i=0 ; i< fifo_buf->count ; i++ ){
				printf("\t %x \n" , *temp);
				temp++;
			}
			printf("===================\n");
		}
}



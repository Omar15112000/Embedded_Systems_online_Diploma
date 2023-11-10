/*
 * complex.c
 *
 *  Created on: Aug 15, 2023
 *      Author: hp
 */
#include<stdio.h>

struct scomplex{
	float m_real;
	float m_imaginary;
};

struct scomplex read(struct scomplex a){
	static int count =1;
	printf("Enter number %d real and imaginary  respectively :", count);
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&a.m_real , &a.m_imaginary);
	count++;
	return a;
}
struct scomplex sum(struct scomplex a,struct scomplex b){
	struct scomplex c;
	c.m_real = a.m_real +b.m_real ;
	c.m_imaginary = a.m_imaginary + b.m_imaginary;
	return c;
}
void print(struct scomplex c){

	printf("the sum of the two  complex is : %f + %f i",c.m_real,c.m_imaginary);


}
int main (){
	struct scomplex x,y,z;
	x=read(x);
	y=read(y);
	z=sum(x,y);
	print(z);
}


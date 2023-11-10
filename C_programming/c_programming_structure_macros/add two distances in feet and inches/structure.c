/*
 * structure.c
 *
 *  Created on: Aug 15, 2023
 *      Author: hp
 */
#include<stdio.h>

struct distance {
	float m_inch;
	float m_feet;

};

struct distance read(){
	static int count=1;
	struct distance c;
	printf("enter distance number %d in inch: ",count);
	fflush(stdin);fflush(stdout);
	scanf("%f",&c.m_inch);
	printf("enter distance number %d in feet: ",count);
	fflush(stdin);fflush(stdout);
	scanf("%f",&c.m_feet);
	count++;
	return c;

}
struct distance sum(struct distance a,struct distance b){
	struct distance c;
	c.m_inch = a.m_inch + b.m_inch;
	c.m_feet = a.m_feet + b.m_feet;
	return c;

}

int main() {
	struct distance x,y,z;
	x=read("x");
	y=read("y");
	z=sum(x,y);
	printf("sum of distances = %f in inch and =%f in feet",z.m_inch,z.m_feet);
}



/*
 * H5_ex3.c
 *
 *  Created on: Apr 2, 2021
 *      Author: mkabo
 */

#include<stdio.h>
	struct real {
		float real;
		float imag;
	} numb1,numb2,sum;
struct real s (struct real , struct real);
int main(){


	printf("enter 1st numb :\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f",&numb1.real,&numb1.imag);
	printf("enter 2nd numb :\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f",&numb2.real,&numb2.imag);
	sum = s (numb1 , numb2);

	printf("sum = %0.1f + %0.1f i\n",sum.real,sum.imag);
}
struct real s (struct real m1 , struct real m2){
	struct real new ;
	new.real = numb1.real + numb2.real;
		new.imag = numb1.imag + numb2.imag;
	return new;
}

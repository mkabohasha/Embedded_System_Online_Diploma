/*
 * struct.c
 *
 *  Created on: Apr 2, 2021
 *      Author: mkabo
 */


#include<stdio.h>

int main(){

	struct apt {
		int mbedroom;
		int bed;
		float lenght;
	};
	struct apt myplace = {10 ,15 ,12.3};
	printf("mbedroom=%d\n", myplace.mbedroom);
	printf("mbedroom=%d\n", myplace.bed);
	printf("mbedroom=%0.2f\n", myplace.lenght);
}

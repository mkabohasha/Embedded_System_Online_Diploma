/*
 * H5_ex5.c
 *
 *  Created on: Apr 3, 2021
 *      Author: mkabo
 */

#include<stdio.h>
#define pi 3.1415
#define area(r) (pi*(r)*(r))
int rad;
float area;
int main(){
	printf("enter rad:");
		fflush(stdin);
		fflush(stdout);
	scanf("%d",&rad);
	area= area(rad);
	printf("%0.2f",area);
}

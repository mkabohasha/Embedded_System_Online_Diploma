/*
 * H5_E1.c
 *
 *  Created on: Apr 2, 2021
 *      Author: mkabo
 */

#include<stdio.h>

int main(){
	struct student {
		char name;
		int roll;
		float mark;
	};
	struct student s;
	printf("enter name:\n");
			fflush(stdin);
			fflush(stdout);
		scanf("%c", &s.name);
	printf("enter roll:\n");
			fflush(stdin);
			fflush(stdout);
		scanf("%d", &s.roll);
	printf("enter mark:\n");
			fflush(stdin);
			fflush(stdout);
		scanf("%f", &s.mark);
	printf("name:%c  roll:%d  mark:%f",s.name,s.roll,s.mark);
}

/*
 * H5_e4.c
 *
 *  Created on: Apr 2, 2021
 *      Author: mkabo
 */

#include<stdio.h>
	struct student {
		char name[50];
		int roll;
		float mark;
	}arr[9];
	int i,x;
void getData();
void displayData();

int main(){


				 getData();
					printf("you entered data for (10) student wait for displaying data");
					printf("..");
					printf(".");
					printf(".\n");
				for(x=0;x<=9;x++)
					{
						displayData();

					}
}
void getData(){

	for(i=0;i<=9;i++)
			{
			printf("enter data for student(%d):\n",i);
			fflush(stdin);
			fflush(stdout);
			scanf("%s %d %f",&arr[i].name,&arr[i].roll,&arr[i].mark);
			}
}
void displayData(){
	printf("stud(%d)name:%s ,roll:%d ,mark:%f\n",x,arr[x].name,arr[x].roll,arr[x].mark);
}

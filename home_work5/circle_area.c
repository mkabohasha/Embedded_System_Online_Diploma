/*
 * main.c
 *
 *  Created on: Mar 11, 2021
 *      Author: Mohamed Khaled (EngMo)
 */
#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	float rad = 0 , pi = 3.14 , a=0 , c=0;
	char s ;
	printf("Kindly inter your rad :");
		fflush(stdin);
		fflush(stdout);
	scanf("%f",&rad);
	printf("Kindly chose \'a\' for print area & \'c\' for print circ:");
	 	fflush(stdin);
		fflush(stdout);
    scanf("%c",&s);
    if(s == 'a')
    {
    	printf("a=%f",a=pi*rad*rad);
    }
    else if (s =='c')
    {
    	printf("c=%f",c=pi*2*rad);
    }
    else
    	printf("wrong chose!!");
}




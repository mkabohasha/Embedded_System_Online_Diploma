/*
 * git_largest.c
 *
 *  Created on: Mar 11, 2021
 *      Author: Mohamed Khaled (EngMo)
 */
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a=0,b=0,c=0;
	printf("Kindly Enter 3 number:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
		{
			if(a>c)
				printf("%d is the largest",a);
			else printf("%d is the largest",c);
		}
	else if(b>c)
	{
		printf("%d is the largest",b);
	}
	else printf("%d is the largest",c);

}



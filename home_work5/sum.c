/*
 * sum.c
 *
 *  Created on: Mar 12, 2021
 *      Author: mkabo
 */
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int sum=0;
	for(int i=1;i<=99;i++)
	{
		sum +=i;
	}
	printf("sum is %d",sum);
}


/*
 * avg_degree.c
 *
 *  Created on: Mar 12, 2021
 *      Author: mkabo
 */
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i=0,sum=0;
	int arr[7];

		while(i<=6)
	{
		printf("enter digit numb %d degree:\n",i);
				fflush(stdin);
				fflush(stdout);
		scanf("%d",&arr[i]);
		sum = sum + arr[i];
		i++;
	}
	printf("sum is :%d",sum);
}


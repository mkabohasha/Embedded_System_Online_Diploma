/*
 * H5_ex2.c
 *
 *  Created on: Apr 2, 2021
 *      Author: mkabo
 */
#include<stdio.h>
int main(){
	struct Dist{
		int feet;
		float inch;
	};
	struct Dist arr[2];
	printf("Enter info for D1:\n");
		printf("Distance 1 in feet:\n");
			fflush(stdin);
			fflush(stdout);
			scanf("%d",&arr[0].feet);
		printf("Distance 1 in inch:\n");
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&arr[0].inch);
	printf("Enter info for D2:\n");
		printf("Distance 2 in feet:\n");
					fflush(stdin);
					fflush(stdout);
					scanf("%d",&arr[1].feet);
				printf("Distance 2 in inch:\n");
					fflush(stdin);
					fflush(stdout);
					scanf("%f",&arr[1].inch);
	arr[2].feet=arr[0].feet + arr[1].feet;
	arr[2].inch=arr[0].inch + arr[1].inch;
	printf("\n sum of D1 + D2 is : %d feet and %f inch",arr[2].feet,arr[2].inch);
}


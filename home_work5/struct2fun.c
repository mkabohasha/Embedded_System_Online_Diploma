/*
 * struct2fun.c
 *
 *  Created on: Apr 2, 2021
 *      Author: mkabo
 */

#include<stdio.h>
struct date {
		int Bday;
		int Bmonth;
		int Byear;
	};
struct date oldage (struct date);

int main(){

	struct date mybirth;

	printf("Kinld enter your Bday,month,year?");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d %d",&mybirth.Bday ,&mybirth.Bmonth ,&mybirth.Byear);
	mybirth = oldage(mybirth);
	printf("your age after 10yrs from your bithday is: %d day , %d month and %d yr",mybirth.Bday ,mybirth.Bmonth ,mybirth.Byear);


	}
struct date oldage (struct date target){
	target.Byear += 10;
		return target;
}


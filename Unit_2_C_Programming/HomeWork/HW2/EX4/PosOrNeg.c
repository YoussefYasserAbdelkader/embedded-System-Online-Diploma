/*
 * PosOrNeg.c
 *
 *  Created on: Jun 30, 2024
 *      Author: yy656
 */


#include <stdlib.h>
#include <stdio.h>

int main()
{
	float num;
	printf("Enter a number: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f",&num);
	if (num>0.0)
		printf("%f is positive",num);
		else if(num<0.0)
		printf("%f is negative",num);
		else
			printf("You entered zero.");
}

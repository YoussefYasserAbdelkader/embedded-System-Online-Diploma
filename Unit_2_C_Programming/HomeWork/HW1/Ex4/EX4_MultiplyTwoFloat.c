/*
 * EX4_MultiplyTwoFloat.c
 *
 *  Created on: Jun 29, 2024
 *      Author: yy656
 */

#include <stdlib.h>
#include <stdio.h>
int main()
{
	float num1,num2;
	printf("Enter two numbers:");
	fflush(stdout);
	fflush(stdin);
	scanf("%f\n%f",&num1,&num2);
	printf("Product: %f",num1*num2);
}

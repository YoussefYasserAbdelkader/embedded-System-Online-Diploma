/*
 * EX3_LargestNo.c
 *
 *  Created on: Jun 30, 2024
 *      Author: yy656
 */

#include <stdlib.h>
#include <stdio.h>

int main()
{
	float num1,num2,num3;
	printf("Enter three numbers: ");
	fflush(stdout);

	scanf("%f %f %f",&num1,&num2,&num3);
	if(num1>num2)
	{
		if(num1>num3)
			printf("Largest number = %f",num1);
		else
			printf("Largest number = %f",num3);
	}
	else
		{
		if(num2>num3)
			printf("Largest number = %f",num2);
		else
			printf("Largest number = %f",num3);
		}
}

/*
 * Q2.c
 *
 *  Created on: Sep 21, 2024
 *      Author: yy656
 */

#include <stdio.h>
#include <math.h>
float SquareRoot(int num)
{
	return sqrt(num);
}

int main()
{
		int num;
		printf("Enter the number:");
		fflush(stdin);
		fflush(stdout);
		scanf("%d",&num);
		printf("the square root is %.3f",SquareRoot(num));
}

/*
 * FactorialUsingRecursion.c
 *
 *  Created on: Jul 30, 2024
 *      Author: yy656
 */


#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
unsigned int Factorial(unsigned int x);

int main()
{
	unsigned int num;
	printf("Enter an positive integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num);
	printf("Factorial of %d = %d",num,Factorial(num));

}

unsigned int Factorial(unsigned int x)
{
	if(x==1)
		return 1;
	else
	return(x*Factorial(x-1));

}

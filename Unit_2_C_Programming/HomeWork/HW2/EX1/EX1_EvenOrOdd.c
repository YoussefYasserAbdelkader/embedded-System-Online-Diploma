/*
 * EX1_EvenOrOdd.c
 *
 *  Created on: Jun 30, 2024
 *      Author: yy656
 */


#include <stdlib.h>
#include<stdio.h>

int main()
{
	int num;
	printf("Enter an integer you want to check: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&num);
	(num%2==0)? printf("%d is even",num): printf("%d is odd",num);

}

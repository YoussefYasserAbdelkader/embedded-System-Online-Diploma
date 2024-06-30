/*
 * SumNaturalNumbers.c
 *
 *  Created on: Jun 30, 2024
 *      Author: yy656
 */

#include <stdlib.h>
#include <stdio.h>

int main()
{
	int num,sum;
	printf("Enter an integer: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&num);
	while(num>0)
	{
		sum+=num;
		num--;
	}
	printf("%d",sum);
}

/*
 * PrimeNumbers.c
 *
 *  Created on: Jul 30, 2024
 *      Author: yy656
 */

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
bool IsPrime(int x);

int main()
{
	int num1,num2;
	printf("Enter two numbers(intervals): ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d\n%d",&num1,&num2);
	printf("Prime numbers between %d and %d are: ",num1,num2);
	for(int i=num1+1;i<num2;i++)
	{
		if(IsPrime(i))
			printf("%d ",i);
	}

}

bool IsPrime(int x)
{
	 if (x <= 1) {
	        return false;
	    }
	    for (int i = 2; i * i <= x; i++) {
	        if (x % i == 0) {
	            return false;
	        }
	    }
	    return true;
	}

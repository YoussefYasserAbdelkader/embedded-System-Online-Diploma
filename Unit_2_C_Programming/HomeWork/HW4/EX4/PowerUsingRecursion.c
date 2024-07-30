/*
 * PowerUsingRecursion.c
 *
 *  Created on: Jul 30, 2024
 *      Author: yy656
 */
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
int CalcPower(int num1,int num2);
int main()
{
	int base;
	unsigned int power;
	printf("Enter base number: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &base);

	printf("Enter power number(positive integer): ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &power);
	printf("%d^%d = %d\n", base, power, CalcPower(base, power));


}


int CalcPower(int num1,int num2)
{
	if(num2==0)
		return 1;
	else
			return (num1 * CalcPower(num1, num2 - 1));
}

/*
 * Q4.c
 *
 *  Created on: Sep 21, 2024
 *      Author: yy656
 */

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void Reverse_Number(char num[],int Length)
{
	printf("Reversed Number is ");
	for(int i=Length-1;i>=0;i--)
	{
		printf("%c",num[i]);
	}
}

int main()
{
	char num[100];
	int Length;
	printf("Enter a number : ");
	fflush(stdin);
	fflush(stdout);
	gets(num);
	Length=strlen(num);
	Reverse_Number(num,Length);

}

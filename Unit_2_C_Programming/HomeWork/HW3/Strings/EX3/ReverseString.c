/*
 * ReverseString.c
 *
 *  Created on: Jul 6, 2024
 *      Author: yy656
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
	char string[100];
	char temp;
	printf("Enter a string: ");
	fflush(stdin);
	fflush(stdout);
	gets(string);


	for (int i = 0; i < strlen(string) / 2; i++)
	{
		temp = string[i];
		string[i] = string[strlen(string) - i - 1];
		string[strlen(string) - i - 1] = temp;
	}

	printf("Reverse string is : %s\n", string);

	return 0;
}

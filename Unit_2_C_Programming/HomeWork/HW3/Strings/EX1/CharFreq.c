/*
 * CharFreq.c
 *
 *  Created on: Jul 5, 2024
 *      Author: yy656
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
	char string[100];
	char ch;
	int counter=0;
	printf("Enter a string: ");
	fflush(stdin);
	fflush(stdout);
	gets(string);
	printf("Enter a character to find frequency: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%c", &ch);
	for(int i=0;i<strlen(string);i++)
	{
		if(string[i]==ch)
			counter++;
	}
	printf("Frequency of %c = %d",ch,counter);
}

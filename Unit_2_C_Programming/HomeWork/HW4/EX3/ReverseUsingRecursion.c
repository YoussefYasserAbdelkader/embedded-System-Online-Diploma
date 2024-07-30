/*
 * ReverseUsingRecursion.c
 *
 *  Created on: Jul 30, 2024
 *      Author: yy656
 */
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
void Reverse_Sentence();
int main()
{
	printf("Enter a sentence: ");
		fflush(stdin);
		fflush(stdout);

		Reverse_Sentence();



}



void Reverse_Sentence(void)
{
	char c;
	scanf("%c", &c);

	{
		Reverse_Sentence();
		printf("%c", c);
	}
}


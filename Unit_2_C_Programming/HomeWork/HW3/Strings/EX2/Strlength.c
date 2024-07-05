/*
 * Strlength.c
 *
 *  Created on: Jul 5, 2024
 *      Author: yy656
 */
#include <stdlib.h>
#include <stdio.h>
int main() {
	char string[100];
	int counter = 0,i=0;
	printf("Enter a string: ");
	fflush(stdin);
	fflush(stdout);
	gets(string);

	while(1)
	{
		if (string[i] == '\0')

			break;
			i++;
			counter++;



}
	printf("Length of string: %d", counter);
}

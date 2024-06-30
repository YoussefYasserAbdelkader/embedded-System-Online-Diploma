/*
 * VowelOrConsonant.c
 *
 *  Created on: Jun 30, 2024
 *      Author: yy656
 */

#include <stdlib.h>
#include <stdio.h>
int main()
{
char c;
printf("Enter an alphabet: ");
fflush(stdout);
fflush(stdin);
scanf("%c",&c);
char x= tolower(c);
if (x=='a' || x=='e' || x=='i'|| x=='o' || x=='u')
	printf("%c is a vowel",c);
else
	printf("%c is a consonant",c);
}

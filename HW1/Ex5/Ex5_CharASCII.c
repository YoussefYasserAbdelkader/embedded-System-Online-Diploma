/*
 * Ex5_CharASCII.c
 *
 *  Created on: Jun 29, 2024
 *      Author: yy656
 */


#include <stdlib.h>
#include <stdio.h>
int main()
{
	char c;
	printf("Enter a character:");
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&c);
	printf("ASCII value of G = %d",(int)c);
}

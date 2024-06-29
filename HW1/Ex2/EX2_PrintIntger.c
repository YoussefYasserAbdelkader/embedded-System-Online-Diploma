/*
 * EX2_PrintIntger.c
 *
 *  Created on: Jun 29, 2024
 *      Author: yy656
 */
#include <stdlib.h>
#include <stdio.h>
int main()
{
	int num;
	printf("Enter an integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &num);
	printf("You entered: %d\n", num);

	return 0;
}

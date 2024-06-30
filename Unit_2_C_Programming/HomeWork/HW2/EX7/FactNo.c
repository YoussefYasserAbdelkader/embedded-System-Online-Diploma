/*
 * FactNo.c
 *
 *  Created on: Jun 30, 2024
 *      Author: yy656
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
	int num, fact=1;
	printf("Enter an integer: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &num);

	if (num < 0)
		printf("Error!!! Factorial of negative numbers doesn't exist.\n\n");
	else if (num == 0)
		printf("Factorial = 1");
	else {
		for (int i = 1; i <= num; ++i) {
			fact *= i;
		}
		printf("Factorial = %d", fact);
	}
}

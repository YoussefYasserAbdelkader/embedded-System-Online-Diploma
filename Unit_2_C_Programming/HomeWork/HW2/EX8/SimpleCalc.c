/*
 * SimpleCalc.c
 *
 *  Created on: Jun 30, 2024
 *      Author: yy656
 */


#include <stdlib.h>
#include <stdio.h>

int main() {
	float a, b, result;
	char op;
	printf("Enter the operator (+,-,*, or /): ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &op);
	printf("Enter the two operands: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f", &a, &b);
	switch (op) {
	case '+':
		result = a + b;
		break;
	case '-':
		result = a - b;
		break;
	case '*':
		result = a * b;
		break;
	case '/':
		result = a / b;
		break;
	default:
		printf("Wrong entry.\n");
		break;
	}
	printf("%f %c %f = %f\n\n", a, op, b, result);

	fflush(stdin);
	fflush(stdout);
}


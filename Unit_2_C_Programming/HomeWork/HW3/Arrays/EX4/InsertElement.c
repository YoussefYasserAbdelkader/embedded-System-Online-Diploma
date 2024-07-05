/*
 * InsertElement.c
 *
 *  Created on: Jul 5, 2024
 *      Author: yy656
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
	int n, location, element;
	int arr[100];
	printf("Enter no of elements : ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);

	}

	printf("Enter the element to be inserted : ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &element);

	printf("Enter the location : ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &location);
	if (location > 0 && location < 100) {

		for (int i = n; i > (location - 1); i--) {
			arr[i] = arr[i - 1];
		}
		arr[location - 1] = element;

		for (int i = 0; i < n + 1; i++) {
			printf("%d\t", arr[i]);

		}
	}
}

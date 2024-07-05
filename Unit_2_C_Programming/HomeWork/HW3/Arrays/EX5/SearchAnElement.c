/*
 * SearchAnElement.c
 *
 *  Created on: Jul 5, 2024
 *      Author: yy656
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
	int n, location=-1, element;
	int arr[100];
	printf("Enter no of elements : ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);

	}

	printf("Enter the element to be searched : ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &element);

	for (int i = 0; i < n; i++) {
		if (arr[i] == element) {
			location = i;
			break;
		}
	}

	if (location == -1)
		printf("Number doesn't exist.\n");
	else
		printf("Number found at the location = %d\n", location + 1);

}

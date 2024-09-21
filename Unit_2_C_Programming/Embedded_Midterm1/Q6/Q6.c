/*
 * Q6.c
 *
 *  Created on: Sep 21, 2024
 *      Author: yy656
 */

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int find_unique(int arr[], int size) {
    int unique = 0;

    for (int i = 0; i < size; i++) {
        unique ^= arr[i];
    }

    return unique;
}

int main() {
    int size, i;


    printf("Enter the size of the array: ");
    fflush(stdout);
    fflush(stdin);
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements: ", size);
    fflush(stdout);
    fflush(stdin);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int unique = find_unique(arr, size);
    printf("The unique number is: %d\n", unique);

    return 0;
}


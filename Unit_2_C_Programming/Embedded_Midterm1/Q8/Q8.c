/*
 * Q8.c
 *
 *  Created on: Sep 21, 2024
 *      Author: yy656
 */


#include <stdio.h>
#include <math.h>
#include <stdbool.h>


void reverse_array(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &size);
    int arr[size];

    printf("Enter %d elements: ", size);
    fflush(stdin);
    fflush(stdout);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    reverse_array(arr, size);

    printf("\nReversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

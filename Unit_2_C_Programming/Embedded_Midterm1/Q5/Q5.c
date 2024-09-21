/*
 * Q5.c
 *
 *  Created on: Sep 21, 2024
 *      Author: yy656
 */

#include <stdio.h>
#include <math.h>
#include <stdbool.h>


int ones_count = 0;

int ones_counter(int bit) {
    if (bit == 1) {
        ones_count++;
    }
    return ones_count;
}

int main(void) {
    int i, bit, num;

    printf("Enter the number: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &num);

    printf("The number in binary: ");
    for (i = 31; i >= 0; i--) {
        bit = (num >> i) & 1;
        printf("%d", bit);
        ones_counter(bit);
    }

    printf("\nThe number of ones in the binary representation of %d is %d", num, ones_count);

    return 0;
}


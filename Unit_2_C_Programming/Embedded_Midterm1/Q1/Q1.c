/*
 * Q1.c
 *
 *  Created on: Sep 21, 2024
 *      Author: yy656
 */


#include <stdio.h>

int sum(int num) {
    int sum = 0;

    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int main() {
    int num;

    printf("Enter a number: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &num);

    printf("Sum of digits of %d: %d\n", num, sum(num));

    return 0;
}

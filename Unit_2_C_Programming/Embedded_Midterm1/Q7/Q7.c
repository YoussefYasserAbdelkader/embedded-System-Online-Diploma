/*
 * Q7.c
 *
 *  Created on: Sep 21, 2024
 *      Author: yy656
 */

#include <stdio.h>
#include <math.h>
#include <stdbool.h>


int sum_recursive(int num) {
    if (num == 1) {
        return 1;
    }
    return num + sum_recursive(num - 1);
}

int main() {
	int num;
    printf("Enter a number :");
	fflush(stdin);
    fflush(stdout);
    scanf("%d",&num);
    printf("The sum of numbers from 1 to %d is: %d\n", num, sum_recursive(num));

    return 0;
}

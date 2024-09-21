/*
 * Q10.c
 *
 *  Created on: Sep 21, 2024
 *      Author: yy656
 */


#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

int count_max_ones_between_zeros(int num) {
    char binary[33]; // Enough to hold 32 bits + null terminator
    int max_count = 0;
    int current_count = 0;

    for (int i = 31; i >= 0; i--) {
        binary[i] = (num & 1) ? '1' : '0';
        num >>= 1;
    }
    binary[32] = '\0';


    for (int i = 0; i < 32; i++) {
        if (binary[i] == '1') {
            current_count++;
        } else {
            if (current_count > max_count) {
                max_count = current_count;
            }
            current_count = 0;
        }
    }


    if (current_count > max_count) {
        max_count = current_count;
    }

    return max_count;
}

int main() {
    int num;
    printf("Enter a number: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &num);

    int result = count_max_ones_between_zeros(num);
    printf("The maximum number of ones between zeros is: %d\n", result);

    return 0;
}

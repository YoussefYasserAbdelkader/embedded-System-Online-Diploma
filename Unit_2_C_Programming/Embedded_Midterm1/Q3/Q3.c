/*
 * Q3.c
 *
 *  Created on: Sep 21, 2024
 *      Author: yy656
 */

#include <stdio.h>
#include <math.h>
#include <stdbool.h>


void print_prime_numbers(int n1, int n2) {
    for (int num = n1; num <= n2; num++) {
        if (num < 1) continue;

        int is_prime = 1;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime) {
            printf("%d ", num);
        }
    }
    printf("\n");
}


int main() {
    int n1, n2;

    printf("Enter two numbers (n1 and n2): ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d %d", &n1, &n2);

    printf("Prime numbers between %d and %d: ", n1, n2);
    print_prime_numbers(n1, n2);

    return 0;
}


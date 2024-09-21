/*
 * Q9.c
 *
 *  Created on: Sep 21, 2024
 *      Author: yy656
 */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>


void reverse_words(char str[]) {
    int length = strlen(str);
    char reversed[length + 1];
    int word_start = length;
    int index = 0;

    for (int i = length; i >= 0; i--) {
        if (str[i] == ' ' || i == 0) {
            if (i == 0) {
                word_start = i;
            } else {
                word_start = i + 1;
            }

            for (int j = word_start; j < length && str[j] != ' '; j++) {
                reversed[index++] = str[j];
            }

            if (i > 0) {
                reversed[index++] = ' ';
            }
        }
    }
    reversed[index] = '\0';

    strcpy(str, reversed);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fflush(stdin);
    fflush(stdout);
    gets(str);
    reverse_words(str);
    printf("Reversed words: %s\n", str);

    return 0;
}


/*This program prints all odd numbers from 1 to 20, skipping even numbers using the continue statement.*/

#include <stdio.h>

int main() {
    int i;

    printf("Odd numbers from 1 to 20 are:\n");

    for (i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            continue;  // Skip the rest of the loop body for even numbers
        }
        printf("%d\n", i);  // Print the odd number
    }

    return 0;
}


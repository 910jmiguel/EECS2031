// Printing integers, floating-point numbers and strings with precisions
#include <stdio.h>

int main(void) {
    puts("Using precision for integers");
    int i = 873;    // initialize int i
    printf("\t%.4d\n\t%.9d\n\n", i, i);
    printf("\t%5.4d\n\t%7.5d\n\n", i, i);
}
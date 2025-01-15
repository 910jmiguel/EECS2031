// Lab 0 Problem 0:

#include <stdio.h>
int main() {
    int num;
    printf("Please enter an integer number: ");
    scanf("%d", &num);

    int db = num * 2;
    int tr = num * 3;

    printf("Hi, you entered %d. Double and triple of %d is %d and %d, respectively.", &num, &db, &tr);

    return 0;
}
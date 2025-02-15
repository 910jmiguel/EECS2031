#include <stdio.h>

int main() {
    // BITWISE OPERATORS = special operators used in bit level programming
    //             
    // & = AND
    // | = OR
    // ^ = XOR
    // << left shift
    // >> right shift

    int x = 6;  // 6 = 00000110
    int y = 12; // 12 = 00001100
    int z = 0;  // 0 = 00000000

    z = x & y; // returns 4 = 00000100
    printf("AND = %d\n", z);

    z = x | y; // returns 14 = 00001110
    printf("OR = %d\n", z);

    z = x ^ y;  // returns 10 = 00001010
    printf("XOR = %d\n", z);

    z = x << 1; // returns 12 = 00001100
    printf("LEFT SHIFT by 1= %d\n", z);

    z = x << 2; // returns 24 = 00011000
    printf("LEFT SHIFT by 2= %d\n", z);

    z = x >> 1; // returns 3 = 00000011
    printf("RIGHT SHIFT by 1= %d\n", z);

    z = x >> 2; // returns 1 = 00000001
    printf("RIGHT SHIFT by 1= %d\n", z);


    return 0;
}
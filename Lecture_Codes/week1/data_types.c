/* Program to print the size of primitive data types in C language
   The sizeof operator is used to determine the size (in bytes) of a data type.
   %lu is used in the printf statement because sizeof returns a value of type size_t, which is an unsigned long type.*/

#include <stdio.h>

int main() {
    printf("Size of char: %lu byte(s)\n", sizeof(char));
    printf("Size of signed char: %lu byte(s)\n", sizeof(signed char));
    printf("Size of unsigned char: %lu byte(s)\n", sizeof(unsigned char));
    printf("*****************************************************\n");
    
    printf("Size of short: %lu byte(s)\n", sizeof(short));
    printf("Size of signed short: %lu byte(s)\n", sizeof(signed short));
    printf("Size of unsigned short: %lu byte(s)\n", sizeof(unsigned short));
    printf("*****************************************************\n");
    
    printf("Size of int: %lu byte(s)\n", sizeof(int));
    printf("Size of signed int: %lu byte(s)\n", sizeof(signed int));
    printf("Size of unsigned int: %lu byte(s)\n", sizeof(unsigned int));
    printf("*****************************************************\n");
    
    printf("Size of long: %lu byte(s)\n", sizeof(long));
    printf("Size of signed long: %lu byte(s)\n", sizeof(signed long));
    printf("Size of unsigned long: %lu byte(s)\n", sizeof(unsigned long));
    printf("*****************************************************\n");
    
    printf("Size of long long: %lu byte(s)\n", sizeof(long long));
    printf("Size of signed long long: %lu byte(s)\n", sizeof(signed long long));
    printf("Size of unsigned long long: %lu byte(s)\n", sizeof(unsigned long long));
    printf("*****************************************************\n");
    
    printf("Size of float: %lu byte(s)\n", sizeof(float));
    printf("Size of double: %lu byte(s)\n", sizeof(double));
    printf("Size of long double: %lu byte(s)\n", sizeof(long double));
    
    return 0;
}


/* To print the ranges of primitive data types in C, use the limits defined in the <limits.h> and <float.h> headers.*/

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    // Integer types
    printf("Ranges of integer types:\n");
    printf("char: %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("unsigned char: 0 to %u\n", UCHAR_MAX);
    printf("short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short: 0 to %u\n", USHRT_MAX);
    printf("int: %d to %d\n", INT_MIN, INT_MAX);
    printf("unsigned int: 0 to %u\n", UINT_MAX);
    printf("long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long: 0 to %lu\n", ULONG_MAX);
    printf("long long: %lld to %lld\n", LLONG_MIN, LLONG_MAX);
    printf("unsigned long long: 0 to %llu\n", ULLONG_MAX);

    // Floating-point types
    printf("\nRanges of floating-point types:\n");
    printf("float: %e to %e\n", FLT_MIN, FLT_MAX);
    printf("double: %e to %e\n", DBL_MIN, DBL_MAX);
    printf("long double: %Le to %Le\n", LDBL_MIN, LDBL_MAX);

    return 0;
}


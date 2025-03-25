#include <stdio.h>

int main() {
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);

    int result = modifyBits(x);
    printf("Updated value of x: %d\n", result);
    
}

int modifyBits(int x) {
    if (x & 1) {
        printf("%d is odd\n", x);
    } else {
        printf("%d is even\n", x);
    }
    x = x | (1 << 3);
    x = x & ~(1 << 2);
    return x;
}
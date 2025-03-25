#include <stdio.h>

// Define the child structure
struct child {
    int x;      // Integer member
    char c;     // Character member
};

// Define the parent structure
struct parent {
    int a;                  // Integer member
    struct child left;      // Left child of type struct child
    struct child right;     // Right child of type struct child
};

int main() {
    // Initialize the parent structure with values
    struct parent var1 = { 25, {195, 'A'}, {300, 'B'} };

    // Accessing and printing members of the parent and child structures
    printf("var1.a = %d\n", var1.a);
    printf("var1.left.x = %d\n", var1.left.x);
    printf("var1.left.c = %c\n", var1.left.c);
    printf("var1.right.x = %d\n", var1.right.x);
    printf("var1.right.c = %c\n", var1.right.c);

    return 0;
}

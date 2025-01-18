//Demonstrtaing the use of bool data type

#include <stdio.h>
#include <stdbool.h>

int main() {
    bool isEven = true;
    int number;
    printf("Enter the number: " );
    scanf("%d",&number);

    if (number % 2 == 0) {
        isEven = true;
    } else {
        isEven = false;
    }

    if (isEven) {
        printf("The number %d is even.\n", number);
    } else {
        printf("The number %d is odd.\n", number);
    }

    return 0;
}


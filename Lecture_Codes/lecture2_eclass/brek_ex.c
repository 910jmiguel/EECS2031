/* This program asks the user to enter numbers continuously until they
enter a negative number, at which point the loop will terminate using break.*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    int number;
    bool allow = true;;

    while (allow) {  // Infinite loop
        printf("Enter a number (negative number to stop): ");
        scanf("%d", &number);

        if (number < 0) {
            allow = false;
            break;  // Exit the loop if a negative number is entered
        }

        printf("You entered: %d\n", number);
    }
    printf("Loop terminated because a negative number was entered.\n");
    return 0;
}


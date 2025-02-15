#include <stdio.h>

int main() {
    // Step 1: Declare and initialize the character array
    char str[] = "C123";
    
    // Step 2: Declare an integer array to store ASCII values
    int ascii_values[4]; 

    // Step 3: Store ASCII values in the integer array
    for (int i = 0; i < 4; i++) {
        ascii_values[i] = str[i];  // ASCII value of each character
    }

    // Step 4: Print ASCII values and manually convert to binary
    for (int i = 0; i < 4; i++) {
        printf("Character: %c, ASCII: %d, Binary: ", str[i], ascii_values[i]);

        // TODO: Convert ascii_values[i] to binary and print it manually

        int num = ascii_values[i];
        int binary[8];
        int index = 0;

        for(index = 0; num > 0; index++) {
            binary[index] = num % 2; // store remainder (0 or 1)
            num /= 2; // divide by 2
        }

        for(int j = 7; j >= 0; j--) {
            if (j >= index) {
                printf("0");
            } else {
                printf("%d", binary[j]);
            }
        }

        printf("\n");
    }

    return 0;
}

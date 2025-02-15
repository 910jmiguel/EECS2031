#include <stdio.h>

int main() {
    // Step 1: Declare and initialize the original character array
    char original[100];
    
    printf("Enter a word: ");
    scanf("%99s", original);

    int length = 0;
    while (original[length] != '\0') {
        length++;
    }
    
    // Step 2: Declare an empty character array of the same size
    char reversed[11];  // +1 for null terminator
    
    // Step 3: Reverse the string (You need to complete this part)
    for (int i = 0; i < 10; i++) {
        // TODO: Store characters in reversed order
        reversed[i] = original[10 - i];
    }

    // Step 4: Add null terminator to make it a valid string
    reversed[10] = '\0';  

    // Step 5: Print both original and reversed strings
    printf("Original String: %s\n", original);
    printf("Reversed String: %s\n", reversed);

    return 0;
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 100

// Function to count character frequencies
void countCharacterFrequency(char str[]) {
    int freq[26] = {0};  // Array to store frequency of each letter

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);  // Convert to lowercase

        // Fill in: Check if 'ch' is a letter and update frequency array
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
        }
    }

    printf("Character frequencies:\n");
    
    // Fill in: Loop through frequency array and print non-zero counts
    for(int i = 0; i < 26; i++) {
        if(freq[i] > 0) {
            printf("%c - %d\n", i + 'a', freq[i]);
        }
    }
}

int main() {
    char str[MAX_LEN];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Fill in: Remove the newline character from input if present

    countCharacterFrequency(str);
    
    return 0;
}

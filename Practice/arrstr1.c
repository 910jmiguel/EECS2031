#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main() {
    char sent[MAX_SIZE] = "";
    char longWord[MAX_SIZE] = "";

    int countVowel(char sent[]);
    void longestWord(char sent[], char longWord[]);
    
    printf("Enter a sentence: ");
    scanf("%s", sent);

    int countV = countVowel(sent);
    longestWord(sent, longWord);

    printf("Number of vowels: %d\n", countV);
    printf("Longest word: %s\n", longWord);

    return 0;
}

int countVowel(char sent[]) {
    int count = 0;
    for(int i = 0; sent[i] != '\0'; i++) {
        if(sent[i] == 'a' || sent[i] == 'e' || sent[i] == 'i' || sent[i] == 'o' || sent[i] == 'u'
            || sent[i] == 'A' || sent[i] == 'E' || sent[i] == 'I' || sent[i] == 'O' || sent[i] == 'U'
            ) {
            count++;
        }
    }
    return count;
}

void longestWord(char sent[], char longWord[]) {
    int curr = 0;
    int max = 0;
    char currWord[MAX_SIZE];

    for(int i = 0; sent[i] != '\0'; ++i) {
        if(sent[i] != ' ') {
            currWord[i] = sent[i];
            curr++;
        }

// if we reach a space or end of string, process the current word
        if(sent[i] == ' ' || sent[i] == '\0') { 
            currWord[curr] = '\0'; //stops the process of currWord

            if(curr > max) {
                max = curr; // if curr is greater, then set it to max
                strcpy(longWord, currWord); // copy currWord to longWord
            } 

            curr = 0; // reset current word length for next word
        }
    }
}


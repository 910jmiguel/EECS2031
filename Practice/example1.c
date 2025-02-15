#include <stdio.h>         
#include <string.h>

int main(void) {
    char userCaption[22]; // 20 user char, +1 for period, +1 for null

    int lastIndex;
    char lastChar;

    printf("Enter a caption (20 char max): ");
    scanf("%s", userCaption);

    lastIndex = strlen(userCaption) - 1;
    lastChar = userCaption[lastIndex];

    if ( (lastChar != '.') && (lastChar != '!') && (lastChar != '?') ) {
        // User's caption lacking ending punctuation, so add a period
        strcat(userCaption, ".");
    }

    printf("New %s\n", userCaption);

    return 0;
}
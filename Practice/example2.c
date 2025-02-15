#include <stdio.h>

int main(void) {
    char userStr[20] = "1234567890123456789";
    int i;

    printf("Enter string (<20 chars): ");
    scanf("%s", userStr);

    printf("\n%s\n", userStr);

    for(int i = 0; userStr[i] != '\0'; ++i) {
        if(userStr[i] == '@') {
            printf("Found '@'.\n");
        }
    }
}



#include <stdio.h>

int main() {
    int ch;

    while (ch != EOF) { 
        ch = getchar();
        if('a' <= ch && ch <= 'z') {
            putchar(ch - 'a' + 'A'); 
        }

        else if(ch >= '0' && ch <= '9') {
            if(ch < '5') {
                putchar('-');
            } else if(ch > '5') {
                putchar('+');
            } else {
                putchar(ch);
            }
        }

        else {
            putchar(ch);
        }
    }
    return 0;
}
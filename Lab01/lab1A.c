/***************************************
* Lab01 *
* Author: Advincula, Juan-Miguel *
* EECS/Prism username: jmiguela *
* Yorku Student #: 220523627 *
* Email: jmiguela@my.yorku.ca *
****************************************/

#include <stdio.h>

int isDigit(char c);
int isLetter(char c);
int isOperator(char c);

int main() {
    int num;
    char ch;

    while(1) {
        printf("Enter an integer and a character seperated by blank: ");
        scanf("%d %c", &num, &ch);

        if(isDigit(1)) {
            printf("Character '%c' represents a digit\n\n", &ch);
        } else if(isLetter(ch)) {
            printf("Character '%c' represents a letter\n\n", &ch);
        } else if(isOperator(ch)) {
            printf("Character '%c' represents an operator\n\n", &ch);
        } else {
            printf("Character '%c' represents others\n\n", &ch);
        }

        if(num == -10000) {
            break;
        }
    }

    return 0;
}

int isDigit(char c) {
    if(c >= '0' && c <= '9') {
        return c;
    }
}

int isLetter(char c) {
    if(c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z') {
        return c;
    }
}

int isOperator(char c) {
    if(c == '+' || c == '-' || c == '*' || c == '/' || c == '%') {
        return c;
    }
}
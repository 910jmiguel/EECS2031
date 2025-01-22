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

int isDigit(char c)
{
    return (c >= '0' && c <= '9');
}

int isLetter(char c)
{
    return (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z');
}

int isOperator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '%');
}

int main()
{
    int num;
    char ch;
    int sum;

    while (1)
    {
        printf("Enter an integer and a character seperated by blank: ");
        scanf("%d %c", &num, &ch);

        if (isDigit(ch))
        {
            int newNum = num - '0';
            sum = newNum + ch;
            printf("Character '%c' represents a digit. Sum of %d and %c is %d\n\n", ch, num, ch, sum);
        }
        else if (isLetter(ch))
        {
            printf("Character '%c' represents a letter\n\n", ch);
        }
        else if (isOperator(ch))
        {
            printf("Character '%c' represents an operator\n\n", ch);
        }
        else
        {
            printf("Character '%c' represents others\n\n", ch);
        }

        if (num == -10000)
        {
            break;
        }
    }

    return 0;
}

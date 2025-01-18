#include<stdio.h>
int main()
{
        int i;
	char command;
        printf("Enter an integer: ");
	scanf("%d", &i);
        printf("The integer is: %d",i);
	printf("Enter a command: ");
	command = getchar();
        putchar(command);
}

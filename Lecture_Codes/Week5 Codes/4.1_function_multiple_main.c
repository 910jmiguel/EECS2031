// Name of the file : 4.1function_multiple_main.c

#include<stdio.h>
int sum (int, int);
extern int result;

int main(){
    int x= 2, y = 3;
    sum(x,y);
    printf("The addition is %d", result);
}

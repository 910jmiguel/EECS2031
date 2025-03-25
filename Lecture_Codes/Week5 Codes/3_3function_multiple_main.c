// Name of the file : 3_3function_multiple_main.c

#include<stdio.h>
extern int sum (int, int);

int main(){
    int x= 2, y = 3;
    printf("%d + %d = %d\n", x, y, sum(x , y));
}

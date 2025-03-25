// Name of the file : 3_2function_multiple_main.c

#include<stdio.h>
#include "3_function_multiplefiles.c"

int main(){
    int x= 2, y = 3;
    printf("%d + %d = %d\n", x, y, sum(x , y));
}

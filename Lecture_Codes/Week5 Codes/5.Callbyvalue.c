#include<stdio.h>

void swap(int x, int y)
{
    int temp;
    temp = x;
    x=y;
    y=temp;
}

int main()
{
    int i = 3, j = 4;
    printf("In the main,before swap() function call, the values are %d and %d", i, j);
    swap(i,j);
    printf("\nIn the main,after swap() function call, the values are %d and %d", i, j);
    return 0;
}
#include<stdio.h>

int result; //External/Global varaible - defined outside the function

//Function Definition
void sum(int i, int j){
    result = i +j ;
}

int main(){
    int x= 2, y = 3;
    sum(x,y);
    printf("%d + %d = %d\n", x, y, result);
}
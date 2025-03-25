#include<stdio.h>

//Function Definition
int sum(int i, int j){
    int add = i +j ;
    return add;
}
//Function definition
void display (int i){
    printf("%d", i);
}

int main(){
    int x= 2, y = 3;
    int addition = sum(x,y);

    //Option 1: Function call to display sum of two numbers
    printf("The result stored in variable after function call to sum(x,y) from main: ");
    display(addition);

    //Option 2: Function call to display sum of two numbers
    printf("\nDirect call to sum(x,y) in display function from main: ");
    display(sum(x,y));
}
#include<stdio.h>

int result; //External/Global variable - defined outside the function
//Function Definition
int sum(int i, int j){
    result = i +j ;
}
//Function definition
void display (){
    printf("\n\t\tThis is addition of two values: %d", result);
}

int main(){
    int x= 2, y = 3;
    //Function Call to sum(x,y)
    sum(x,y);

    //Option 2: Function call to display sum of two numbers
    printf("The result printed from display() function with the use of external variable: ");
    display();  
}
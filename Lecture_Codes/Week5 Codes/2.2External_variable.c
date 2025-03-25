#include<stdio.h>

int result; //External/Global variable - defined outside the function
//Function Definition
void increase(){
    result += 100; //result varaible modified
}
//Function definition
void decrease(){
    result -= 30; //result varaible modified
}

int main(){
    result = 50;
    //Function Call 
    increase();
    //Function Call 
    decrease();
    printf("The final result is: %d", result);
}
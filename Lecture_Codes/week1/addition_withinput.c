// Addition program with input from user.
#include <stdio.h>

// function main begins program execution 
int main(void) {
   int num1 ; // will hold first number user enters 
   int num2 ; // will hold second number user enters

   printf("Enter first integer: "); // prompt
   scanf("%d", &num1); // read an integer

   printf("Enter second integer: "); // prompt
   scanf("%d", &num2); // read an integer

   int sum ; // variable in which sum will be stored
   sum = num1 + num2; // assign total to sum

   printf("Sum is %d\n", sum); // print sum
} // end function main


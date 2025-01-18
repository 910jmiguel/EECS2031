// Addition program.
#include <stdio.h>

// function main begins program execution 
int main(void) {
   int num1 = 23; // will hold first number user enters 
   int num2 = 47; // will hold second number user enters

   printf("The first integer is: %d",num1 ); // printing the value of first number
   printf("\nThe second integer is: %d",num2 ); // printing the value of second number

   int sum; // variable in which sum will be stored
   sum = num1 + num2; // assign total to sum

   printf("\nSum is %d\n", sum); // print sum
   // if you don't want to use additional identifier to store sum, add the numbers in printf statement
   printf("Printing Sum directly %d\n", num1 + num2);

} // end function main


// Addition program.
#include <stdio.h>

// function main begins program execution 
int main(void) {
   float num1 = 23.46; // will hold first number user enters 
   float num2 = 47.32; // will hold second number user enters

   printf("The first integer is: %f",num1 ); // printing the value of first number
   printf("\nThe second integer is: %f",num2 ); // printing the value of second number

   float sum; // variable in which sum will be stored
   sum = num1 + num2; // assign total to sum

   printf("\nSum is %f\n", sum); // print sum
   // to round of result to two decimal places
   printf("Sum is %0.2f\n", sum); 
   // if you don't want to use additional identifier to store sum, add the numbers in printf statement
   printf("Printing Sum directly %f\n", num1 + num2);

} // end function main


// print formats
#include <stdio.h>
 
int main(void) {
   puts("1234567890123456789012345678901234567890");
   printf("%10s%10d%10c%10f\n\n", "hello", 7, 'a', 1.23);
   puts("1234567890123456789012345678901234567890");
   printf("%-10s%-10d%-10c%-10f\n", "hello", 7, 'a', 1.23);
   //space flag
   printf("% d\n% d\n", 547, -547);
   
   int c = 1427; // initialize c
   printf("%#o\n", c);
   printf("%#x\n", c);
   printf("%#X\n", c);
   
   double p = 1427.0; // initialize p
   printf("\n%g\n", p);
   printf("%#g\n", p);

   printf("%+09d\n", 452);
   printf("%09d\n", 452);
} 


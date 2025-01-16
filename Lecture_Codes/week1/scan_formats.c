// Demonstrating scanf conversion specifiers
#include <stdio.h>
 
int main(void) {
   char x; 
   puts("\n Enter a character: ");
   scanf("%c", &x);
   printf("\nThe input was %c\n", x);   
   
   int a, b, c, d, e, f, g; 
   puts("Enter seven integers: ");
   scanf("%d%i%i%i%o%u%x", &a, &b, &c, &d, &e, &f, &g);
   puts("\nThe input displayed as decimal integers is:");
   printf("%d %d %d %d %d %d %d\n", a, b, c, d, e, f, g);

   double p, q, r; 
   puts("\nEnter three floating-point numbers:");
   scanf("%le%lf%lg", &p, &q, &r);
   puts("\nUser input displayed in plain floating-point notation:");
   printf("%f\n%f\n%f\n", p, q, r);
   
   char y[10]; 
   puts("\n Enter a string: ");
   scanf("%s", &y);
   printf("\nThe input was %s\n", y);
} 


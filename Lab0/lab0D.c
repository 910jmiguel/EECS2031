#include <stdio.h>

float sum (float i, float j);
void greet(int i);

int main()
{  
   int a = 2011 + 20;
   greet(a);
   int b = 1015 - 3;
   greet(b);

   float x,y;
   printf("Enter two float numbers separated by ##:");
   scanf("%f##%f", &x, &y);

   float su= sum(x,y);
   printf( "%f + %f = %f\n", x,y, su);

   return 0;

}

/* function definition */
float sum (float i, float j){
   return i + j;             
}

/* need to revise this function */
void greet(int i){
  printf("Hello %d!\n", i);
}
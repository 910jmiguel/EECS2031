

#include <stdio.h>

void swapIncres(int *x, int *y, int *z);
void swap(int *x, int *z);

int main() {
  int a,b,c; 
  
  /* Read in three integers */
  printf(" Enter three values seperated by a blank: ");
  scanf("%d %d %d", &a, &b,&c);
  
  while(a != -1) {
     printf("Original inputs:   a:%-4d  b:%-4d  c:%-4d\n", a, b, c);     
     swapIncres(&a,&b,&c);
     printf("Rearranged inputs: a:%-4d  b:%-4d  c:%-4d\n\n", a, b, c);  

     /* to read again */
     printf(" Enter three values seperated by a blank: ");
     scanf("%d %d %d", &a, &b,&c);
   }
}

//swaps, and also increments variables a,b,c
void swap(int *x, int *z) {
   int temp = *x;
   *x = *z;
   *z = temp;
}

void swapIncres(int *x, int *y, int *z){
   swap(x, z); 
   *x += 100;
   *y *= 2;
}




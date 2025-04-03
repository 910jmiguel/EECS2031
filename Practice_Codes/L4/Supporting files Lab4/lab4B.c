// your information goes here
/***************************************
*  Lab04 *
* Author: Last name, first name *
* EECS/Prism username: Your eecs login username *
* Yorku Student #: Your student number *
* Email: Your email address *
****************************************/

#include <stdio.h>
#include <stdlib.h>

struct ints
{ 
   int data1;
   int data2;
};


void processStruc (struct ints);


int main()
{
  struct ints a = {100,4};
  printf("Struct a before process: %d %d\n", a.data1, a.data2);
  processStruc(a);  // pass by value
  // display a's members again, no change
  printf("Struct a after  process: %d %d\n\n", a.data1, a.data2);  

  // functions that return a struct, thus encapsulating multiple values 
  /**********************************  */
  int num1, num2;
  printf("Enter two integers: ");
  scanf("%d %d", &num1, &num2); //Use scanf to enter two values

  // The conditions for the while loop were never specified so I assumed two (huh????)
  // loop rotations given that there were only two in the sample output
  int i = 0;
  while (i < 2){
   // call getSumDiff() to calculate returns the sum and difference of the two argument integers, as struct results 
   // call printStruc () to output sum and diff;
   struct ints result = getSumDiff(num1, num2);
      if (i == 2) {
        return 0;
      }
   // prompt and read again
   printf("Enter two integers: ");
   scanf("%d %d", &num1, &num2);
   i++;
 }
return 0;  
}   

/* call/pass by value  */
void processStruc(struct ints x){
  x.data1 ++;
  x.data2 += 100;
}

struct ints getSumDiff(int a, int b){
 struct ints result;
 result.data1 = a + b;
 result.data2 = a - b;
 
 return result;
}

void printStruc (struct ints x){
 printf("Sum is: %d, Diff is %d", x.data1, x.data2);
}

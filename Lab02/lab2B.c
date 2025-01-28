/***************************************
*  Lab02 *
* Author: Last name, first name *
* EECS/Prism username: Your eecs login username *
* Yorku Student #: Your student number *
* Email: Your email address *
****************************************/
#include <stdio.h>
#include <stdlib.h>  // for atoi

#define SIZE 14
 
int main(){
  int a,b;
  char arr [SIZE];

  printf("Enter a word of positive number or 'quit': " );
  scanf("%s", arr);
  while(   )
  {
    printf("%s\n", arr);

    a = atoi(arr);
    printf("atoi:    %d (%#o, %#X)\t%d\t%d\n", a,a,a, a*2, a*a);

    b = my_atoi(arr);
    printf("my_atoi: %d (%#o, %#X)\t%d\t%d\n", b,b,b, b*2, b*b);

   
  }

  return 0;

}

/* converts an array of (digit) characters into a decimal value*/

/* Here you should scan from RIGHT to LEFT. See the description of question inlab document */

int my_atoi (char c[])
{


}

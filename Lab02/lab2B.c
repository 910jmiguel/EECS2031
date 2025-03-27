
#include <stdio.h>
#include <stdlib.h>  // for atoi
#include <string.h> 

#define SIZE 14

int my_atoi(char c[]);
int isQuit(char c[]);

int main(){
  int a,b;
  char arr [SIZE];

  printf("Enter a word of positive number or 'quit': " );
  scanf("%s", arr);
  while(isQuit(arr) == 0)
  {
    printf("%s\n", arr);

    a = atoi(arr);
    printf("atoi:    %d (%#o, %#X)\t%d\t%d\n", a,a,a, a*2, a*a);

    b = my_atoi(arr);
    printf("my_atoi: %d (%#o, %#X)\t%d\t%d\n", b,b,b, b*2, b*b);

    printf("Enter a word of positive number or 'quit': " );
    scanf("%s", arr);
  }

  return 0;

}

/* converts an array of (digit) characters into a decimal value*/

/* Here you should scan from RIGHT to LEFT. See the description of question inlab document */

int my_atoi (char c[])
{
  int atoi = 0;
  int length = strlen(c);
  int mult = 1;

  for(int i = length - 1; i >= 0; i--) {
    int digit = c[i] - '0'; // converts from character to integer
    atoi += digit * mult; // multiply by a multiplier and then adds to result
    mult *= 10; // multiplies by 10 each time
  }

  return atoi;
}

int isQuit (char c[])
{
 int i;
   if (c[0]=='q' && c[1]=='u' && c[2]=='i' && c[3]=='t') {
      return 1; 
   }
   else {
      return 0;
   }
}
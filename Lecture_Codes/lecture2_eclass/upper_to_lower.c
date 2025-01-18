//Copying input to output with conversting upper-case letters to lower-case

#include <stdio.h> // define EOF

int main(){
  int c;
  int outC;
 
  printf("\nEnter the character to convert: ");
  c = getchar();
  while(c != EOF)  /* no end-of-file yet */
  { 
    if(c >= 'A' && c <= 'Z')  //65 to 90 upper case letters
	outC = c + ('a' - 'A');
    else
        outC = c;
    
    putchar(outC); //tolower(c)
    
    c = getchar(); /* read next */
  }
 }

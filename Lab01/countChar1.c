/***************************************
* Lab01 *
* Author: Advincula, Juan-Miguel *
* EECS/Prism username: jmiguela *
* Yorku Student #: 220523627 *
* Email: jmiguela@my.yorku.ca *
****************************************/

#include <stdio.h> // define EOF

int main(){
  int c, cC, lC, cB;
  cC = lC = cB = 0;
 
  c = getchar();
  while(c != EOF)  /* no end-of-file yet */
  { 
    if (c == '\n') { // a new line
      lC++;
    } else if(c == ' ') {
      cB++;
    } else {
      cC++;
    }

    c = getchar(); // read again
  }
  printf("# of chars: %d (# of blanks: %d)\n# of lines: %d\n", cC, cB, lC);

}


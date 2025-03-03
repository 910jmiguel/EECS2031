// your information goes here
/***************************************
* Lab04 *
* Author: Advincula, Juan-Miguel *
* EECS/Prism username: jmiguela *
* Yorku Student #: 220523627 *
* Email: jmiguela@my.yorku.ca *
****************************************/

/* Reads in a list of strings from the keyboard, then re-organize them */
 /* and then displays them on the screen. */

 #include <stdlib.h>
 #include <stdio.h>
 #include <string.h>

 #define MAX_LINES 34
 #define MAX_COLS 54 

 void print2D(char p[][MAX_COLS], int n);
 void exchange2D(char p[][MAX_COLS], int n);

 int main()
 {
     char inputs[MAX_LINES][MAX_COLS];
     printf("sizeof inputs: %d\n\n", (int)sizeof inputs);
     int n = 0;

     /* Read in the lines from the stdin (keyboard) now, using function fgets() */
     printf("Enter string: ");
     fgets(inputs[n], sizeof inputs, stdin);
     
     while (n < MAX_LINES)
     {
        inputs[n][strlen(inputs[n])-1] = '\0'; 

        if(strcmp(inputs[n], "xxx") == 0) {
            break;
        }

        n++;
        printf("Enter string: ");
        fgets(inputs[n], sizeof inputs, stdin);
     }
     printf("\n");
     
     // displays the array by calling sub-function print2D(...)
     print2D(inputs, n);

     // swaps the first and second row here
     char swap[MAX_COLS];
     strcpy(swap, inputs[0]);
     strcpy(inputs[0], inputs[1]);
     strcpy(inputs[1], swap);

     // calls sub-function exchange2D() to swap some other rows
     exchange2D(inputs, n);

     printf("\n== After swapping ==\n");
     // displays the (exchanged array) by calling sub-function print2D() 
     print2D(inputs, n);

     return 0;
 }


 // Exchange of rows. need to involve data movement 
 void exchange2D(char p[][MAX_COLS], int n)
 {
    char swap[MAX_COLS];
    for(int i = 2; i+1 < n; i+=2) {
        strcpy(swap, p[i]);
        strcpy(p[i], p[i+1]);
        strcpy(p[i+1], swap);
    }
 }

 // output the 2D array, row by row
 void print2D(char p[][MAX_COLS], int n)
 {
    printf("\nAfter while loop count: %d\n", n);
    for(int i = 0; i < n; i++) {
        printf("[%d]: %s\n", i, p[i]);
    }
 }                        


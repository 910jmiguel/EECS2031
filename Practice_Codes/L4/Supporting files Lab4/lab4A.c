// your information goes here
/***************************************
* Lab04 *
* Author: Last name, first name *
* EECS/Prism username: Your eecs login username *
* Yorku Student #: Your student number *
* Email: Your email address *
****************************************/

/* Reads in a list of strings from the keyboard, then re-organize them */
 /* and then displays them on the screen. */

 #include <stdlib.h>
 #include <stdio.h>
 #include <string.h>

 #define MAX_LINES 34
 #define MAX_COLS  54 

 int main()
 {
     char inputs[MAX_LINES][MAX_COLS];
     printf("sizeof inputs: %d\n\n", sizeof inputs);
     int n = 0;
 
     /* Read in the lines from the stdin (keyboard) now, using function fgets() */
     // use fgets to read in a line into the table row directly. note that trailing \n is read in
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
     // exchange data in row 0 and row 1 in main()
     // then send array to function exchange2D()
     char temp[MAX_COLS];
     strcpy(temp, inputs[0]);
     strcpy(inputs[0], inputs[1]);
     strcpy(inputs[1], temp);

     // calls sub-function exchange2D() to swap some other rows
     exchange2D(inputs, n);

     printf("\n== After swapping ==\n");
     
     // displays the (exchanged array) by calling sub-function print2D() 
	 print2D(inputs, n);
     
     return 0;
 }


 // Exchange of rows. need to involve data movement 
 // swaps data in first n adjacent rows, except first two rows
 // i.e. starting from 3rd row, swap inputs[2] with inputs[3]
 // swap inputs[4] with inputs[5], etc
 // if n is an odd number then last row is not swapped
 void exchange2D(char p[][MAX_COLS], int n)
 {
    char temp[MAX_COLS];
    for(int i = 2; i < n - 2; i += 2) {
        strcpy(temp, p[i]);
        strcpy(p[i], p[i+1]);
        strcpy(p[i+1], temp);
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


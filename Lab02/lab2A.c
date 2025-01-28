/***************************************
* Lab02 *
* Author: Last name, first name *
* EECS/Prism username: Your eecs login username *
* Yorku Student #: Your student number *
* Email: Your email address *
****************************************/

#include <stdio.h>
//What should be the MAX_SIZE here?
#define MAX_SIZE 

int main() {

   char word[MAX_SIZE];
   char ch;

   char helloArr[]  = "helloWorld";
   printf("\"%s\" contains %d characters, but the size is %lu (bytes)\n", helloArr, length(helloArr), sizeof(helloArr));
   helloArr[5] = '\0'; helloArr[3]='X'; helloArr[7] ='Y';
   printf("\"%s\" contains %d characters, but the size is %lu (bytes)\n\n", helloArr, length(helloArr), sizeof(helloArr));


   /********** Fill in your code below **********/
   printf("Enter a word and a character separated by blank: ");
   scanf("%s %c", ..);

   while ()   
   {  
     // don't change these first two lines
     printf("Input word is \"");
     displayStr(word);
     ....

   }
   return 0;
}

//functions to implement
// Function to calculate the length of the string
int length(char word[])
{

}

// Function to find the index of the first occurrence of a character in a string
int indexOf(char word[], char c)
{
 
}

// Function to count the number of occurrences of a character in a string
int occurrence(char word[], char c)
{

}

// Function to cdisplay the string character by character
void displayStr(char word[])
{


}
// Function to check if the input word is "quit"
//There is a flaw in this code. Find it and correct it . Submit the updated function in your submission
int isQuit (char word[])
{
 int i;
 if (word[0]=='q' && word[1]=='u' && word[2]=='i' && word[3]=='t')
    return 1; 
 else 
    return 0;
}

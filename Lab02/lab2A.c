/***************************************
* Lab02 *
* Author: Advincula, Miguel *
* EECS/Prism username: jmiguela *
* Yorku Student #: 220523627 *
* Email: jmiguela@my.yorku.ca *
****************************************/

#include <stdio.h>
//What should be the MAX_SIZE here?
#define MAX_SIZE 20

int main() {

   char word[MAX_SIZE];
   char ch;

   int length(char word[]);
   int indexOf(char word[], char c);
   int occurrence(char word[], char c);
   void displayStr(char word[]);
   int isQuit (char word[]);

   char helloArr[] = "helloWorld";
   printf("\"%s\" contains %d characters, but the size is %lu (bytes)\n", helloArr, length(helloArr), sizeof(helloArr));
   helloArr[5] = '\0'; helloArr[3]='X'; helloArr[7] ='Y';
   printf("\"%s\" contains %d characters, but the size is %lu (bytes)\n\n", helloArr, length(helloArr), sizeof(helloArr));


   /********** Fill in your code below **********/
   printf("Enter a word and a character separated by blank: ");
   scanf("%s %c", &word, &ch);

   while (isQuit(word) == 0)   
   {  
     // don't change these first two lines
     printf("Input word is \"");
     displayStr(word);
     printf("\"");

     printf("\nContains %d characters", length(word));

     printf("\n'%c' appears %d times in the word", ch, occurrence(word, ch));

     printf("\nIndex of '%c' in the word is %d", ch, indexOf(word, ch));

     printf("\nEnter a word and a character separated by blank: ");
     scanf("%s %c", &word, &ch);
   }
   return 0;
}

//functions to implement
// Function to calculate the length of the string
int length(char word[])
{
   int count = 0;
   for(int i = 0; word[i] != '\0'; ++i) {
      count++;
   }
   return count;
}

// Function to find the index of the first occurrence of a character in a string
int indexOf(char word[], char c)
{
   for(int i = 0; word[i] != '\0'; ++i) {
      if(word[i] == c) {
         return i;
      } else {
         return -1;
      }
   }
}

// Function to count the number of occurrences of a character in a string
int occurrence(char word[], char c)
{
   int count = 0;
   for(int i = 0; word[i] != '\0'; ++i) {
      if(word[i] == c) {
         count++;
         return count;
      } else {
         return 0;
      }
   }
}

// Function to cdisplay the string character by character
void displayStr(char word[])
{
   for(int i = 0; word[i] != '\0'; ++i) {
      putchar(word[i]);
   }
}
// Function to check if the input word is "quit"
//There is a flaw in this code. Find it and correct it . Submit the updated function in your submission
int isQuit (char word[])
{
 int i;
   if (word[0]=='q' && word[1]=='u' && word[2]=='i' && word[3]=='t') {
      return 1; 
   }
   else {
      return 0;
   }
}

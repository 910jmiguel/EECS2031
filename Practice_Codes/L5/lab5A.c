// your information goes here
/***************************************
* Lab05 *
* Author: Last name, first name *
* EECS/Prism username: Your eecs login username *
* Yorku Student #: Your student number *
* Email: Your email address *
****************************************/

#include <stdio.h>
#include <string.h>

#define SIZE 11

void printParr(char *pArr[], int n);
void printParr2(char **pArr, int n);
void exchangeParr(char *pArr[], int n);

int main(){

  // Initialize an array of char pointers with example strings
    char *inputs[SIZE] = {
        "giraffes are high 0", 
        "mosquitos are annoying 1",
        "monkeys are smart 2", 
        "kangaroos are funny 3"
    };
 // Define additional strings and assign them to the inputs array
  char arr1 [] = "dogs are friendly 4";
  char arr2 [] = "hippos are huge 5";
  char arr3 [] = "cobras are fearsome 6";
  char arr4 [] = "foxes 7";
  char arr5 [] = "elephants 8";
  char arr6 [] = "hens 9";
  char arr7 [] = "bisons 10";

  inputs[4] = arr1;
  inputs[5] = arr2;
  inputs[6] = arr3;
  inputs[7] = arr4;
  inputs[8] = arr5;
  inputs[9] = arr6;
  inputs[10] = arr7;

  int n = SIZE;
  
  printf("\n Sizeof char*: %d, Sizeof pointer array: %d\n\n", sizeof(char*), sizeof inputs );

  // Displays the INITIAL array by calling function printParr()
  printf("\n== before swapping ==\n");
  printf("===========================\n");
  printParr(inputs, n);

  // Swaps pointees of the first and the second element pointers here
  // exchange pointees of the 1st (inputs[0]) and the 2nd (inputs[1]) pointers of pointer array
  char *tempInput;
  tempInput = inputs[0];
  inputs[0] = inputs[1];
  inputs[1] = tempInput;

  // Call sub-function exchangeParr() to swap pointees starting from the 3rd pointer
  exchangeParr(inputs, n);
  
 // Displays the exchanged array by calling function printParr()
  printf("\n== after swapping ==\n");   
  printf("===========================\n");
  printParr(inputs, n);
  
  // Displays the exchanged array again by calling another function printParr2()
  printf("\n== displaying with printParr2 ==\n");   
  printf("===========================\n");
  printParr2(inputs, n);
  return 0;
}

/* exchanges some pointees of the pointer array */
  // call exchangeParr() to take array of char pointer and swap pointees pointed by first n pointers
  // starting from the 3rd pointer, swap inputs[2] with inputs[3], then swap inputs[4] with inputs[5], etc.
  // if n is an odd number then last pointee is not swapped
void exchangeParr(char *pArr[], int n){
  /*
  Start from the 3rd element (index 2) - You need to begin swapping from this position, not index 0
Process pairs of elements - You'll need to iterate through the array in steps of 2
Handle odd counts - Make sure you don't attempt to swap if there's only one element remaining
  */
  for(int i = 2; i < n - 2; i += 2) {
    char *temp;
    temp = pArr[i];
    pArr[i] = pArr[i + 1];
    pArr[i + 1] = temp;
  }
}

/* outputs the first n pointees of the pointer array */ 
void printParr(char *pArr[], int n){
  //prints the first n pointees of pArr on stdout one line for each pointee
  // use array index notation[]
  for(int i = 0; i < n; i++) {
    printf("[%d] -*-> %s\n", i, pArr[i]);
  }
}

/* outputs the first n pointees of the pointer array -- the 'decayed' argument */
void printParr2(char **pArr, int n){
  for(int i = 0; i < n; i++) {
    printf("[%d] -*-> %s\n", i, *(pArr + i));
  }
}

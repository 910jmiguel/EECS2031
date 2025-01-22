/***************************************
* FALL 2024 - Lab01 *
* Author: Last name, first name *
* EECS/Prism username: Your eecs login username *
* Yorku Student #: Your student number *
* Email: Your email address *
****************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

main ()
{
  int i;
  int arr[SIZE];
  srand(time(0));
  for( i = 0; i<SIZE; i++){
    int ran = rand()%41 ;   // a random number that's in the range of [0,40] inclusive
    arr[i] = ran;
  }

  // display the array
  printf("array [ ");
  for( ...) {
    ...;
  } 
  printf("]\n");
  // create two arrays of the same size of arr, one to hold even numbers and one for prime numbers; 
  // scan the array to find even and prime numbers, and put them in corresponding arrays
  // you may add other variables as needed

  
  // output the even numbers
  

  // output the prime numbers

}


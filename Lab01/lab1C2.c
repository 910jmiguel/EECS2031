

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int isPrime(int n);

int main ()
{
  int i;
  int arr[SIZE] = {0};
  srand(time(0));
  for( i = 0; i<SIZE; i++){
    int ran = rand()%41 ;   // a random number that's in the range of [0,40] inclusive
    arr[i] = ran;
  }

  // display the array
  printf("array [ ");
  for(i = 0; i < SIZE; i++) {
    printf("%d ", arr[i]);
  } 
  printf("]\n");
  // create two arrays of the same size of arr, one to hold even numbers and one for prime numbers; 
  int even[SIZE] ={0};
  int prime[SIZE] = {0};
  int evenCount = 0;
  int primeCount = 0;
  // scan the array to find even and prime numbers, and put them in corresponding arrays
  for (i = 0; i < SIZE; i++) {
    if(arr[i] % 2 == 0) {
      even[evenCount] = arr[i];
      evenCount++;
    }
    
    if(isPrime(arr[i])) {
      prime[primeCount] = arr[i];
      primeCount++;
    }
  }
  // you may add other variables as needed
  // output the even numbers
  printf("%d even numbers: ", evenCount);
  for(i = 0; i < evenCount; i++) {
    printf("%d ", even[i]);
  }
  printf("\n");

  // output the prime numbers
  printf("%d prime numbers: ", primeCount);
  for(i = 0; i < primeCount; i++) {
    printf("%d ", prime[i]);
  }
  printf("\n");
  return 0;
}

int isPrime(int n) {
  if(n < 2) {
    return 0;
  }
  for(int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}


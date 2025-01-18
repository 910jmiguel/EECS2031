#include <stdio.h>

int main() {
    int count = 1;  //Initialization of counter

    while (count <= 5) //Condition to be tested
    {			//Condition true
        printf("%d\n", count);
        count++;  // Increment the counter
    } //end of while loop - count >5

    return 0;
}


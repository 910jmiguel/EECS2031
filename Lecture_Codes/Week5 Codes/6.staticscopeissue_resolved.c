#include <stdio.h>

int unique_int(void){
    static int counter = 0; // static variable retains its value between calls
    printf("%d ", counter); // prints the current value of counter
    counter++;              // increments the counter
    return counter;         // return the updated counter
}

int main(){
    printf("In main %d\n", unique_int()); // Calls 1st time, prints 0 and shows 1
    printf("In main %d\n", unique_int()); // Calls 2nd time, prints 1 and shows 2
    printf("In main %d\n", unique_int()); // Calls 3rd time, prints 2 and shows 3
    return 0;
}

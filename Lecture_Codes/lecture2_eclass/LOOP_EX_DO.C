#include <stdio.h>

int main() {
    int count = 1; //Initialization of counter
    //ATLEAST ONE EXECUTION OF LOOP, WITHOUT EVEN TESTING THE CONDITION
    do {
        printf("%d\n", count);
        count++;  // Increment the counter
    } while (count <= 5);//Condition to be tested. Condition true

    return 0;
}


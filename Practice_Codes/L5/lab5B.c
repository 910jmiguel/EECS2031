// your information goes here
/***************************************
* Lab05 *
* Author: Last name, first name *
* EECS/Prism username: Your eecs login username *
* Yorku Student #: Your student number *
* Email: Your email address *
****************************************/
#include <stdio.h>
//Include other directives if needed

//Function Prototypes

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage: %s [sum|diff] int1 int2 ...\n", argv[0]);
        return 1;
    }

    // Display the number of arguments (excluding executable name)
    printf("Total arguments: %d\n", argc - 1);

    // Check if the first argument is "sum" or "diff"
   
    if (strcmp(argv[1], "sum") == 0) {
        printf("Calculating sum: ");
        for (....................) {
            ....................
        }
        printf(" = %d\n", getSum(argv, argc));
    } 
    else if (.....................) {
        printf("Calculating difference: ");
        for (..................) {
            .....................
        }
        printf(" = %d\n", getDiff(argv, argc));
    } 
    else {
        printf(.............................);
        ............
    }

    return 0;
}
// Function to calculate the sum of integers
int getSum(char *args[], int n) {
    
}

// Function to calculate the difference of integers
int getDiff(char *args[], int n) {
    
}
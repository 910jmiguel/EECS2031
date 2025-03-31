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
        for (int i = 2; i < argc; i++) {
            printf("%s", argv[i]);
            //if command-line arguments begin with sum list the integer literals seperated by +
            if(i < argc - i) {
                printf(" + ");
            }
        }
        printf(" = %d\n", getSum(argv, argc));
    } 
    else if (strcmp(argv[1], "diff") == 0) {
        printf("Calculating difference: ");
        for (int i = 2; i < argc; i++) {
            printf("%s", argv[i]);
        // if command-line arguments begin with diff, list integer literals seperated by -
            if(i < argc - i) {
                printf(" - ");
            }
        }

        printf(" = %d\n", getDiff(argv, argc));
    } 
    else {
        printf("Invalid operation. Use 'sum' or 'diff'.");
        return 1;
    }

    return 0;
}
// Function to calculate the sum of integers
int getSum(char *args[], int n) {
    // array of n char pointers where except the first two pointers all other pointers point to
    // strings of integer literals, and then returns the sum of the integer literals
    // use atoi function to convert command-line arguments which are provided as strings into integers
    int sum = 0; 
    for(int i = 2; i < n; i++) {
        sum += atoi(args[i]);
    }
    return sum;
}

// Function to calculate the difference of integers
int getDiff(char *args[], int n) {
    int diff = 0;
    for(int i = 2; i < n; i++) {
        diff += atoi(args[i]);
    }
    return diff;
}
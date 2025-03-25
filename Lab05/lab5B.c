// your information goes here
/***************************************
* Lab05 *
* Author: Advincula, Juan-Miguel *
* EECS/Prism username: jmiguela *
* Yorku Student #: 220523627 *
* Email: jmiguela@my.yorku.ca *
****************************************/

#include <stdio.h>
//Include other directives if needed
#include <string.h>
#include <stdlib.h>

//Function Prototypes
int getSum(char *args[], int n);
int getDiff(char *args[], int n);

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage: %s [sum|diff] int1 int2 ...\n", argv[0]);
        return 1;
    }

    // Display the number of arguments (excluding executable name)
    printf("Total arguments: %d\n", argc - 1);

    // Check if the first argument is "sum" or "diff"
   
    if (strcmp(argv[1], "sum") == 0) { // if begins with sum, list integer literals seperated by + sign, call getSum()
        printf("Calculating sum: ");
        for (int i = 2; i < argc; i++) {
            printf("%s", argv[i]);
            if(i < argc - 1) {
                printf(" + ");
            }
        }
        printf(" = %d\n", getSum(argv, argc));
    } 
    else if (strcmp(argv[1], "diff") == 0) { // if begins with diff, list integer literals seperated by - sign, call getDiff()
        printf("Calculating difference: ");
        for (int i = 2; i < argc; i++) {
            printf("%s", argv[i]);
            if(i < argc - 1) {
                printf(" - ");
            }
        }
        printf(" = %d\n", getDiff(argv, argc));
    } 
    else {
        printf("Invalid operation. Use 'sum' or 'diff'.\n");
        return 1;
    }

    return 0;
}
// Function to calculate the sum of integers
// takes argument an array of n char pointers
// except first 2 pointers, all other pointers point to strings of integer literals
// return sum of integer literals
// use atoi function to convert command-line arguments as strings to integers
int getSum(char *args[], int n) {
    int sum = 0;
    for(int i = 2; i < n; i++) {
        sum += atoi(args[i]);
    }
    return sum;
}

// Function to calculate the difference of integers
// takes argument an array of n char pointers
// except first 2 pointers, all other pointers point to strings of integer literals
// returns difference of integers
// define difference as result of first integer literals (pointed by 3rd pointers) minus all the other pointed integers
// use atoi function to convert command-line arguments as strings to integers
int getDiff(char *args[], int n) {
    int diff = 0;
    for(int i = 2; i < n; i++) {
        if(i == 2) {
            diff = atoi(args[i]);
        } else {
            diff -= atoi(args[i]);
        }
    }
    return diff;
}
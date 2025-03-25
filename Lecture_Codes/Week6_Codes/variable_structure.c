#include <stdio.h>

// Defining the employee structure
struct employee {
    char firstName[20];
    char lastName[20];
    int age;
    double hourlySalary;
} emp1;  //Declare a variable of type struct employee

int main() {
    // Declare a variable of type struct employee
    struct employee emp2;

    // Print the size of the employee structure variable
    printf("Size of employee structure variable - emp1: %lu bytes\n", sizeof(emp1));
    printf("Size of employee structure variable - emp2: %lu bytes\n", sizeof(emp2));

    return 0;
}

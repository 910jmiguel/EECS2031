#include <stdio.h>

// Defining the employee structure
struct employee {
    char firstName[20];
    char lastName[20];
    int age;
    double hourlySalary;
} emp1 = { "Alice", "Smith", 28, 30.75  };

int main() {
    // Declare and initialize emp2
    struct employee emp2 = {"Bob", "Johnson", 35, 40.50 };

    // Print the values of emp1
    printf("\nEmployee 1 Details:\n");
    printf("First Name: %s\n", emp1.firstName);
    printf("Last Name: %s\n", emp1.lastName);
    printf("Age: %d\n", emp1.age);
    printf("Hourly Salary: %.2f\n", emp1.hourlySalary);

    // Print the values of emp2
    printf("\nEmployee 2 Details:\n");
    printf("First Name: %s\n", emp2.firstName);
    printf("Last Name: %s\n", emp2.lastName);
    printf("Age: %d\n", emp2.age);
    printf("Hourly Salary: %.2f\n", emp2.hourlySalary);

    return 0;
}

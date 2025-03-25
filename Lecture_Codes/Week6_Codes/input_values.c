#include <stdio.h>

// Defining the employee structure
struct employee {
    char firstName[20];
    char lastName[20];
    int age;
    double hourlySalary;
};

int main() {
    // Create an array of employee structures
    struct employee employees[2];
    // Input values for each employee using a for loop
    for (int i = 0; i < 2; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        
        //Syntax of fgets - fgets(str, num, stdin)
        printf("Enter first name: ");
        fgets(employees[i].firstName, sizeof(employees[i].firstName), stdin);

        printf("Enter last name: ");
        fgets(employees[i].lastName, sizeof(employees[i].lastName), stdin);

        printf("Enter age: ");
        scanf("%d", &employees[i].age);

        printf("Enter hourly salary: ");
        scanf("%lf", &employees[i].hourlySalary);

        // Clear the input buffer after scanf
       getchar(); // Consume the newline character left in the buffer
    }
    // Print the entered details for each employee
    printf("\nEmployee Details:\n");
    for (int i = 0; i < 2; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("First Name: %s", employees[i].firstName);
        printf("Last Name: %s", employees[i].lastName);
        printf("Age: %d\n", employees[i].age);
        printf("Hourly Salary: %.2f\n", employees[i].hourlySalary);
    }

    return 0;
}

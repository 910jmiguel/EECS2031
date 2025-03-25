#include <stdio.h>

// Defining the address structure
struct address {
    char street[50];
    char city[30];
    char postalCode[10];
};

// Defining the employee structure
struct employee {
    char firstName[20];
    char lastName[20];
    int age;
    double hourlySalary;
    struct address addr; // Nested structure variable
};

// Fixed-size array for two employees
struct employee employees[2];

int main() {
    // Input values for each employee using a for loop
    for (int i = 0; i < 2; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);

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

        // Input address details
        printf("Enter street: ");
        fgets(employees[i].addr.street, sizeof(employees[i].addr.street), stdin);
        printf("Enter city: ");
        fgets(employees[i].addr.city, sizeof(employees[i].addr.city), stdin);
        printf("Enter postal code: ");
        fgets(employees[i].addr.postalCode, sizeof(employees[i].addr.postalCode), stdin);
    }

    // Print the entered details for each employee
    printf("\nEmployee Details:\n");
    for (int i = 0; i < 2; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("First Name: %s", employees[i].firstName);
        printf("Last Name: %s", employees[i].lastName);
        printf("Age: %d\n", employees[i].age);
        printf("Hourly Salary: %.2f\n", employees[i].hourlySalary);
        printf("Address:\n");
        printf("  Street: %s", employees[i].addr.street);
        printf("  City: %s", employees[i].addr.city);
        printf("  Postal Code: %s", employees[i].addr.postalCode);
    }

    return 0;
}

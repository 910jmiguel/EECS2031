#include <stdio.h>

// Defining the address structure
struct address {
    char street[50];
    char city[30];
    char postalCode[10];
};

// Defining the employee structure and creating an alias
typedef struct {
    char firstName[20];
    char lastName[20];
    int age;
    double hourlySalary;
    struct address addr; // Nested structure variable
} Employee; // Alias for the structure

int main() {
    // Declare a variable of type Employee
    Employee emp1, emp2;

    // Input values for the first employee
    printf("Enter details for Employee 1:\n");
    printf("Enter first name: ");
    fgets(emp1.firstName, sizeof(emp1.firstName), stdin);
    printf("Enter last name: ");
    fgets(emp1.lastName, sizeof(emp1.lastName), stdin);
    printf("Enter age: ");
    scanf("%d", &emp1.age);
    printf("Enter hourly salary: ");
    scanf("%lf", &emp1.hourlySalary);
    
    // Clear the input buffer after scanf
    getchar(); // Consume the newline character left in the buffer

    printf("Enter street: ");
    fgets(emp1.addr.street, sizeof(emp1.addr.street), stdin);
    printf("Enter city: ");
    fgets(emp1.addr.city, sizeof(emp1.addr.city), stdin);
    printf("Enter postal code: ");
    fgets(emp1.addr.postalCode, sizeof(emp1.addr.postalCode), stdin);

    // Clear the input buffer for the second employee
    getchar(); 

    // Input values for the second employee
    printf("\nEnter details for Employee 2:\n");
    printf("Enter first name: ");
    fgets(emp2.firstName, sizeof(emp2.firstName), stdin);
    printf("Enter last name: ");
    fgets(emp2.lastName, sizeof(emp2.lastName), stdin);
    printf("Enter age: ");
    scanf("%d", &emp2.age);
    printf("Enter hourly salary: ");
    scanf("%lf", &emp2.hourlySalary);
    
    // Clear the input buffer after scanf
    getchar(); // Consume the newline character left in the buffer

    printf("Enter street: ");
    fgets(emp2.addr.street, sizeof(emp2.addr.street), stdin);
    printf("Enter city: ");
    fgets(emp2.addr.city, sizeof(emp2.addr.city), stdin);
    printf("Enter postal code: ");
    fgets(emp2.addr.postalCode, sizeof(emp2.addr.postalCode), stdin);

    // Print the entered details for each employee
    printf("\nEmployee Details:\n");
    printf("\nEmployee 1:\n");
    printf("First Name: %s", emp1.firstName);
    printf("Last Name: %s", emp1.lastName);
    printf("Age: %d\n", emp1.age);
    printf("Hourly Salary: %.2f\n", emp1.hourlySalary);
    printf("Address:\n");
    printf("  Street: %s", emp1.addr.street);
    printf("  City: %s", emp1.addr.city);
    printf("  Postal Code: %s", emp1.addr.postalCode);

    printf("\nEmployee 2:\n");
    printf("First Name: %s", emp2.firstName);
    printf("Last Name: %s", emp2.lastName);
    printf("Age: %d\n", emp2.age);
    printf("Hourly Salary: %.2f\n", emp2.hourlySalary);
    printf("Address:\n");
    printf("  Street: %s", emp2.addr.street);
    printf("  City: %s", emp2.addr.city);
    printf("  Postal Code: %s", emp2.addr.postalCode);

    return 0;
}

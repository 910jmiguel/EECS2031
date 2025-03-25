#include <stdio.h>

// Defining the employee structure
struct employee {
    char firstName[20];
    char lastName[20];
    int age;
    double hourlySalary;
};

struct student{
    char fn[20];
    float gpa;
    int studentId;
    double marks;
};

int main() {
    // Printing the size of the structure
    printf("Size of struct employee: %lu bytes\n", sizeof(struct employee));
    printf("Size of struct student: %lu bytes\n", sizeof(struct student));

    return 0;
}

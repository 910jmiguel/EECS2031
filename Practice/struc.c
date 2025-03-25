#include <stdio.h>
#include <string.h>

#define MAX 50

struct Student {
    char name[MAX];
    int id;
    float grade;
};

struct Student inputStudent() {
    struct Student s;
    printf("Enter student name: ");
    scanf("%s", s.name);

    printf("Enter student ID: ");
    scanf("%d", &s.id);

    printf("Enter student grade: ");
    scanf("%f", &s.grade);

    return s;
}

void displayStudent(struct Student s) {
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("ID: %d\n", s.id);
    printf("Grade: %.2f\n", s.grade);
}

struct Student updateGrade(struct Student s, float newGrade) {
    s.grade = newGrade;
    return s;
}

int main() {
    struct Student student;

    student = inputStudent();
    displayStudent(student);

    int choice;
    printf("\nDo you want to update the grade? (1 for Yes, 0 for No): ");
    scanf("%d", &choice);

    if(choice == 1) {
        float newGrade;
        printf("Enter new grade: ");
        scanf("%f", &newGrade);

        student = updateGrade(student, newGrade);
        displayStudent(student);
    }

    return 0;
}
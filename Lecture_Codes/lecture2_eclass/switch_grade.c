/*This example is a basic grade evaluation system where a user inputs a letter grade,
 and the program provides feedback based on that grade*/

#include <stdio.h>

int main() {
    char grade;

    printf("Enter your grade (A, B, C, D, F): ");
    scanf(" %c", &grade);

    switch (grade) {
        case 'A':
        case 'a':
            printf("Excellent! Keep up the great work.\n");
            break;
        case 'B':
        case 'b':
            printf("Good job! You're doing well.\n");
            break;
        case 'C':
        case 'c':
            printf("Fair effort, but there's room for improvement.\n");
            break;
        case 'D':
        case 'd':
            printf("You passed, but consider working harder.\n");
            break;
        case 'F':
        case 'f':
            printf("Fail. You may need to retake the course.\n");
            break;
        default:
            printf("Invalid grade entered. Please enter A, B, C, D, or F.\n");
            break;
    }

    return 0;
}


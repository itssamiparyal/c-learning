/*Write a program using switch statement to display EXCELLENT, VERY GOOD, GOOD,
SATISFACTORY, or FAIL if the user enters A, B, C, D, or E respectively.*/

#include <stdio.h>

int main() {
    char grade;

    printf("Enter grade (A, B, C, D, E): ");
    scanf(" %c", &grade);  // Note the space before %c to consume any newline

    switch (grade) {
        case 'A':
        case 'a':
            printf("EXCELLENT\n");
            break;
        case 'B':
        case 'b':
            printf("VERY GOOD\n");
            break;
        case 'C':
        case 'c':
            printf("GOOD\n");
            break;
        case 'D':
        case 'd':
            printf("SATISFACTORY\n");
            break;
        case 'E':
        case 'e':
            printf("FAIL\n");
            break;
        default:
            printf("Invalid grade entered!\n");
    }

    return 0;
}

//90. program to read 100 students record with fields (roll_no, name, class, and marks in 5 subjects) and display their records along with their percentage of marks obtained.
#include <stdio.h>

#define SUBJECTS 5
#define STUDENTS 100

struct Student {
    int roll_no;
    char name[50];
    char class[20];
    float marks[SUBJECTS];
    float percentage;
};

int main() {
    struct Student s[STUDENTS];
    int i, j;
    float total;

    // Input student records
    for(i = 0; i < STUDENTS; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Class: ");
        scanf("%s", s[i].class);

        total = 0;
        printf("Enter marks for %d subjects:\n", SUBJECTS);
        for(j = 0; j < SUBJECTS; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%f", &s[i].marks[j]);
            total += s[i].marks[j];
        }

        s[i].percentage = total / SUBJECTS;
    }

    // Display student records
    printf("\n\n--- Student Records ---\n");
    for(i = 0; i < STUDENTS; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No: %d\n", s[i].roll_no);
        printf("Name: %s\n", s[i].name);
        printf("Class: %s\n", s[i].class);

        printf("Marks: ");
        for(j = 0; j < SUBJECTS; j++) {
            printf("%.2f ", s[i].marks[j]);
        }

        printf("\nPercentage: %.2f%%\n", s[i].percentage);
    }

    return 0;
}
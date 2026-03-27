// //94. program using structure data to read name, roll, marks in three subjects of 20 students and
// print the record in the ascending order of the total marks obtained in three subjects.

#include <stdio.h>
#include <string.h>

#define STUDENTS 20

struct Student {
    int roll;
    char name[50];
    float marks[3];
    float total;
};

int main() {
    struct Student s[STUDENTS], temp;
    int i, j;

    // Input student records
    for(i = 0; i < STUDENTS; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        s[i].total = 0;
        printf("Enter marks for 3 subjects:\n");
        for(j = 0; j < 3; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%f", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }
    }

    // Sort students by total marks (ascending)
    for(i = 0; i < STUDENTS - 1; i++) {
        for(j = 0; j < STUDENTS - i - 1; j++) {
            if(s[j].total > s[j + 1].total) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    // Display sorted records
    printf("\n\n--- Student Records in Ascending Order of Total Marks ---\n");
    for(i = 0; i < STUDENTS; i++) {
        printf("\nRoll No: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f %.2f %.2f\n",
               s[i].marks[0], s[i].marks[1], s[i].marks[2]);
        printf("Total: %.2f\n", s[i].total);
    }

    return 0;
}
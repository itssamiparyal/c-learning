// // 91. Program to read 100 students record with following fields and display the record of B.Sc. IT
// faculty only.
// Roll No. Name Faculty DOB(date of birth

// dd mm yy

#include <stdio.h>
#include <string.h>

#define STUDENTS 100

struct Student {
    int roll_no;
    char name[50];
    char faculty[20];
    int dd, mm, yy;   // date of birth
};

int main() {
    struct Student s[STUDENTS];
    int i;

    // Input student records
    for(i = 0; i < STUDENTS; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Faculty: ");
        scanf("%s", s[i].faculty);

        printf("Date of Birth (dd mm yy): ");
        scanf("%d %d %d", &s[i].dd, &s[i].mm, &s[i].yy);
    }

    // Display only B.Sc. IT students
    printf("\n\n--- B.Sc. IT Students ---\n");
    for(i = 0; i < STUDENTS; i++) {
        if(strcmp(s[i].faculty, "BScIT") == 0 || 
           strcmp(s[i].faculty, "B.Sc.IT") == 0 ||
           strcmp(s[i].faculty, "B.Sc.IT.") == 0) {

            printf("\nRoll No: %d\n", s[i].roll_no);
            printf("Name: %s\n", s[i].name);
            printf("Faculty: %s\n", s[i].faculty);
            printf("DOB: %02d-%02d-%02d\n", s[i].dd, s[i].mm, s[i].yy);
        }
    }

    return 0;
}
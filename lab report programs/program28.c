/*Given marks in five subjects. Write a program (a) to display “PASS” or “FAIL” if assumed
pass marks is 45 in each subject, (b) to find percentage of marks obtained, and (c) to find
division for “PASS” students assuming that 80% and above for “DISTINCTION”, 60% and
above for “FIRST DIVISION” otherwise “SECOND DIVISION”.*/

#include <stdio.h>

int main() {
    int marks[5];
    int i, total = 0;
    float percentage;
    int pass = 1;  // assume student has passed

    // Input marks for 5 subjects
    printf("Enter marks for 5 subjects: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        if(marks[i] < 45) {
            pass = 0;  // failed in this subject
        }
        total += marks[i];
    }

    // (a) Pass/Fail
    if(pass) {
        printf("PASS\n");
    } else {
        printf("FAIL\n");
    }

    // (b) Percentage
    percentage = (float)total / 500 * 100;  // 5 subjects, each out of 100
    printf("Percentage = %.2f%%\n", percentage);

    // (c) Division (only if PASS)
    if(pass) {
        if(percentage >= 80) {
            printf("Division: DISTINCTION\n");
        } else if(percentage >= 60) {
            printf("Division: FIRST DIVISION\n");
        } else {
            printf("Division: SECOND DIVISION\n");
        }
    }

    return 0;
}

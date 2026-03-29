#include <stdio.h>
#include <string.h>

struct student
{
    int roll_no;
    char name[50];
    char course[30];
    int semester;
};

int main()
{
    FILE *fp;
    struct student s;
    int n, i;

    fp = fopen("student.txt", "w");

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s.roll_no);

        printf("Name: ");
        scanf(" %[^\n]", s.name);

        printf("Course: ");
        scanf(" %[^\n]", s.course);

        printf("Semester: ");
        scanf("%d", &s.semester);

        fprintf(fp, "%d|%s|%s|%d\n", s.roll_no, s.name, s.course, s.semester);
    }

    fclose(fp);

    fp = fopen("student.txt", "r");

    printf("\nStudents in B.Sc. IT, Semester 2:\n");

    while (fscanf(fp, "%d|%[^|]|%[^|]|%d\n",
                  &s.roll_no, s.name, s.course, &s.semester) != EOF)
    {
        if (strcmp(s.course, "B.Sc. IT") == 0 && s.semester == 2)
        {
            printf("Roll: %d\tName: %s\n", s.roll_no, s.name);
        }
    }

    fclose(fp);
    return 0;
}
// 100.write a program that creates a file named “employee.dat” to keep the records of N employees of a company and print the records in the ascending order of the employee_id. A typical employee record will be employee id, name, designation, and salary.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee
{
    int emp_id;
    char name[50];
    char designation[30];
    float salary;
};

int main()
{
    FILE *fp;
    struct employee e[100], temp;
    int n, i, j;

    // Create file and write records
    fp = fopen("employee.dat", "wb");
    if (fp == NULL)
    {
        printf("Error creating file.\n");
        return 1;
    }

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &e[i].emp_id);

        printf("Name: ");
        scanf(" %[^\n]", e[i].name);

        printf("Designation: ");
        scanf(" %[^\n]", e[i].designation);

        printf("Salary: ");
        scanf("%f", &e[i].salary);

        fwrite(&e[i], sizeof(struct employee), 1, fp);
    }

    fclose(fp);

    // Read records back from file
    fp = fopen("employee.dat", "rb");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        fread(&e[i], sizeof(struct employee), 1, fp);
    }

    fclose(fp);

    // Sort records in ascending order of employee ID (Bubble Sort)
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (e[j].emp_id > e[j + 1].emp_id)
            {
                temp = e[j];
                e[j] = e[j + 1];
                e[j + 1] = temp;
            }
        }
    }

    // Display sorted records
    printf("\nEmployees in ascending order of Employee ID:\n");

    for (i = 0; i < n; i++)
    {
        printf("\nID: %d", e[i].emp_id);
        printf("\nName: %s", e[i].name);
        printf("\nDesignation: %s", e[i].designation);
        printf("\nSalary: %.2f\n", e[i].salary);
    }

    return 0;
}
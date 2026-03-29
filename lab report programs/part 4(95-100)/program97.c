//97. create a file named “employee.dat”. Write a program to store records of N employee in a
// file. These records contain name, identification number, office name, and occupation of the
// employee. Also display name of those employees whose office name is “Everest Bank” and
// occupation is “manager”.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee
{
    char name[50];
    int id;
    char office[50];
    char occupation[50];
};

int main()
{
    FILE *fp;
    struct employee e;
    int n, i;

    // Create and open file for writing
    fp = fopen("employee.dat", "wb");
    if (fp == NULL)
    {
        printf("Error creating file.\n");
        return 1;
    }

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Write employee records to file
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of employee %d\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", e.name);

        printf("Identification Number: ");
        scanf("%d", &e.id);

        printf("Office Name: ");
        scanf(" %[^\n]", e.office);

        printf("Occupation: ");
        scanf(" %[^\n]", e.occupation);

        fwrite(&e, sizeof(e), 1, fp);
    }

    fclose(fp);

    // Open file for reading
    fp = fopen("employee.dat", "rb");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    printf("\nEmployees working at Everest Bank as manager:\n");

    // Read and filter records
    while (fread(&e, sizeof(e), 1, fp) == 1)
    {
        if (strcmp(e.office, "Everest Bank") == 0 &&
            strcmp(e.occupation, "manager") == 0)
        {
            printf("Name: %s\n", e.name);
        }
    }

    fclose(fp);

    return 0;
}
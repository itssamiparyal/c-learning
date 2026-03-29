//96. create a file named “university.dat”. Write a program to keep the records on N colleges
// under Pokhara University if a file. These records contain name, location, and
// no_of_faculties of the college and display the names of colleges in Kathmandu location.

#include <stdio.h>
#include <stdlib.h>

struct college
{
    char name[50];
    char location[50];
    int no_of_faculties;
};

int main()
{
    FILE *fp;
    struct college c;
    int n, i;

    // Open file for writing
    fp = fopen("university.dat", "wb");
    if (fp == NULL)
    {
        printf("Error creating file.\n");
        return 1;
    }

    printf("Enter number of colleges: ");
    scanf("%d", &n);

    // Writing records to file
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of college %d\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", c.name);

        printf("Location: ");
        scanf(" %[^\n]", c.location);

        printf("Number of faculties: ");
        scanf("%d", &c.no_of_faculties);

        fwrite(&c, sizeof(c), 1, fp);
    }

    fclose(fp);

    // Reopen file for reading
    fp = fopen("university.dat", "rb");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    printf("\nColleges located in Kathmandu:\n");

    // Reading and filtering records
    while (fread(&c, sizeof(c), 1, fp) == 1)
    {
        if (strcmp(c.location, "Kathmandu") == 0)
        {
            printf("College Name: %s\n", c.name);
        }
    }

    fclose(fp);

    return 0;
}
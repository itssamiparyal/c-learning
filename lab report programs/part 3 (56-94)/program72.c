//72. Program to read name list of 50 students and display them in alphabetical form.
#include <stdio.h>
#include <string.h>

int main()
{
    char name[50][50], temp[50];
    int i, j;

    printf("Enter names of 50 students:\n");

    for (i = 0; i < 50; i++)
    {
        scanf("%s", name[i]);
    }

    // Sorting names alphabetically using bubble sort
    for (i = 0; i < 49; i++)
    {
        for (j = i + 1; j < 50; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    printf("\nNames in alphabetical order:\n");
    for (i = 0; i < 50; i++)
    {
        printf("%s\t", name[i]);
    }

    return 0;
}
//78. Program to read 4 × 4 matrix and find sum of each row.

#include <stdio.h>

int main()
{
    int matrix[4][4];
    int i, j, sum;

    printf("Enter elements of 4x4 matrix:\n");

    // Input matrix elements
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of each row
    for (i = 0; i < 4; i++)
    {
        sum = 0;
        for (j = 0; j < 4; j++)
        {
            sum += matrix[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}
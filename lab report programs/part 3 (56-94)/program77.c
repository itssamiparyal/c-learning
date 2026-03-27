//77. Program that accepts the elements of 3 × 3 matrix and calculate the sum of all elements of the matrix.

#include <stdio.h>

int main()
{
    int matrix[3][3];
    int i, j, sum = 0;

    printf("Enter elements of 3x3 matrix:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of all elements
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum += matrix[i][j];
        }
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}
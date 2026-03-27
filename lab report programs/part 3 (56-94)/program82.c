//82. Program to multiply two rectangular matrices and display the resultant matrix.

#include <stdio.h>

int main()
{
    int matrix[4][4];
    int i, j;

    printf("Enter elements of 4x4 matrix:\n");

    // Input matrix
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Convert to lower triangular
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (i < j)
            {
                matrix[i][j] = 0;
            }
        }
    }

    printf("\nLower triangular matrix:\n");

    // Display result
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
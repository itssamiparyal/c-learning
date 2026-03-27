//76. Program to add two 3×2 matrices and print the result in matrix form.

#include <stdio.h>

int main()
{
    int A[3][2], B[3][2], C[3][2];
    int i, j;

    printf("Enter elements of first 3x2 matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of second 3x2 matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Matrix addition
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nResultant matrix after addition:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
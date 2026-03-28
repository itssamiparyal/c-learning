//82. Program to multiply two rectangular matrices and display the resultant matrix.

#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;

    printf("Enter rows and columns of first matrix(rxc): ");
    scanf("%dx%d", &r1, &c1);

    printf("Enter rows and columns of second matrix(rxc): ");
    scanf("%dx%d", &r2, &c2);

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    int A[r1][c1], B[r2][c2], C[r1][c2];

    // Input first matrix
    printf("Enter elements of first matrix(%dx%d):\n",r1,c1);
    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
            scanf("%d", &A[i][j]);

    // Input second matrix
    printf("Enter elements of second matrix(%dx%d):\n",r2,c2);
    for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++)
            scanf("%d", &B[i][j]);

    // Initialize result matrix to 0
    for(i = 0; i < r1; i++)
        for(j = 0; j < c2; j++)
            C[i][j] = 0;

    // Matrix multiplication
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            for(k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display result
    printf("Resultant Matrix:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++)
            printf("%5d", C[i][j]);
        printf("\n");
    }

    return 0;
}
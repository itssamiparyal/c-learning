//88. using pointer write a program to add two 3 × 2 matrices and print the result in matrix form.
#include <stdio.h>

#define ROW 3
#define COL 2

int main() {
    int A[ROW][COL], B[ROW][COL], C[ROW][COL];
    int *pA = &A[0][0];
    int *pB = &B[0][0];
    int *pC = &C[0][0];
    int i, j;

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < ROW; i++) {
        for(j = 0; j < COL; j++) {
            scanf("%d", pA + i * COL + j);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < ROW; i++) {
        for(j = 0; j < COL; j++) {
            scanf("%d", pB + i * COL + j);
        }
    }

    // Add matrices using pointers
    for(i = 0; i < ROW * COL; i++) {
        *(pC + i) = *(pA + i) + *(pB + i);
    }

    // Display result
    printf("Resultant Matrix:\n");
    for(i = 0; i < ROW; i++) {
        for(j = 0; j < COL; j++) {
            printf("%4d", *(pC + i * COL + j));
        }
        printf("\n");
    }

    return 0;
}
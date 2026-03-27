//84. program to add two 3 × 4 matrices and print the result in matrix form; use separate functions to take input and to add and display the result.
#include <stdio.h>

#define ROW 3
#define COL 4

// Function to take matrix input
void inputMatrix(int matrix[ROW][COL]) {
    for(int i = 0; i < ROW; i++) {
        for(int j = 0; j < COL; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to add two matrices
void addMatrix(int A[ROW][COL], int B[ROW][COL], int C[ROW][COL]) {
    for(int i = 0; i < ROW; i++) {
        for(int j = 0; j < COL; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Function to display matrix
void displayMatrix(int matrix[ROW][COL]) {
    printf("\nResultant Matrix:\n");
    for(int i = 0; i < ROW; i++) {
        for(int j = 0; j < COL; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[ROW][COL], B[ROW][COL], C[ROW][COL];

    printf("Enter elements of first matrix:\n");
    inputMatrix(A);

    printf("\nEnter elements of second matrix:\n");
    inputMatrix(B);

    addMatrix(A, B, C);

    displayMatrix(C);

    return 0;
}
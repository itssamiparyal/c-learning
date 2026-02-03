#include <stdio.h>

int main() {
    int a[3][2] = {1, 2, 3, 4, 5, 6};
    int b[2][3] = {1, 2, 3, 4, 5, 6};

    printf("The matrix elements are:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}

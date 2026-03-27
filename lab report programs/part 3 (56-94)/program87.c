//87. using pointer write a program to get n integer number and display them in ascending order (use malloc or calloc to reserve memory).
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, temp;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory
    arr = (int *)malloc(n * sizeof(int));

    if(arr == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    // Input numbers
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    // Sorting in ascending order (Bubble Sort)
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(*(arr + j) > *(arr + j + 1)) {
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }

    // Display sorted numbers
    printf("Numbers in ascending order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }

    // Free allocated memory
    free(arr);

    return 0;
}
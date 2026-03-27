//86. program to read n numbers in an array and display their sum and average. Use the concept of pointer to access array elements.
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, avg;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];        // array declaration
    int *ptr = arr;    // pointer pointing to first element

    // Reading array elements using pointer
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    // Calculating sum using pointer
    for(i = 0; i < n; i++) {
        sum += *(ptr + i);
    }

    avg = sum / n;

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
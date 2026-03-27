//85. program to swap two numbers using a function and by passing arguments as references.

#include <stdio.h>

// Function to swap numbers using pointers
void swapNumbers(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Passing addresses of variables
    swapNumbers(&num1, &num2);

    printf("After swapping:\n");
    printf("First number = %d\n", num1);
    printf("Second number = %d\n", num2);

    return 0;
}
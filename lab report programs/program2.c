// 2. Program to add, subtract, multiply, and divide two whole numbers.

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two whole numbers:\n ");
    scanf("%d %d", &a, &b);

    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);

    if (b != 0) {
        printf("Division = %.2f\n", (float)a / b);
    } else {
        printf("Division not possible (division by zero)\n");
    }

    return 0;
}

//59.Program to find product of first n natural numbers using recursive function.

#include <stdio.h>

// Recursive function to find product
int product(int n) {
    if (n == 0 || n == 1)
        return 1;   // Base case
    else
        return n * product(n - 1);  // Recursive case
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Product of first %d natural numbers = %d\n", n, product(n));

    return 0;
}
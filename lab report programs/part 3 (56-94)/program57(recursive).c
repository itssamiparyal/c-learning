//57 Program to calculate b n using recursive as well as non recursive function.

#include <stdio.h>

// Recursive function to calculate b^n
int power(int b, int n) {
    if (n == 0)
        return 1;
    else
        return b * power(b, n - 1);
}

int main() {
    int base, exponent;

    printf("Enter base (b): ");
    scanf("%d", &base);

    printf("Enter exponent (n): ");
    scanf("%d", &exponent);

    if (exponent < 0)
        printf("This program does not handle negative exponents.\n");
    else
        printf("%d^%d = %d\n", base, exponent, power(base, exponent));

    return 0;
}
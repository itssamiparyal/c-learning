//57 Program to calculate b n using recursive as well as non recursive function.

#include <stdio.h>

int main() {
    int base, exponent, i;
    long long result = 1;

    printf("Enter base (b): ");
    scanf("%d", &base);

    printf("Enter exponent (n): ");
    scanf("%d", &exponent);

    if (exponent < 0) {
        printf("This program does not handle negative exponents.\n");
    } else {
        for (i = 1; i <= exponent; i++) {
            result *= base;
        }
        printf("%d^%d = %lld\n", base, exponent, result);
    }

    return 0;
}
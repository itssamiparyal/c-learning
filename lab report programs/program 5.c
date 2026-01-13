// Program to find square root of a given number.

#include <stdio.h>
#include <math.h>

int main() {
    float num, result;

    printf("Enter a number: ");
    scanf("%f", &num);

    result = sqrt(num);

    printf("Square root = %.2f\n", result);

    return 0;
}

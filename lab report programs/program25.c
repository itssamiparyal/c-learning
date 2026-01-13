// Program to print the largest number among three numbers input by the user.

#include <stdio.h>

int main() {
    float num1, num2, num3, largest;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    largest = num1;  // assume num1 is largest

    if (num2 > largest) {
        largest = num2;
    }

    if (num3 > largest) {
        largest = num3;
    }

    printf("The largest number is %.2f\n", largest);

    return 0;
}

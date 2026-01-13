//Program to convert pounds to kilograms.

#include <stdio.h>

int main() {
    float pounds, kilograms;

    printf("Enter weight in pounds: ");
    scanf("%f", &pounds);

    kilograms = pounds * 0.453592;

    printf("Weight in kilograms = %.2f\n", kilograms);

    return 0;
}

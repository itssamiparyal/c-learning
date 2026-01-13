// A leap year should meet the following condition:
// a) For non-century years it should be exactly divisible by 4.
// b) For century years it should be exactly divisible 400.
// Write a program to check a year for leap.

#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is NOT a leap year.\n", year);
    }

    return 0;
}

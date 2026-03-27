//63. Write a program to calculate area and perimeter of a rectangle using macros.

#include <stdio.h>

// Macro definitions
#define AREA(l, b) ((l) * (b))
#define PERIMETER(l, b) (2 * ((l) + (b)))

int main()
{
    float length, breadth;

    printf("Enter length of rectangle: ");
    scanf("%f", &length);

    printf("Enter breadth of rectangle: ");
    scanf("%f", &breadth);

    printf("Area of rectangle = %.2f\n", AREA(length, breadth));
    printf("Perimeter of rectangle = %.2f\n", PERIMETER(length, breadth));

    return 0;
}
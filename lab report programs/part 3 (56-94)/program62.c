//62. Write macros to compute area and circumference of circle and make a program to use this macro.

#include <stdio.h>

#define PI 3.14159
#define AREA(r) (PI * (r) * (r))
#define CIRCUMFERENCE(r) (2 * PI * (r))

int main()
{
    float radius;

    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    printf("Area of circle = %.2f\n", AREA(radius));
    printf("Circumference of circle = %.2f\n", CIRCUMFERENCE(radius));

    return 0;
}
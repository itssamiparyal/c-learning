# include<stdio.h>
#include<math.h> // for pow() function
#define PI 3.14  // Preprocessory Directive

int main(){
    int radius;
    float area, circum;

    printf("enter the radius of circle:\n");
    scanf("%d",&radius);

    area = PI*pow(radius,2);
    circum = 2 * PI * radius;

    printf("The area of circle is:%.2f\nand The circumference of circle is:%.2f\n",area,circum);
    return 0;
}
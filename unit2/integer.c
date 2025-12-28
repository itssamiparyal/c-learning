// program to find the octal or hexdecmial of different  decimal numbers

#include <stdio.h>

int main()
{
    int a, b;
    
    printf("Enter value of a ");
    scanf("%d",&a);
    printf("Enter value of b ");
    scanf("%d",&b);

    printf("Octal of %d = 0%o\n",a, a);
    printf("Hexadecimal of %d = 0x%x\n", a, a);
    printf("Decimal of 0x%x = %d\n", b, b);

    float expo = -3.2e-5;
    printf("Floating value of %e = %f\n", expo, expo);

    float pi = 0.314500000000089;
    printf("Pi in exponential form = %e\n", pi);

    return 0;
}

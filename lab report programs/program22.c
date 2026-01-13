// Rates of tax on gross salary are as shown below:
// Income Tax
//Less than 10,000 Nill
//Rs. 10,000 to 19,999 10%
//Rs. 20,000 to 39,999 15%
//Rs. 40,000 to above 20%

#include <stdio.h>

int main() {
    float salary, tax;

    printf("Enter gross salary: ");
    scanf("%f", &salary);

    if (salary < 10000) {
        tax = 0;                     // No tax
    } else if (salary < 20000) {
        tax = salary * 10 / 100;     // 10% tax
    } else if (salary < 40000) {
        tax = salary * 15 / 100;     // 15% tax
    } else {
        tax = salary * 20 / 100;     // 20% tax
    }

    printf("Income Tax = %.2f\n", tax);

    return 0;
}

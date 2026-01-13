// Jet Company gives 5% commission to its salesman if their monthly sales are less than Rs.
//10,000 and a 10% commission if it is equal to or greater than Rs. 10,000. Write a program to
// calculate commission at the end of the month.

#include <stdio.h>

int main() {
    float sales, commission;

    printf("Enter monthly sales: ");
    scanf("%f", &sales);

    if (sales < 10000) {
        commission = sales * 5 / 100;   // 5% commission
    } else {
        commission = sales * 10 / 100;  // 10% commission
    }

    printf("Commission = %.2f\n", commission);

    return 0;
}

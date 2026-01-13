// Program to find the rupee equivalent of U.S. dollars.

#include <stdio.h>

int main() {
    float dollars, nepaliRupees;
    float rate = 132.0;  

    printf("Enter amount in U.S. dollars: ");
    scanf("%f", &dollars);

    nepaliRupees = dollars * rate;

    printf("Equivalent amount in Nepali Rupees = %.2f\n", nepaliRupees);

    return 0;
}

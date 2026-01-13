//17. Program to calculate discount
// a) If purchased amount is greater than or equal to 5000, discount is 10%
// b) If purchased amount is greater than or equal to 4000 and less than 5000, discount is 7%
// c) If purchased amount is greater than or equal to 3000 and less than 4000, discount is 5%
// d) If purchased amount is greater than or equal to 2000 and less than 3000, discount is 3%
// e) If purchased amount is less than 2000, discount is 2%


#include <stdio.h>

int main() {
    float amount, discount, final_amount;

    printf("Enter purchased amount: ");
    scanf("%f", &amount);

    if (amount >= 5000) {
        discount = amount * 10 / 100;   // 10% discount
    } else if (amount >= 4000) {
        discount = amount * 7 / 100;    // 7% discount
    } else if (amount >= 3000) {
        discount = amount * 5 / 100;    // 5% discount
    } else if (amount >= 2000) {
        discount = amount * 3 / 100;    // 3% discount
    } else {
        discount = amount * 2 / 100;    // 2% discount
    }

    final_amount = amount - discount;

    printf("Discount = %.2f\n", discount);
    printf("Amount to be paid = %.2f\n", final_amount);

    return 0;
}

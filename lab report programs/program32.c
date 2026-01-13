/*A cloth showroom has announced the following seasonal discounts on purchase of items
-----------------------------------------------------------------------------------------------------
Purchase amount Discount
-----------------------------------------------------------------------------------------------------
Mill cloth Handloom items
-----------------------------------------------------------------------------------------------------
0 – 100 - 5%
101 – 200 5% 7.5%
201 – 300 7.5% 10%
Above 300 10% 15%
-----------------------------------------------------------------------------------------------------
Write a program using switch and if statements to compute the net amount to be paid by a
customer.*/

#include <stdio.h>

int main() {
    int choice; // 1 for Mill cloth, 2 for Handloom items
    float amount, discount = 0, net_amount;

    printf("Enter purchase amount: ");
    scanf("%f", &amount);

    printf("Enter type of purchase (1 = Mill cloth, 2 = Handloom items): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: // Mill cloth
            if(amount <= 100) {
                discount = 5;
            } else if(amount <= 200) {
                discount = 5;
            } else if(amount <= 300) {
                discount = 7.5;
            } else {
                discount = 10;
            }
            break;

        case 2: // Handloom items
            if(amount <= 100) {
                discount = 0;
            } else if(amount <= 200) {
                discount = 7.5;
            } else if(amount <= 300) {
                discount = 10;
            } else {
                discount = 15;
            }
            break;

        default:
            printf("Invalid purchase type!\n");
            return 1;
    }

    net_amount = amount - (amount * discount / 100);

    printf("Discount = %.2f%%\n", discount);
    printf("Net amount to be paid = %.2f\n", net_amount);

    return 0;
}

// Program to find price of n mangos given the price of a dozen mangos.

#include <stdio.h>

int main() {
    float price_dozen, price_one, total_price;
    int n;

    printf("Enter price of a dozen mangoes: ");
    scanf("%f", &price_dozen);

    printf("Enter number of mangoes: ");
    scanf("%d", &n);

    price_one = price_dozen / 12;
    total_price = price_one * n;

    printf("Price of %d mangoes = %.2f\n", n, total_price);

    return 0;
}

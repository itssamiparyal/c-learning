//Wap to find the factorial of a number in such a way that user do not need to re-run the program again and again means provide continity in a single program.

#include <stdio.h>

int main() {
    int n, fact;
    float sum;
    char flag;

    do {
        sum = 0.0;
        fact = 1;

        printf("Enter the value of n: ");
        scanf("%d", &n);

        for (int i = 1; i <= n; i++) {
            fact *= i;              
            sum += (float)i / fact; 
        }

        printf("The summation = %.2f\n", sum);

        printf("Wish to continue? Press y, any other key to exit: ");
        scanf(" %c", &flag);        // space before %c is important

    } while (flag == 'y');

    return 0;
}

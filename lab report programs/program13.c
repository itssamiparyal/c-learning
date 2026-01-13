// Program to sum the digits of a positive integer which is 5 digits long.

#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a 5-digit positive integer: ");
    scanf("%d", &num);

    
    if(num < 10000 || num > 99999) {
        printf("Invalid input! Enter a 5-digit number.\n");
        return 1;
    }

    while(num != 0) {
        int digit = num % 10;  
        sum += digit;          
        num = num / 10;        
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}

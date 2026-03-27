// 58. Program to find sum of first n natural numbers using recursive function.
#include <stdio.h>

// Recursive function to find sum
int sum(int n) {
    if (n == 0)
        return 0;   // Base case
    else
        return n + sum(n - 1);  // Recursive case
}

int main() {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Sum of first %d natural numbers = %d\n", n, sum(n));
    
    return 0;
}
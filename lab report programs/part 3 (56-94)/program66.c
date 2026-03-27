//66. Twenty-five numbers are entered through the keyboard into an array; write a program find out how many of them are even and how many of them are odd.
#include <stdio.h>

int main()
{
    int arr[25];
    int i, even = 0, odd = 0;

    printf("Enter 25 numbers:\n");

    for (i = 0; i < 25; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d\n", odd);

    return 0;
}
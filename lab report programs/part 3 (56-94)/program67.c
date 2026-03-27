//67. Write a program to display largest and smallest number among 10 numbers stored in an array.

#include <stdio.h>

int main()
{
    int arr[10];
    int i, largest, smallest;

    printf("Enter 10 numbers:\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Assume first element as largest and smallest
    largest = smallest = arr[0];

    for (i = 1; i < 10; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];

        if (arr[i] < smallest)
            smallest = arr[i];
    }

    printf("Largest number = %d\n", largest);
    printf("Smallest number = %d\n", smallest);

    return 0;
}
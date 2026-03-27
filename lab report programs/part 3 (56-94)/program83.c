//83. program to read n numbers in an array and display their sum and average; Use functions to read input and find sum and average.

#include <stdio.h>

// Function to read array elements
void readArray(int arr[], int n)
{
    int i;
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

// Function to calculate sum
int findSum(int arr[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[100], n;
    int sum;
    float average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    readArray(arr, n);       // function call to read data
    sum = findSum(arr, n);  // function call to calculate sum

    average = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
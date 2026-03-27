//68. Program to search an element in array using sequential search.

#include <stdio.h>

int main()
{
    int arr[100], n, i, key, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    // Sequential search
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Element found at position %d\n", i + 1);
    else
        printf("Element not found in array\n");

    return 0;
}
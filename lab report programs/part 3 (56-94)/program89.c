//89. program to search the given name among the list of names of n students using pointer.
#include <stdio.h>
#include <string.h>

int main() {
    int n, i, found = 0;
    
    printf("Enter number of students: ");
    scanf("%d", &n);

    char names[n][50];     // 2D array to store names
    char search[50];

    char (*ptr)[50] = names;   // pointer to array of strings

    // Input names
    printf("Enter %d student names:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%s", *(ptr + i));
    }

    // Input name to search
    printf("Enter name to search: ");
    scanf("%s", search);

    // Search using pointer
    for(i = 0; i < n; i++) {
        if(strcmp(*(ptr + i), search) == 0) {
            found = 1;
            break;
        }
    }

    // Display result
    if(found)
        printf("Name found at position %d\n", i + 1);
    else
        printf("Name not found\n");

    return 0;
}
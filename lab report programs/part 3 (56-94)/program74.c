//74. Write a program to read a line of text and delete all the vowels from it.

#include <stdio.h>

int main()
{
    char str[100], result[100];
    int i, j = 0;

    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        // Check if character is NOT a vowel
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'))
        {
            result[j++] = ch;
        }
    }

    result[j] = '\0';  // terminate new string

    printf("String after removing vowels:\n%s", result);

    return 0;
}
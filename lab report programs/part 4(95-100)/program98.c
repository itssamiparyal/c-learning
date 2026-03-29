//98. create a structure to specify data on customers in a bank with the parameters Acct. No.,
// Name, Balance in Account. Assume there are 1000 customers in the bank. Write a program
// to store the data in “CUST.DAT” file and print the Acct. No. and Name of each customer
// with balance below Rs. 1000.

#include <stdio.h>
#include <stdlib.h>

struct customer
{
    int acct_no;
    char name[50];
    float balance;
};

int main()
{
    FILE *fp;
    struct customer c;
    int i, n;

    // Open file for writing
    fp = fopen("CUST.DAT", "wb");
    if (fp == NULL)
    {
        printf("Error creating file.\n");
        return 1;
    }

    // Number of customers (up to 1000)
    printf("Enter number of customers (max 1000): ");
    scanf("%d", &n);

    // Writing customer data to file
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of customer %d\n", i + 1);

        printf("Account Number: ");
        scanf("%d", &c.acct_no);

        printf("Name: ");
        scanf(" %[^\n]", c.name);

        printf("Balance: ");
        scanf("%f", &c.balance);

        fwrite(&c, sizeof(c), 1, fp);
    }

    fclose(fp);

    // Open file for reading
    fp = fopen("CUST.DAT", "rb");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    printf("\nCustomers with balance below Rs. 1000:\n");

    // Reading and filtering records
    while (fread(&c, sizeof(c), 1, fp) == 1)
    {
        if (c.balance < 1000)
        {
            printf("Account No: %d\tName: %s\n", c.acct_no, c.name);
        }
    }

    fclose(fp);

    return 0;
}
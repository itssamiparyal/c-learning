//93. In a bank there are N customers with attributes name, account_no, and balance; write a program to find out who has the highest balance in the bank.

#include <stdio.h>

struct Customer {
    int account_no;
    char name[50];
    float balance;
};

int main() {
    int n, i, maxIndex = 0;
    struct Customer cust[100];

    printf("Enter number of customers: ");
    scanf("%d", &n);

    // Input customer details
    for(i = 0; i < n; i++) {
        printf("\nEnter details of customer %d\n", i + 1);

        printf("Account No: ");
        scanf("%d", &cust[i].account_no);

        printf("Name: ");
        scanf("%s", cust[i].name);

        printf("Balance: ");
        scanf("%f", &cust[i].balance);
    }

    // Find customer with highest balance
    for(i = 1; i < n; i++) {
        if(cust[i].balance > cust[maxIndex].balance) {
            maxIndex = i;
        }
    }

    // Display result
    printf("\nCustomer with highest balance:\n");
    printf("Account No: %d\n", cust[maxIndex].account_no);
    printf("Name: %s\n", cust[maxIndex].name);
    printf("Balance: Rs. %.2f\n", cust[maxIndex].balance);

    return 0;
}
// 92. create a structure to specify data on customer in a bank. The data to store is: Acc. No.,
// Name, and Balance in account. Assume maximum of 200 customers in the bank.
// a. Write a function to print the Acct. no. and name of each customer with balance below Rs.
// 100.
// b. If a customer gives a request for withdraw l or deposit it is given in the form: Acct. no.,
// Amount (1 for deposit and 2 for withdrawl)
// Write a program to give a message “the balance is insufficient” for the specified withdraw.


#include <stdio.h>

#define MAX 200

struct Customer {
    int acc_no;
    char name[50];
    float balance;
};

// Function to display customers with balance below 100
void lowBalance(struct Customer c[], int n) {
    int i;
    printf("\nCustomers with balance below Rs. 100:\n");
    for(i = 0; i < n; i++) {
        if(c[i].balance < 100) {
            printf("Acc No: %d\tName: %s\n", c[i].acc_no, c[i].name);
        }
    }
}

// Function to deposit or withdraw money
void transaction(struct Customer c[], int n, int acc_no, float amount, int type) {
    int i, found = 0;

    for(i = 0; i < n; i++) {
        if(c[i].acc_no == acc_no) {
            found = 1;

            if(type == 1) { // Deposit
                c[i].balance += amount;
                printf("Amount deposited successfully.\n");
            }
            else if(type == 2) { // Withdrawal
                if(c[i].balance < amount) {
                    printf("The balance is insufficient.\n");
                } else {
                    c[i].balance -= amount;
                    printf("Withdrawal successful.\n");
                }
            }
            printf("Updated Balance: Rs. %.2f\n", c[i].balance);
            break;
        }
    }

    if(!found)
        printf("Account number not found.\n");
}

int main() {
    struct Customer cust[MAX];
    int n, i, acc, type;
    float amt;

    printf("Enter number of customers (max 200): ");
    scanf("%d", &n);

    // Input customer details
    for(i = 0; i < n; i++) {
        printf("\nEnter details of customer %d\n", i + 1);

        printf("Account No: ");
        scanf("%d", &cust[i].acc_no);

        printf("Name: ");
        scanf("%s", cust[i].name);

        printf("Balance: ");
        scanf("%f", &cust[i].balance);
    }

    // Display low balance customers
    lowBalance(cust, n);

    // Transaction section
    printf("\nEnter transaction details\n");
    printf("Account No: ");
    scanf("%d", &acc);

    printf("Enter amount: ");
    scanf("%f", &amt);

    printf("Enter 1 for Deposit, 2 for Withdrawal: ");
    scanf("%d", &type);

    transaction(cust, n, acc, amt, type);

    return 0;
}
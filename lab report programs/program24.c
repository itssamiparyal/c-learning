/*A bank accepts deposits for one year or more and the policy it adopts on interest rate is as
follows:
a) If a deposit is less than Rs. 1,000 and for 2 or more years the interest rate is 5 percent
compounded annually.
b) If a deposit is Rs. 1,000 or more but less than Rs. 5,000 and for 2 or more years the
interest rate is 7 percent compounded annually.
c) If a deposit is more than Rs. 5,000 and is for 1 year or more the interest rate is 8 percent
compounded annually.
d) On all deposits for 5 years or more interest is 10 percent compounded annually
e) On all other deposits not covered by the above conditions the interest is 3 percent
compounded annually.
At the time of withdrawal a customer data is given with the amount deposited and the
number of years the money has been with the bank. Write a program to obtain the money in
the customer’s account and the interest credited at the time on withdrawal.
*/

#include <stdio.h>
#include <math.h>

int main() {
    float deposit, interest_rate, interest, total_amount;
    int years;

    printf("Enter deposit amount: ");
    scanf("%f", &deposit);

    printf("Enter number of years: ");
    scanf("%d", &years);

    // Determine interest rate based on policy
    if (years >= 5) {
        interest_rate = 10;          // 10% for 5 or more years
    } else if (deposit < 1000 && years >= 2) {
        interest_rate = 5;           // 5% for deposit < 1000 and 2+ years
    } else if (deposit >= 1000 && deposit < 5000 && years >= 2) {
        interest_rate = 7;           // 7% for 1000 <= deposit < 5000 and 2+ years
    } else if (deposit > 5000 && years >= 1) {
        interest_rate = 8;           // 8% for deposit > 5000 and 1+ years
    } else {
        interest_rate = 3;           // 3% for all other deposits
    }

    // Compound interest formula: A = P*(1 + r/100)^t
    interest = deposit * pow(1 + interest_rate / 100, years) - deposit;
    total_amount = deposit + interest;

    printf("Interest Rate = %.2f%%\n", interest_rate);
    printf("Interest credited = %.2f\n", interest);
    printf("Total amount at withdrawal = %.2f\n", total_amount);

    return 0;
}

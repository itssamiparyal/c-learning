//Program to rverse a number

#include<stdio.h>

int main(){
    long int num , rev = 0, originalNum;
    int digit;
    printf("\nEnter number to be rversed:\t");
    scanf("%ld",&num);
    originalNum = num;
    
    while(num!=0){
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    printf("\nThe reversed number is:%ld",rev);
    if(originalNum == rev){
        printf("\nThe number is a palindrome");
    }
    else{
        printf("\nThe number is not palindrome");
    }
    return 0;
}
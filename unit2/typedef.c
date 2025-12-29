#include<stdio.h>

typedef signed int INTEGER; //typedef declaration giving nickname to datatype

int main(){
    INTEGER num1,num2;
    printf("Enter any two numbers\n");
    scanf("%d%d",&num1,&num2);

    INTEGER sum = num1 + num2;
    printf("The sume is: %d\n",sum);

    return 0;
}
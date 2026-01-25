#include <stdio.h>

int main(){
    int num;
    printf("Enter any a number:\n");
    scanf("%d",&num);

    if(num % 7 == 0){
        printf("%d is exactly divisible by 7",num);
    }
    else{
         printf("%d is NOT exactly divisible by 7",num);
    }
    return 0;
}
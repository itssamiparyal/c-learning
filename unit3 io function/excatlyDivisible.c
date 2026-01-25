#include <stdio.h>

int main(){
    int first, second;
    printf("Enter any two numbers:\n");
    scanf("%d %d",&first, &second);

    if(first % second == 0){
        printf("%d is exactly divisible by %d",first,second);
    }
    else{
         printf("%d is NOT exactly divisible by %d",first,second);
    }
    return 0;
}
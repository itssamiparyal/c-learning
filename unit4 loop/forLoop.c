#include<stdio.h>
int main(){
    int sum = 0, i , n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    //loop
    for (i = 1; i <= n; i++){
        sum = sum + i;
    }
    printf("Sumation of natural num = %d",sum);
    return 0;
}
#include<stdio.h>
int main{
    int i,n;
    float sum;
    printf("Enter n:\n");
    scanf("%d",&n);
    for(i = 1 ; i <= n; i++){
        sum = sum + 1 /(float) i;
    } 
}
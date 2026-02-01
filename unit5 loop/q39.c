#include<stdio.h>
int main(){
    int i,n;
    float sum = 0;
    printf("Enter n:\n");
    scanf("%d",&n);
    for(i = 1 ; i <= n; i++){
        sum = sum + 1 /(float) i;
    }
    printf("Sum =f harmonic series = %.2f",sum);
    return 0;
}
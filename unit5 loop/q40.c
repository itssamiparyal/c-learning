#include<stdio.h>
#include<math.h>

int main(){
    int n, i , x , sum;
    printf("Enter the value of x and n:\n");
    scanf("%d %d",&x,&n);
    sum = 1 + pow(x,2);
    for(i = 3; i<=n; i++){
        sum += i*pow(x,2);
        //sum += i* pow(x,i)
    }
    printf("sumation = %d",sum);
    return 0;
}
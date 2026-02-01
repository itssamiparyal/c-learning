#include <stdio.h>
#include <math.h>

int main(){
    int i, sum = 0,x, n;
    printf("Enter the value of x and n:\n");
    scanf("%d %d",&x,&n);
    for(i = 1; i<=n; i++){
        // sum += pow(-1,i+1)*pow(x,i); 
        // or
        if(i % 2 == 0){
            sum -= pow(x,i);
        }
        else{
            sum += pow(x,i);
        }
    }
    printf("Sum = %d\n", sum);
    return 0;
}
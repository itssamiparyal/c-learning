#include <stdio.h>

int main(){
    int a,b , c ,result1, result2;
    printf("enter any three numbers:\n");
    scanf("%d %d %d",&a,&b,&c);

    // if(a>b)
    //     result = a;
    // else
    //     result = b;

    result1 = (a > b)? a : b; //conditional operator
    result2 = (result1 > c)? result1 : c;
    printf("Greatest number = %d",result2);
    
    return 0;
}
#include<stdio.h>
int main(){
    int fact = 1, i , n;
    positive:
        printf("Enter the value of n:\n");
        scanf("%d",&n);
        //loop
        if (n>0){
            printf("fact = ");
            for (i = n; i >= 1; i--){
                fact = fact * i;
                if(i == 1){
                    printf("%d ",i); 
                }
                else{
                    printf("%d * ",i);
                }
            }
        }
        else{
            printf("%d is negative, enter postive\n",n);
            goto positive;
        }
        printf(" = %d",fact);
        return 0;
}
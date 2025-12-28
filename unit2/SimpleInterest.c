// program to calculate simple interest.

#include<stdio.h>

// if we write void main (){} not value is returned as for int main(){return0;} we need to write return 0;

int main(){
    float p , t , r , si;
    printf("Enter the value of Principle:\n ");
    scanf("%f",&p); 
    printf("Enter the value of Time:\n ");
    scanf("%f",&t); 
    printf("Enter the value of Rate:\n ");
    scanf("%f",&r);
    
    si = (p*t*r)/100;

    printf("The simple interest of principle(%f) , time(%f) , rate(%f) = %.2f",p,t,r,si);
    return 0;
}
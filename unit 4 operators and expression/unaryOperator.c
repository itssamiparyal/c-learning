#include <stdio.h>

int main(){
    int x = 20;
    //x++ is post increment
    int y = x++; //20 is assigned to y initially, then incremented(y=x then incremented becomes 21)
    printf("y=%d,x=%d\n",y,x);
    // ++a
    int a = 50;
    int b = ++a; // a is incremented firstly, then assigned to b=51

    int check = ++b + a++;  //52 + 52
    int result = a + b;
    printf("value of a =%d and the value of b =%d\n",a,b);
    printf("value of check = %d",check);
    printf("value of result = %d",result);
}
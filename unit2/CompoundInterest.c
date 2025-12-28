// program to calculate the compound interset , simple interest and find its difference

// header file
#include<stdio.h>
#include<math.h>

// main function
int main(){
    // variable decleration
    float p,t,r,ci,si,diff;

    // variable assignment
    printf("Enter value of principle:\n");
    scanf("%f",&p);
    printf("Enter value of time:\n");
    scanf("%f",&t);
    printf("Enter value of rate:\n");
    scanf("%f",&r);

    //calculation of compound intrest, simple intrest and differnce
    ci = (p*pow((1+r/100),t))-p;
    si = (p*t*r)/100;
    diff = ci - si;

    // printing the output
    printf("The compound interest of principle(%f), time(%f), rate(%f) = %f", p,t,r,ci);
    printf("The simple interest of principle(%f), time(%f), rate(%f) = %f", p,t,r,si);
    printf("The compound difference of simple interset(%f) and compound interest (%f) = %f", si , ci, diff);

    return 0; // needed if we write int main(){}
}

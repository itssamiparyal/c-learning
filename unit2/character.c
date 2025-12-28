// program to converts char value to Ascil value

// header files
#include<stdio.h> 

// main function
void main(){
    // variable declaration and assignment
    char alpha = 'B';
    char ws = ' ';
    char hash = '#';
    char minus = '-';
    char dollar = '$';

    // printing of Ascil value of chars
    printf("Ascil value of %c is %d\n",alpha,alpha);
    printf("Ascil value of %c is %d\n",ws,ws);
    printf("Ascil value of %c is %d\n",hash,hash);
    printf("Ascil value of %c is %d\n",minus,minus);
    printf("Ascil value of %c is %d\n",dollar,dollar);
    // how to check teh character value of specific ascil value
    printf("%c is the ascil value of %d\n",253,253);
}

// A,B,C,D...... Ascil value = 65,66,67,68,.......192
// a,b,c,d...... ascil vlaue = 107,108,109,.......122


// program to see the memory allocation of various datatypes

#include <stdio.h>

void main(){
    printf("Size of Int = %d bytes\n",sizeof(int));
    printf("Size of Long = %d bytes\n",sizeof(long));
    printf("size of Unsinged short = %d bytes\n",sizeof(unsigned short));
    printf("Size of Char = %d bytes\n",sizeof(char));
    printf("Size of Unsinged Char = %d bytes\n",sizeof(unsigned char));
    printf("Size of float = %d bytes\n",sizeof(float));
    printf("Size of double = %d bytes\n",sizeof(double));
    printf("Size of long double = %d bytes\n",sizeof(long double));
    //long double is not compatible in our os
}
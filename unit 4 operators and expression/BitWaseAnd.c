# include<stdio.h>

int main(){
    int a = 26, b = 36, bitand,bitor,bitxor;
    bitand = a & b; //bitwise and
    bitor = a | b; // bitwise or
    bitxor = a ^ b; // bitwise xor
    printf("bitwise and = %d\n",bitand);
    printf("bitwise or = %d\n",bitor);
    printf("bitwise xor = %d\n",bitxor);
    return 0;
}
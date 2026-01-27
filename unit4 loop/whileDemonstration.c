//while loop is used to iterate the statments until the condition inside a while is false.
//wap to enter name until you hit the chracter n.

#include<stdio.h>
int main(){
    char ch = 'y';
    char name[10];
    while(ch == 'y'){
        printf("enter our name:\n");
        scanf("%s",name);
        printf("Do you wish to enter another name again, press y for yes and n for no?\n");
        scanf(" %c",&ch);
    }
    return 0;
}
#include <stdio.h>
int main(){
    printf("Implementation of Break statement:\n");
    for(int i = 1; i<=10;i++){
        printf("%d \t",i);
        if(i == 5){
            break; // jump out from loop
        }
    }
    printf("\nI will execute even if break is used inside a loop\n");

    for(int i = 1; i<=100;i++){
        if(i % 2 != 5){
            continue; // jump out from loop
        }
        printf("%d \t",i); //print even number
    }
    return 0;
    //exit(0) halts the program. program is stopped.
}
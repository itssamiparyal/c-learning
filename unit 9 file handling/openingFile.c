#include<stdio.h>
#include<stdlib.h> //for exit() function

int main(){
    FILE *fp;
    fp = fopen("samip.text","w");//file crated and opened in write mode
    printf("the base address of fp=%u\n",fp);
    if(fp!=NULL){
        printf("The file is crated and opened for writing:\n");
    }
    else{
        printf("file not found");
        exit(0);
    }
    return 0;
}
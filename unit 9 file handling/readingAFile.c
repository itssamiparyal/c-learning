#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp=fopen("samip.text","r");
    char ch;
    if(fp!=NULL){
        do{
            ch = getc(fp); //read a single character from a file
            printf("%c",ch);
        }while(ch != EOF); //EOF = End Of File
    }else{
        printf("File not found:\n");
        exit(0);
    }
    fclose(fp);
    return 0;
}
#include<stdio.h>
int main(){
    FILE *fp = fopen("abc.txt","w+");
    if(fp!=NULL){
        fputs("This is Vedas college.edu.np",fp);
        //replacing vedas college.edu.np by c programming language
        printf("File index = %d\n",ftell(fp));
        rewind(fp);//moves to first position i.e. zero index
        fseek(fp,8,SEEK_SET);//from beginning to 9th index
        printf("File position is at %d index\n",ftell(fp));
        fputs("C-programming language",fp);
        printf("Please chekc the file:\n");
    }else{
        printf("Error creating and loading file:\n");
    }
}
// program that reads records

#include <stdio.h>
void main(){
    FILE *fp;
    fp = fopen("record.txt","w");
    int a,i;
    char n[20],add[20];
    for(i=0;i<10;i++){
        printf("Enter name, age and address");
        scanf("%S%d%s",n,&a,add);
        fprintf(fp,"%s\t%d\t%s\n",n,a,add);
    }
    fclose(fp);
    // reading records
    fp = fopen ("record.txt","r");
    printf("Name\tAge\tAddress\n");
    while (fscanf(fp,"%s%d%s",n,&a,add)!=EOF){
        printf("%s\t%d\t%s\n",n,a,add);
    }
}
#include<stdio.h>
#define ROWS 20
#define COLS 20

int main(){
    int a[ROWS][COLS],b[ROWS][COLS],c[ROWS][COLS],i,j,p,q;
    printf("Enter the size of all matrices:(pXq)\n");
    scanf("%dx%d",&p,&q);

    printf("Enter the values in matrix a:\n");
    for(i = 0;i<p;i++){
        for(j=0;j<q;j++){
            printf("Enter a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the values in matrix b:\n");
    for(i = 0;i<p;i++){
        for(j=0;j<q;j++){
            printf("Enter b[%d][%d]= ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    //addition process
    for(i = 0;i<p;i++){
        for(j=0;j<q;j++){
            c[i][j] = a[i][j]+b[i][j];
        }
    }

    printf("\nThe addition Matrix is :\n");
    for(i = 0;i<p;i++){
        for(j=0;j<q;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
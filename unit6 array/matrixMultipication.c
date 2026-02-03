#include<stdio.h>
#define ROWS 20
#define COLS 20

int main(){
    int a[ROWS][COLS],b[ROWS][COLS],c[ROWS][COLS],i,j,p,q,k,m,n,row_mul_col = 0;
compatible:
    printf("Enter the size of matrix a:(mXn)\n");
    scanf("%dx%d",&m,&n);
    printf("Enter the size of matrix b:(pXq)\n");
    scanf("%dx%d",&p,&q);

    if(n==p){
        //we do matrix multipication over here
        //input matrix a
        printf("Enter the values in matrix a:\n");
        for(i = 0;i<m;i++){
            for(j=0;j<n;j++){
                printf("Enter a[%d][%d]= ",i,j);
                scanf("%d",&a[i][j]);
            }
        }

        //input matrix b
        printf("Enter the values in matrix b:\n");
        for(i = 0;i<p;i++){
            for(j=0;j<q;j++){
                printf("Enter b[%d][%d]= ",i,j);
                scanf("%d",&b[i][j]);
            }
        }

        //multipication process
        for(i = 0;i<m;i++){
            for(j=0;j<q;j++){
                for(k=0;k<n;k++){
                    row_mul_col += a[i][k]*b[k][j];
                }
                c[i][j] = row_mul_col;
                row_mul_col = 0;
            }
        }

        printf("\nThe multipication Matrix is :\n");
        for(i = 0;i<m;i++){
            for(j=0;j<q;j++){
                printf("%d ",c[i][j]);
            }
            printf("\n");
        
        }
    }else{
        printf("Matrices are incompactable for multipication,enter proper sizes:\n");
        goto compatible;
    }
}

    
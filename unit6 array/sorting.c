#include<stdio.h>
#define SIZE 20

int main(){
    //compiler understand a[] == a[7]
    int a[SIZE],n;
    printf("Enter number of terms: ");
    scanf("%d",&n);

    for(int i = 0; i< n; i++){
        printf("A[%d]= ",i);
        scanf("%d",&a[i]);
    }
    printf("Before sorting:\n");
    for(int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }
    //sorting process
    for(int i = 0; i < n-1; i++){
        for(int j = i+1;j<n;j++){
            int temp;
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nAfter sorting:\n");
    for(int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }
    return 0;
}
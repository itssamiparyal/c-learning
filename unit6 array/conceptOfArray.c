#include<stdio.h>
#define SIZE 20

int main(){
    int subjects, m[SIZE];
    printf("Enter how many subjects:\n");
    scanf("%d",&subjects);

    for (int i = 0; i < subjects; i++){
        printf("Enter marks of m[%d] = ",i);
        scanf("%d",&m[i]);
    }
    printf("Entered marks with their memory location:\n");
    for (int i = 0; i < subjects; i++){
        printf("m[%d] has value %d in memory location %u\n",i,m[i],&m[i]);
    }
}
// program that  calculates gpa

#include <stdio.h>
int main(){
    char n[20],g[6];
    float gpa;
    int n = 0;
    FILE *fp;
    printf("Enter number of entries: ");
    scanf("%d",&n);
    fp = fopen("result.dat","w");
    for(int i = 0; i<n; i++){
        printf("Enter name,gender and gpa: ");
        scanf("%s%c%f",n,g,gpa);
    }
    
}

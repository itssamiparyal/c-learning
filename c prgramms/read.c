
// program that reades file of structure
#include <stdio.h> 
int main() {
    FILE *fp;
    char data[14]; //Assuiming the size ourselves fp = fopen("data.bin", "rb");
    if (fp == NULL) {
        perror("Error opening file"); 
        return 1;
    }
    fread(data, sizeof(char), sizeof(data), fp); 
    printf("Read data: %s\n", data);
    fclose(fp);
    return 0;
}
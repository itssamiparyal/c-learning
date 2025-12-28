#include <stdio.h>
int main() {
    FILE *fp;
    char data[] = "Hello, world!";
    fp = fopen("data.bin", "wb"); 
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }
    fwrite(data, sizeof(char), sizeof(data), fp); 
    fclose(fp);
    return 0;

}

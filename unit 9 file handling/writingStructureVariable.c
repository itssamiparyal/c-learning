#include <stdio.h>
#include <stdlib.h>

struct student {
    float fee;
    int id;
    char name[30];
};

struct student st[100];

int main()
{
    int n, i;

    printf("How many students:\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter id, name and fee of student %d: ", i + 1);
        scanf("%d %s %f", &st[i].id, st[i].name, &st[i].fee);
    }

    FILE *fp = fopen("student.bin", "wb");

    if (fp != NULL) {
        fwrite(st, sizeof(struct student), n, fp);
        printf("Student data written successfully\n");
        fclose(fp); 
    } else {
        printf("File creating error\n");
    }

    return 0;
}
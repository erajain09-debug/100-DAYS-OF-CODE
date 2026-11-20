#include <stdio.h>

int main() {
    FILE *fp;
    char name[100];
    int age;

    scanf("%s %d", name, &age);

    fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");

    return 0;
}

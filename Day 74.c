#include <stdio.h>

int main() {
    char srcName[100], destName[100];
    FILE *src, *dest;
    int ch;

    scanf("%s %s", srcName, destName);

    src = fopen(srcName, "r");
    if (src == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    dest = fopen(destName, "w");
    if (dest == NULL) {
        fclose(src);
        printf("Error opening destination file!\n");
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s\n", destName);

    return 0;
}

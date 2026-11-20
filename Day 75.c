#include <stdio.h>

int main() {
    FILE *fp;
    char line[256];

    fgets(line, sizeof(line), stdin);

    fp = fopen("data.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "%s", line);
    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}

#include <stdio.h>

int main() {
    FILE *fp;
    int ch, chars = 0, words = 0, lines = 0, inWord = 0;

    fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n') {
            lines++;
        }
        if (ch == ' ' || ch == '\n' || ch == '\t' || ch == '\r') {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            words++;
        }
    }

    if (chars > 0 && ch != '\n') {
        lines++;
    }

    fclose(fp);

    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);

    return 0;
}

#include <stdio.h>

int main() {
    char str[1000];
    int len = 0, i, lastSpace = -1;

    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0' && str[len] != '\n' && str[len] != '\r') {
        if (str[len] == ' ') {
            lastSpace = len;
        }
        len++;
    }

    for (i = 0; i < lastSpace; i++) {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                printf("%c.", str[i] - 32);
            } else {
                printf("%c.", str[i]);
            }
        }
    }

    if (lastSpace != -1) {
        printf(" ");
        for (i = lastSpace + 1; i < len; i++) {
            if (i == lastSpace + 1 && str[i] >= 'a' && str[i] <= 'z') {
                printf("%c", str[i] - 32);
            } else {
                printf("%c", str[i]);
            }
        }
    } else {
        for (i = 0; i < len; i++) {
            printf("%c", str[i]);
        }
    }
    printf("\n");

    return 0;
}

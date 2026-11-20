#include <stdio.h>

int main() {
    char str[1000];
    int len = 0, i, j, k, first = 1;

    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0' && str[len] != '\n' && str[len] != '\r') {
        len++;
    }

    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            if (!first) {
                printf(",");
            }
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            first = 0;
        }
    }
    printf("\n");

    return 0;
}

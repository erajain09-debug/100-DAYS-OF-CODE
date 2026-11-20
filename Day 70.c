#include <stdio.h>

int main() {
    char str[1005];
    int i, capitalizeNext = 1;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
        if (capitalizeNext && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
            capitalizeNext = 0;
        } else if (capitalizeNext && str[i] >= 'A' && str[i] <= 'Z') {
            capitalizeNext = 0;
        } else if (!capitalizeNext && str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }

        if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            capitalizeNext = 1;
        }
    }

    for (i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}

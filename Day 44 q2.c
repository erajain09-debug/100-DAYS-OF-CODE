#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n' && str[i] != '\r') {
        if (str[i] == ' ') {
            str[i] = '-';
        }
        printf("%c", str[i]);
        i++;
    }
    printf("\n");

    return 0;
}

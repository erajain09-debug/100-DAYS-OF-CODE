#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, start = 0, end;

    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n' || str[i] == '\r') {
            for (end = i - 1; end >= start; end--) {
                printf("%c", str[end]);
            }
            if (str[i] == ' ') {
                printf(" ");
                start = i + 1;
            } else {
                break;
            }
        }
        i++;
    }
    printf("\n");

    return 0;
}

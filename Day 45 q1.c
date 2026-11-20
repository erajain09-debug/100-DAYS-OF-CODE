#include <stdio.h>

int main() {
    char str[1000], target;
    int i = 0, count = 0;

    fgets(str, sizeof(str), stdin);
    scanf(" %c", &target);

    while (str[i] != '\0' && str[i] != '\n' && str[i] != '\r') {
        if (str[i] == target) {
            count++;
        }
        i++;
    }

    printf("%d\n", count);

    return 0;
}

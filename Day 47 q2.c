#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, currLen = 0, maxLen = 0, currStart = 0, maxStart = 0;

    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n' && str[i] != '\r') {
            if (currLen == 0) {
                currStart = i;
            }
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = currStart;
            }
            currLen = 0;
            if (str[i] == '\0' || str[i] == '\n' || str[i] == '\r') {
                break;
            }
        }
        i++;
    }

    for (i = maxStart; i < maxStart + maxLen; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}

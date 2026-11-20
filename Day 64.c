#include <stdio.h>

int main() {
    char s[1005];
    int lastIndex[256];
    int i, left = 0, maxLen = 0, currentLen;

    for (i = 0; i < 256; i++) {
        lastIndex[i] = -1;
    }

    fgets(s, sizeof(s), stdin);

    for (i = 0; s[i] != '\0' && s[i] != '\n' && s[i] != '\r'; i++) {
        unsigned char ch = (unsigned char)s[i];
        if (lastIndex[ch] >= left) {
            left = lastIndex[ch] + 1;
        }
        lastIndex[ch] = i;
        currentLen = i - left + 1;
        if (currentLen > maxLen) {
            maxLen = currentLen;
        }
    }

    printf("%d\n", maxLen);

    return 0;
}

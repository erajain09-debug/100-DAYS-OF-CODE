#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    int freq[256] = {0};
    int i = 0;

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    while (str1[i] != '\0' && str1[i] != '\n' && str1[i] != '\r') {
        freq[(unsigned char)str1[i]]++;
        i++;
    }

    i = 0;
    while (str2[i] != '\0' && str2[i] != '\n' && str2[i] != '\r') {
        freq[(unsigned char)str2[i]]--;
        i++;
    }

    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Not anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");

    return 0;
}

#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    int len1 = 0, len2 = 0, i, j, match;

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    while (str1[len1] != '\0' && str1[len1] != '\n' && str1[len1] != '\r') {
        len1++;
    }
    while (str2[len2] != '\0' && str2[len2] != '\n' && str2[len2] != '\r') {
        len2++;
    }

    if (len1 != len2) {
        printf("Not rotation\n");
        return 0;
    }

    if (len1 == 0) {
        printf("Rotation\n");
        return 0;
    }

    for (i = 0; i < len1; i++) {
        match = 1;
        for (j = 0; j < len1; j++) {
            if (str1[(i + j) % len1] != str2[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            printf("Rotation\n");
            return 0;
        }
    }

    printf("Not rotation\n");

    return 0;
}

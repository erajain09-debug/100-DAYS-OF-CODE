#include <stdio.h>

int main() {
    int n, i, val, xorAll = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &val);
        xorAll ^= val;
        if (i > 0) {
            xorAll ^= i;
        }
    }

    printf("%d\n", xorAll);

    return 0;
}

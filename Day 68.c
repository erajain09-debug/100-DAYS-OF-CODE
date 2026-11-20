#include <stdio.h>

int main() {
    int n, i, x, actualSum = 0, expectedSum;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        actualSum += x;
    }

    expectedSum = n * (n + 1) / 2;

    printf("%d\n", expectedSum - actualSum);

    return 0;
}

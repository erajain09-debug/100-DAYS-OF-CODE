#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;

    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("%lld (", product);
    for (i = 2; i <= n; i += 2) {
        printf("%d", i);
        if (i + 2 <= n) {
            printf(" * ");
        }
    }
    printf(")\n");

    return 0;
}

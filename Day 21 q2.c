#include <stdio.h>

int main() {
    int n, i, sum = 0;

    scanf("%d", &n);

    if (n <= 1) {
        printf("Not perfect number\n");
        return 0;
    }

    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n) {
        printf("Perfect number\n");
    } else {
        printf("Not perfect number\n");
    }

    return 0;
}

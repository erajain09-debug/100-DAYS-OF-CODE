#include <stdio.h>

int main() {
    int n, original, digit, factorial, sum = 0, i;

    scanf("%d", &n);

    if (n <= 0) {
        printf("Not strong number\n");
        return 0;
    }

    original = n;

    while (n != 0) {
        digit = n % 10;
        factorial = 1;
        for (i = 1; i <= digit; i++) {
            factorial *= i;
        }
        sum += factorial;
        n /= 10;
    }

    if (sum == original) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }

    return 0;
}

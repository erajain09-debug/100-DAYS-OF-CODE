#include <stdio.h>

int main() {
    int n, original, temp, digits = 0, remainder, sum = 0, power, i;

    scanf("%d", &n);

    if (n < 0) {
        printf("Not Armstrong\n");
        return 0;
    }

    original = n;
    temp = n;

    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    if (n == 0) {
        digits = 1;
    }

    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        power = 1;
        for (i = 0; i < digits; i++) {
            power *= remainder;
        }
        sum += power;
        temp /= 10;
    }

    if (sum == original) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}

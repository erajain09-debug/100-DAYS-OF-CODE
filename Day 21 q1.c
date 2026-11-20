#include <stdio.h>

int main() {
    int n, first, last, temp, divisor = 1, middle, swapped;

    scanf("%d", &n);

    if (n < 10 && n > -10) {
        printf("%d\n", n);
        return 0;
    }

    temp = n < 0 ? -n : n;
    last = temp % 10;

    while (temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }
    first = temp;

    middle = ((n < 0 ? -n : n) % divisor) / 10;
    swapped = last * divisor + middle * 10 + first;

    if (n < 0) {
        swapped = -swapped;
    }

    printf("%d\n", swapped);

    return 0;
}

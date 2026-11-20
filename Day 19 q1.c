#include <stdio.h>

int main() {
    long long a, b, x, y, temp, gcd, lcm;

    scanf("%lld %lld", &a, &b);

    if (a == 0 || b == 0) {
        printf("0\n");
        return 0;
    }

    x = a < 0 ? -a : a;
    y = b < 0 ? -b : b;

    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }
    gcd = x;

    lcm = ((a < 0 ? -a : a) / gcd) * (b < 0 ? -b : b);

    printf("%lld\n", lcm);

    return 0;
}

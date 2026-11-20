#include <stdio.h>

int main() {
    int n, original, reversed = 0, remainder;

    scanf("%d", &n);

    if (n < 0) {
        printf("Not palindrome\n");
        return 0;
    }

    original = n;

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original == reversed) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}

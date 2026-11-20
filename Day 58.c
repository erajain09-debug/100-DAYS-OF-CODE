#include <stdio.h>

int main() {
    int n, i, suffix = 1;

    scanf("%d", &n);

    int nums[n], answer[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    answer = 1;
    for (i = 1; i < n; i++) {
        answer[i] = answer[i - 1] * nums[i - 1];
    }

    for (i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    for (i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}

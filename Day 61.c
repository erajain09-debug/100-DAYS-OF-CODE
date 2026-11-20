#include <stdio.h>

int main() {
    int n, k, i, j, firstNeg;

    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    for (i = 0; i <= n - k; i++) {
        firstNeg = 0;
        for (j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                firstNeg = arr[i + j];
                break;
            }
        }
        printf("%d", firstNeg);
        if (i < n - k) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}

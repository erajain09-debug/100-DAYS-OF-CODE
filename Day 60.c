#include <stdio.h>

int main() {
    int n, k, i, j, maxVal;

    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    for (i = 0; i <= n - k; i++) {
        maxVal = arr[i];
        for (j = 1; j < k; j++) {
            if (arr[i + j] > maxVal) {
                maxVal = arr[i + j];
            }
        }
        printf("%d", maxVal);
        if (i < n - k) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}

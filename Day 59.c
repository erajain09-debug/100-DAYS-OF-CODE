#include <stdio.h>

int main() {
    int n, k, i, windowSum = 0, maxSum;

    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    for (i = 0; i < k; i++) {
        windowSum += arr[i];
    }
    maxSum = windowSum;

    for (i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        if (windowSum > maxSum) {
            maxSum = windowSum;
        }
    }

    printf("%d\n", maxSum);

    return 0;
}

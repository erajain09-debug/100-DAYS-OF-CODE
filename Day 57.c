#include <stdio.h>

int main() {
    int n, i, j, prevGreater;

    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        prevGreater = -1;
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j];
                break;
            }
        }
        printf("%d", prevGreater);
        if (i < n - 1) {
            printf(",");
        }
    }
    printf("\n");

    return 0;
}

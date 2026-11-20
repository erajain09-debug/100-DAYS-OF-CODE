#include <stdio.h>

int main() {
    int r, c, i, j, isSymmetric = 1;

    scanf("%d %d", &r, &c);

    int matrix[r][c];
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (r != c) {
        isSymmetric = 0;
    } else {
        for (i = 0; i < r; i++) {
            for (j = i + 1; j < c; j++) {
                if (matrix[i][j] != matrix[j][i]) {
                    isSymmetric = 0;
                    break;
                }
            }
            if (!isSymmetric) {
                break;
            }
        }
    }

    if (isSymmetric) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}

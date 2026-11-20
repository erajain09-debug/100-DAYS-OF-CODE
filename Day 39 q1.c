#include <stdio.h>

int main() {
    int r, c, i, j, limit, isDistinct = 1;

    scanf("%d %d", &r, &c);

    int matrix[r][c];
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    limit = r < c ? r : c;

    for (i = 0; i < limit; i++) {
        for (j = i + 1; j < limit; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct) {
            break;
        }
    }

    if (isDistinct) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}

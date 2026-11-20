#include <stdio.h>

int main() {
    int r, c, i, j, d, row, col, first = 1;

    scanf("%d %d", &r, &c);

    int matrix[r][c];
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (d = 0; d < r + c - 1; d++) {
        if (d % 2 == 0) {
            row = d < r ? d : r - 1;
            col = d - row;
            while (row >= 0 && col < c) {
                if (!first) {
                    printf(" ");
                }
                printf("%d", matrix[row][col]);
                first = 0;
                row--;
                col++;
            }
        } else {
            col = d < c ? d : c - 1;
            row = d - col;
            while (col >= 0 && row < r) {
                if (!first) {
                    printf(" ");
                }
                printf("%d", matrix[row][col]);
                first = 0;
                row++;
                col--;
            }
        }
    }
    printf("\n");

    return 0;
}

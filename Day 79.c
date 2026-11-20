#include <stdio.h>

int main() {
    FILE *fp;
    int num, sum = 0, count = 0;
    double avg = 0.0;

    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error opening numbers.txt!\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count > 0) {
        avg = (double)sum / count;
    }

    printf("Sum = %d\nAverage = %.2f\n", sum, avg);

    return 0;
}

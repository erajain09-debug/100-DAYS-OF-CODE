#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main() {
    int n, i, topIndex = 0;

    scanf("%d", &n);

    struct Student s[n];

    for (i = 0; i < n; i++) {
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    printf("Topper: %s (Marks: %g)\n", s[topIndex].name, s[topIndex].marks);

    return 0;
}

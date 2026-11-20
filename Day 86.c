#include <stdio.h>

enum Menu {
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main() {
    char op[20];
    int a, b;
    enum Menu choice;

    scanf("%s %d %d", op, &a, &b);

    if (op[0] == 'A' || op[0] == 'a' || op[0] == '1') {
        choice = ADD;
    } else if (op[0] == 'S' || op[0] == 's' || op[0] == '2') {
        choice = SUBTRACT;
    } else {
        choice = MULTIPLY;
    }

    switch (choice) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }

    return 0;
}

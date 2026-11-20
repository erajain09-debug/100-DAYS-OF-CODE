#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    char input[20];
    enum Status s;

    scanf("%s", input);

    if (input[0] == 'S' || input[0] == 's' || input[0] == '0') {
        s = SUCCESS;
    } else if (input[0] == 'F' || input[0] == 'f' || input[0] == '1') {
        s = FAILURE;
    } else {
        s = TIMEOUT;
    }

    switch (s) {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
    }

    return 0;
}

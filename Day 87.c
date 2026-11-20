#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    char input[20];
    enum Role r;

    scanf("%s", input);

    if (input[0] == 'A' || input[0] == 'a' || input[0] == '0') {
        r = ADMIN;
    } else if (input[0] == 'U' || input[0] == 'u' || input[0] == '1') {
        r = USER;
    } else {
        r = GUEST;
    }

    switch (r) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
    }

    return 0;
}

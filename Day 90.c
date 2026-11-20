#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    enum Gender gender;
};

int main() {
    char input[20];
    struct Person p;

    scanf("%s", input);

    if (input[0] == 'M' || input[0] == 'm' || input[0] == '0') {
        p.gender = MALE;
    } else if (input[0] == 'F' || input[0] == 'f' || input[0] == '1') {
        p.gender = FEMALE;
    } else {
        p.gender = OTHER;
    }

    if (p.gender == MALE) {
        printf("Male\n");
    } else if (p.gender == FEMALE) {
        printf("Female\n");
    } else {
        printf("Other\n");
    }

    return 0;
}

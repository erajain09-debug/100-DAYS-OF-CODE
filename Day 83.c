#include <stdio.h>

enum Month {
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};

int main() {
    char input[20];
    enum Month m;

    scanf("%s", input);

    if ((input[0] == 'J' || input[0] == 'j') && (input[1] == 'A' || input[1] == 'a')) m = JAN;
    else if (input[0] == 'F' || input[0] == 'f') m = FEB;
    else if ((input[0] == 'M' || input[0] == 'm') && (input[2] == 'R' || input[2] == 'r')) m = MAR;
    else if ((input[0] == 'A' || input[0] == 'a') && (input[1] == 'P' || input[1] == 'p')) m = APR;
    else if ((input[0] == 'M' || input[0] == 'm') && (input[2] == 'Y' || input[2] == 'y')) m = MAY;
    else if ((input[0] == 'J' || input[0] == 'j') && (input[2] == 'N' || input[2] == 'n')) m = JUN;
    else if ((input[0] == 'J' || input[0] == 'j') && (input[2] == 'L' || input[2] == 'l')) m = JUL;
    else if ((input[0] == 'A' || input[0] == 'a') && (input[1] == 'U' || input[1] == 'u')) m = AUG;
    else if (input[0] == 'S' || input[0] == 's') m = SEP;
    else if (input[0] == 'O' || input[0] == 'o') m = OCT;
    else if (input[0] == 'N' || input[0] == 'n') m = NOV;
    else m = DEC;

    switch (m) {
        case FEB:
            printf("28 or 29 days\n");
            break;
        case APR:
        case JUN:
        case SEP:
        case NOV:
            printf("30 days\n");
            break;
        default:
            printf("31 days\n");
            break;
    }

    return 0;
}

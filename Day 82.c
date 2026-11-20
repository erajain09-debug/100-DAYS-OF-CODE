#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    char input[20];
    enum TrafficLight signal;

    scanf("%s", input);

    if (input[0] == 'R' || input[0] == 'r' || input[0] == '0') {
        signal = RED;
    } else if (input[0] == 'Y' || input[0] == 'y' || input[0] == '1') {
        signal = YELLOW;
    } else {
        signal = GREEN;
    }

    switch (signal) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
    }

    return 0;
}

#include <stdio.h>
int main() {
    float celsius;
    scanf("%f", &celsius);
    float fahrenheit = (celsius * 9.0 / 5.0) + 32;
    
    printf("Fahrenheit=%.0f\n", fahrenheit);
    
    return 0;
}

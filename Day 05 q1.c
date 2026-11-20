#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, simpleInterest, compoundInterest;

    scanf("%lf %lf %lf", &principal, &rate, &time);

    simpleInterest = (principal * rate * time) / 100.0;
    compoundInterest = principal * pow((1.0 + rate / 100.0), time) - principal;

    printf("Simple Interest=%g, Compound Interest=%.2f\n", simpleInterest, compoundInterest);

    return 0;
}

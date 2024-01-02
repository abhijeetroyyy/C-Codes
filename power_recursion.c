// Write a program  to calculate the power of a number using recursion
#include <stdio.h>
double power(double base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    if (exponent > 0) {
        return base * power(base, exponent - 1);
    } else {
        return 1 / (base * power(base, -exponent - 1));
    }
}

int main() {
    double base = 2.5;
    int exponent = 3;
    double result = power(base, exponent);
    printf("%.2lf^%d = %.2lf\n", base, exponent, result);

    return 0;
}

// // Write a program to calculate the factorial of a number using recursion
// #include <stdio.h>

// unsigned long long factorial(int n) {
//     if (n == 0 || n == 1) {
//         return 1;
//     } else {
//         return n * factorial(n - 1);
//     }
// }

// int main() {
//     int number = 5;
//     if (number < 0) {
//         printf("Factorial is not defined for negative numbers.\n");
//     } else {
//         unsigned long long result = factorial(number);
//         printf("Factorial of %d = %llu\n", number, result);
//     }

//     return 0;
// }
#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int result = factorial(number);
    printf("The factorial of %d is %d\n", number, result);

    return 0;
}


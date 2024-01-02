//Write a program to print the fibonacii series using recursion
#include <stdio.h>
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
void printFibonacciSeries(int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    
    int numTerms = 10;    
    printf("Fibonacci Series up to %d terms:\n", numTerms);
    printFibonacciSeries(numTerms);

    return 0;
}

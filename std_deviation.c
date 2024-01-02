//Write a program to calculate the standard deviation in c
#include <stdio.h>
#include <math.h>
double calculateMean(int arr[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}
double calculateStandardDeviation(int arr[], int n) {
    double mean = calculateMean(arr, n);
    double sumSquaredDifferences = 0;
    for (int i = 0; i < n; i++) {
        sumSquaredDifferences += pow(arr[i] - mean, 2);
    }
    double meanSquaredDifferences = sumSquaredDifferences / n;
    double standardDeviation = sqrt(meanSquaredDifferences);
    return standardDeviation;
}
int main() {
    int data[] = {2, 4, 4, 4, 5, 5, 7, 9};
    double result = calculateStandardDeviation(data, sizeof(data) / sizeof(data[0]));
    printf("Standard Deviation: %lf\n", result);

    return 0;
}

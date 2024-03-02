#include <iostream>

double array_mean(int array[], int n) {
    // Check if the size parameter is less than 1
    if (n < 1) {
        return 0.0;
    }

    // Calculate the sum of elements
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += array[i];
    }

    // Calculate the average and cast sum to double for precise division
    double average = double(sum) / n;

    return average;
}

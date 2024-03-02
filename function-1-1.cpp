#include <iostream>

int array_sum(int array[], int n) {
    // Check if the size parameter is less than 1
    if (n < 1) {
        return 0;
    }

    // Calculate the sum of elements
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += array[i];
    }

    return sum;
}

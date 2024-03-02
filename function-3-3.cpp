#include <iostream>
#include <unordered_map>

double weighted_average(int array[], int n) {
    if (n < 1) {
        return 0.0;
    }
    std::unordered_map<int, int> frequencyMap;
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        frequencyMap[array[i]]++;
        sum += array[i];
    }
    for (const auto& entry : frequencyMap) {
        sum += entry.first * (static_cast<double>(entry.second) / n);
    }
    return sum;
}
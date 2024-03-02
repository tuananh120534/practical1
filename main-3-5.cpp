#include <iostream>
extern double sum_even(double array[], int n);
int main() {
    double myArray[] = {1.5, 2.3, 3.7, 4.2, 5.1};
    int size = 5;

    double result = sum_even(myArray, size);
    std::cout << "Sum of elements in even positions: " << result << std::endl;

    return 0;
}

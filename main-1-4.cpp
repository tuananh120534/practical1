#include <iostream>
extern int sum_two_arrays(int array[], int secondarray[], int n);
int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {6, 7, 8, 9, 10};
    int size = 5;
    int result = sum_two_arrays(array1, array2, size);
    std::cout << "Sum of two arrays: " << result << std::endl;

    return 0;
}
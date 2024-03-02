#include <iostream>
extern int median_array(int array[], int n);
int main() {
    int oddSizeArray[] = {3, 5, 2, 1, 4};
    int oddSize = 5;

    int evenSizeArray[] = {3, 5, 2, 1, 4, 6};
    int evenSize = 6;

    int emptyArray[] = {};
    int emptySize = 0;

    std::cout << "Median of Odd Size Array: " << median_array(oddSizeArray, oddSize) << std::endl;
    std::cout << "Median of Even Size Array: " << median_array(evenSizeArray, evenSize) << std::endl;
    std::cout << "Median of Empty Array: " << median_array(emptyArray, emptySize) << std::endl;

    return 0;
}
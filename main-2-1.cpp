#include <iostream>
extern int min_element(int array[], int n);
int main() {
    int myArray[] = {5, 3, 9, 1, 7};
    int size = 5;
    int result = min_element(myArray, size);
    std::cout << "Minimum element in the array: " << result << std::endl;
    return 0;
}
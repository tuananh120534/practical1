#include <iostream>
extern int max_element(int array[], int n);
int main() {
    int myArray[] = {5, 3, 9, 1, 7};
    int size = 5;
    int result = max_element(myArray, size);
    std::cout << "Maximum element in the array: " << result << std::endl;
    return 0;
}
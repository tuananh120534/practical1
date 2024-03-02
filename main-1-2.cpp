#include <iostream>
extern int array_mean(int array[], int n);
int main() {
    
    int myArray[] = {1, 2, 3, 4, 5};
    int size = 5;

    double result = array_mean(myArray, size);

    std::cout << "Mean of array elements: " << result << std::endl;

    return 0;
}
#include <iostream>
extern int num_count(int array[], int n, int number);
int main() {
    // Example usage
    int myArray[] = {2, 2, 6, 7, 2, 5, 2};
    int size = 7;
    int targetNumber = 3;

    int result = num_count(myArray, size, targetNumber);

    std::cout << "Number of elements equal to " << targetNumber << ": " << result << std::endl;

    return 0;
}
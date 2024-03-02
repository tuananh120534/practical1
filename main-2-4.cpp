#include <iostream>
extern bool is_ascending(int array[], int n);
int main() {
    int ascendingArray[] = {1, 2, 3, 4, 5};
    int ascendingSize = 5;
    int descendingArray[] = {5, 4, 3, 2, 1};
    int descendingSize = 5;

    int emptyArray[] = {};
    int emptySize = 0;

    std::cout << "Ascending Array: " << is_ascending(ascendingArray, ascendingSize) << std::endl;
    std::cout << "Descending Array: " << is_ascending(descendingArray, descendingSize) << std::endl;
    std::cout << "Empty Array: " << is_ascending(emptyArray, emptySize) << std::endl;
    return 0;
}
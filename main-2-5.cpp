#include <iostream>
extern bool is_descending(int array[], int n);
int main() {
    int descendingArray[] = {5, 4, 3, 2, 1};
    int descendingSize = 5;
    int ascendingArray[] = {1, 2, 3, 4, 5};
    int ascendingSize = 5;
    int emptyArray[] = {};
    int emptySize = 0;

    std::cout << "Descending Array: " << is_descending(descendingArray, descendingSize) << std::endl;
    std::cout << "Ascending Array: " << is_descending(ascendingArray, ascendingSize) << std::endl;
    std::cout << "Empty Array: " << is_descending(emptyArray, emptySize) << std::endl;

    return 0;
}
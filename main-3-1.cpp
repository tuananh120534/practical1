#include <iostream>
extern bool is_fanarray(int array[], int n);
int main() {
    int fanArray1[] = {1, 2, 3, 2, 1};
    int fanArray1Size = 5;

    int fanArray2[] = {2, 4, 4, 2};
    int fanArray2Size = 4;

    int notFanArray1[] = {1, 2, 1, 2, 1};
    int notFanArray1Size = 5;

    int notFanArray2[] = {1, 3, 5, 4, 2};
    int notFanArray2Size = 5;

    std::cout << "Fan Array 1: " << is_fanarray(fanArray1, fanArray1Size) << std::endl;
    std::cout << "Fan Array 2: " << is_fanarray(fanArray2, fanArray2Size) << std::endl;
    std::cout << "Not Fan Array 1: " << is_fanarray(notFanArray1, notFanArray1Size) << std::endl;
    std::cout << "Not Fan Array 2: " << is_fanarray(notFanArray2, notFanArray2Size) << std::endl;

    return 0;
}
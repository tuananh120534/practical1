#include <iostream>

void two_five_nine(int array[], int n) {
    if (n < 1) {
        std::cout << "2:0;5:0;9:0;" << std::endl;
        return;
    }
    int countTwo = 0, countFive = 0, countNine = 0;
    for (int i = 0; i < n; i++) {
        switch (array[i]) {
            case 2:
                countTwo++;
                break;
            case 5:
                countFive++;
                break;
            case 9:
                countNine++;
                break;
        }
    }
    std::cout << "2:" << countTwo << ";5:" << countFive << ";9:" << countNine << ";" << std::endl;
}
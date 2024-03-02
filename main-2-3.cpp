#include <iostream>
extern void two_five_nine(int array[], int n);
int main() {
    int myArray[] = {2, 5, 9, 2, 9, 9, 5, 2, 2, 9};
    int size = 10;

    two_five_nine(myArray, size);
    return 0;
}

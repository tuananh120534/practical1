#include <iostream>

bool is_ascending(int array[], int n) {
    if (n > 0) {
        for (int i = 1; i < n; i++) {
            if (array[i] < array[i - 1]) {
                return false;
            }
        }
        return true; 
    } else {
        return false; 
    }
}

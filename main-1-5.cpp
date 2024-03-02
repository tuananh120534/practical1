#include <iostream>
extern int count_evens(int number);
int main() {
    int givenNumber = 10;

    int result = count_evens(givenNumber);

    std::cout << "Number of even numbers between 1 and " << givenNumber << ": " << result << std::endl;

    return 0;
}
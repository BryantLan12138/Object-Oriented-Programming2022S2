#include <iostream>
using namespace std;

extern int min_element(int[], int);

int main() {
    int array[5] = {2, 1, 4, 6, 8};
    std::cout << "The number is: " << min_element(array, 5) << std::endl;
    return 0;
}
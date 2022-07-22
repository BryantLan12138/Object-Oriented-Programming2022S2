#include <iostream>
using namespace std;

extern int max_element(int[], int);

int main() {
    int array[5] = {2, 16, 4, 6, 8};
    std::cout << "The number is: " << max_element(array, 5) << std::endl;
    return 0;
}
#include <iostream>
using namespace std;

extern int is_ascending(int[], int);

int main() {
    int array[6] = {1, 5, 9, 11, 13, 22};
    std::cout << is_ascending(array, 6) << std::endl;
    return 0;
}
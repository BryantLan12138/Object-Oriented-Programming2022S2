#include <iostream>
using namespace std;

extern int is_descending(int[], int);

int main() {
    int array[6] = {22, 13, 11, 9, 3, 2};
    std::cout << is_descending(array, 6) << std::endl;
    return 0;
}
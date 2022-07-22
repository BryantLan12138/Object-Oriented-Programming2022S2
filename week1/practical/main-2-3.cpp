#include <iostream>
using namespace std;

extern int two_five_nine(int[], int);

int main() {
    int array[2] = {2, 9};
    // std::cout << two_five_nine(array, 6) << std::endl;
    two_five_nine(array, 2);
    return 0;
}
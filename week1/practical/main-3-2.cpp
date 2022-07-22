#include <iostream>
using namespace std;

extern int median_array(int[], int);

int main() {
    int array[5] = {3,5,2,1,4};
    std::cout << median_array(array, 5) << std::endl;
    return 0;
}
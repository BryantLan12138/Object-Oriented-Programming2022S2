#include <iostream>

using namespace std;

extern void count_digits(int array[4][4]);

int main() {
    int test[4][4] = {{1,2,0,0}, {4,5,0,0}, {7,8,0,0}, {9, 0, 0, 0} };
    count_digits(test);
}
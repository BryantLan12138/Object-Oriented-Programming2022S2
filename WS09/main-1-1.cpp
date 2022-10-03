#include <iostream>
using namespace std;

/**
 * A very simple function that adds two input argument numbers together.
 * Returns the sum of the two arguments.
 */
int add(int lhs, int rhs) {
    return lhs + rhs;
}


int main() {
    /*positive integers */
    if (add(13579, 2) != 13581) {
        std::cout << "Test 1 failed!" << std::endl;
    }

    if (add(2, 3) != 5) {
        std::cout << "Test 2 failed!" << std::endl;
    }

    if (add(-11, 12) != 1) {
        std::cout << "Test 3 failed!" << std::endl;
    }
    /* mixture */
    if (add(-1, 0) == -1) {
        std::cout << "Test 4 passed!" << std::endl;
    }

    if (add(-11, 21) == 10) {
        std::cout << "Test 5 passed!" << std::endl;
    }

    /* negative */
    if (add(-11, -21) != -32) {
        std::cout << "Test 6 failed!" << std::endl;
    }

    if (add(-11, -31) != -42) {
        std::cout << "Test 7 failed!" << std::endl;
    }

    /* edge cases */
    if (add(0, -1) != -1) {
        std::cout << "Test 8 failed!" << std::endl;
    }

    if (add(-1, 1) != 0) {
        std::cout << "Test 9 failed!" << std::endl;
    }
}
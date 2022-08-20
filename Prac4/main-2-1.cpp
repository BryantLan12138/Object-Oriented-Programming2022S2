#include <iostream>
using namespace std;

extern void multiples_of_seven(int *nums,int length);

int main() {
    int*  num = new int[5]{7, 14, 21, 28 ,36};
    multiples_of_seven(num, 5);
    delete num;
}
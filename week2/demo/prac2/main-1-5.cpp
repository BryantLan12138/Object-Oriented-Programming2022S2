#include <iostream>

using namespace std;

extern void print_summed(int array1[3][3],int array2[3][3]);

int main() {
    int matrix1[3][3] = {{0,1,2},{3,4,5},{6,7,8}};
    int matrix2[3][3] = {{0,0,0},{2,2,2},{-5,-4,8}};
    print_summed(matrix1,matrix2);

    return 0;
}
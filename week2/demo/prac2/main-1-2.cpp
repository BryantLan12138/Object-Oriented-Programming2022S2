#include <iostream>

using namespace std;

extern int is_identity(int array[10][10]);

int main() {
    int test[10][10] = {{1,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0,0},
                        {0,0,1,0,0,0,0,0,0,0},
                        {0,0,0,1,0,0,0,0,0,0},
                        {0,0,0,0,1,0,0,0,0,0},
                        {0,0,0,0,0,1,0,0,0,0},
                        {0,0,0,0,0,0,1,0,0,0},
                        {0,0,0,0,0,0,0,1,0,0},
                        {0,0,0,0,0,0,0,0,1,0},
                        {0,0,0,0,0,0,0,0,0,1}};
    cout << is_identity(test) << endl;

    return 0;
}
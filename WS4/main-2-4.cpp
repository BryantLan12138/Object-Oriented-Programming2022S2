#include <iostream>
#include <string>

using namespace std;

extern float add_op(float left, float right);

extern float subtract_op(float left, float right);

extern float multiply_op(float left, float right);

extern float arithmetic_ops(float (*oop)(float,float), float left, float right);

int main() {
    int l, r;
    cin >> l >> r;
    cout << arithmetic_ops(subtract_op,l, r) << endl;
    return 0;
}
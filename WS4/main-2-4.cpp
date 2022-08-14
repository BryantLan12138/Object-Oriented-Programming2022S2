#include <iostream>
#include <string>

using namespace std;

extern float add_op(float left, float right);

extern float subtract_op(float left, float right);

extern float multiply_op(float left, float right);

extern float arithmetic_ops(float left, float right, float (*op)(float,float));

int main() {
    int l, r;
    cin >> l >> r;
    cout << arithmetic_ops(l, r, add_op) << ' ' << arithmetic_ops(l, r, subtract_op) << arithmetic_ops(l, r, multiply_op) << '\n';
    return 0;
}
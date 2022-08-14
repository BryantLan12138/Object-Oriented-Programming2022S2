#include <iostream>
#include <string>

using namespace std;

extern float add_op(float left, float right);

extern float subtract_op(float left, float right);

extern float arithmetic_ops(float left, float right, string op);

int main() {
    int l, r;
    string s;
    cin >> l >> r >> s;
    cout << arithmetic_ops(l, r, s) << ' ' << arithmetic_ops(l, r, s) << '\n';
    return 0;
}
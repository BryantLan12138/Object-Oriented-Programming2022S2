#include <iostream>
using namespace std;

// transform decimal to binary number 
void print_binary_str(std::string decimal_number) 
{
    string result = "";
    int original_decimal = stoi(decimal_number);

    while(original_decimal != 0) 
    {
        // adding '0' or '1' at front depends on the result after % operation
        result = (char)('0' + (original_decimal % 2)) + result;
        original_decimal /= 2;
    }

    cout << result << "\n";
}
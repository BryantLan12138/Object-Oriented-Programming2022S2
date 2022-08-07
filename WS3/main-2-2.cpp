#include <iostream>

using namespace std;

int main(){

	int value = 2;
	// int* add_value = &value;
	int* add_value = &value;

	double value_2nd = 2;
	// int* add_value = &value;
	double* ptr = &value_2nd;


	cout<<add_value<<" "<<*add_value<<endl;

	
	return 0;
}
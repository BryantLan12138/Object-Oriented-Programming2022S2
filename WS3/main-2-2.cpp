#include <iostream>

using namespace std;

int main(){

	int value = 2;
	int* add_value = &value;

	cout<<add_value<<" "<<*add_value<<endl;

	
	return 0;
}
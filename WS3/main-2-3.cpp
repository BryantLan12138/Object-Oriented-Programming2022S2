#include <iostream>

using namespace std;

int main(){

	int value = 42;
	int* add_value = &value;

	*add_value = *add_value + 5;
	cout<<*add_value<<endl;


	*add_value = *add_value - 2; 
	cout<<*add_value<<endl;

	
	return 0;
}
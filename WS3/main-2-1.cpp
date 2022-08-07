#include <iostream>

using namespace std;

int main(){

	int value = 1;
	int* add_value = &value;
	int* array = new int[5];
	int* arr_ptr = array;

	cout<<add_value<<" "<<*add_value<<endl;
	cout<<arr_ptr<<" "<<endl;


	//hex decimal adress, base 16 is easy to convert to binary and is easier to be read by people the adress keeps changing ie its stored in a differnet part of the memory every time
	//the program is run. OS assigns a new space in the memory every time the program is run.

	return 0;
}
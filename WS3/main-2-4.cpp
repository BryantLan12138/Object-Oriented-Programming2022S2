#include <iostream>

using namespace std;

int main(){

	int array[] = {1,2,3,4,5,6,7};

	int* ptr = array;

	for(int i=0; i<6; i++){
		cout<<*(ptr + i)<<" ";
	}
	cout<<*(ptr + 6)<<endl;

	return 0;
}
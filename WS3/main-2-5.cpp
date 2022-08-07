#include <iostream>

using namespace std;

int main(){

	double array[2][2] = {{0.5,1.5},{2.5,3.5}};

	double* ptr = array[0];

	for(int i=0; i<2; i++){
		for(int j=0; j<1; j++){
			cout<<*(ptr+2*i+j)<<" ";
		}
		cout<<*(ptr+2*i+1)<<endl;
	}

	return 0;
}
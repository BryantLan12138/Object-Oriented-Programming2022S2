#include <iostream>

using namespace std;

int main(){

	double array[2][2] = {{0.5,1.5},{2.5,3.5}};
	// double array_1d[2] = {0};
	// double* twoptr = array_1d;
	double* ptr = array[0];

	for(int i=0; i<2; i++){
		// for(int j=0; j<1; j++){
		for(int j=0; j<2; j++){
			if(j != 1)
				cout<<*(ptr+2*i+j)<<" ";
				//array[0][1]
				//array[1][0]
			else
				cout<<*(ptr+2*i+1)<<endl;

		}
	}

	return 0;
}
/** 0.5 ,1.5
 ** 2.5, 3.5 
 ** 4.5, 5.5
 */
//   ^
//   |
//  ptr

// 	*(ptr) = 0.5
// 	*(ptr + j) = 1.5

//  0x123120
//  0x123128

//  bits byte
//  int/float takes 4 byte
//  double takes 8 byte
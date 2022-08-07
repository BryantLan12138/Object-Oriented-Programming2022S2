#include <iostream>

using namespace std;

void printer(int array[10][10]){
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			if(j<9){
				cout << array[i][j] <<" ";
			}else{
				cout << array[i][j];
			}
		}
		cout << endl;
	}
}
#include <iostream>

extern double weightedaverage(int*, int);

using namespace std;

int main(){

	int n = 5;
	int vec[] = {1,1,1,1,1};

	double wave = weightedaverage(vec, n);

	cout << wave << endl;

	return 0;
}
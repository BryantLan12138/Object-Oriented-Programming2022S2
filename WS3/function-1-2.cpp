#include <iostream>

using namespace std;

void print_class(string courses[4], string students[], int report_card[][4], int nstudents){

	//headings
	cout<<"Report Card ";
	for(int i=0; i<3; i++){
		cout<<courses[i]<<" ";
	}
	cout<<courses[3]<<endl;

	//student and grades
	for(int i=0; i<nstudents; i++){
		cout<<students[i]<<" ";
		for(int j=0; j<3; j++){
			cout<<report_card[i][j]<<" ";
		}
		cout<<report_card[i][3]<<endl;
	}

}
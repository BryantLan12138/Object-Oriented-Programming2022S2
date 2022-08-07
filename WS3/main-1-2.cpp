#include <iostream>
#include <string>

using namespace std;

extern void print_class(string courses[4], string students[], int report_card[][4], int nstudents);

int main(){

	string courses[4] = {"Maths","Physics","Programing","Geography"};

	string students[3] = {"Matt","Jodie","Tom"};

	int report_card[3][4] = {{4,3,4,8},{8,9,9,2},{5,5,5,5}};

	int nstudents = 3; 


	print_class(courses, students, report_card, nstudents);

	return 0;
}
#include <iostream>

using namespace std;

void print_class(string courses[4], string students[], int report_card[][4], int nstudents)
{
    cout << "Report Card" << " ";
    for(int i = 0; i < 4; i++) 
    {
        if(i != 3) 
        {
            cout << courses[i] << " ";
        }
        else 
        {
            cout << courses[i] << endl;
        }
    }

    for(int i = 0; i < nstudents; i++) 
    {
        cout << students[i] << " ";
        for(int j = 0; j < 4; j++) 
        {
            if(j != 3) 
            {
                cout << report_card[i][j] << " ";
            }
            else 
            {
                cout << report_card[i][j] << endl;
            }
        }
    }
}
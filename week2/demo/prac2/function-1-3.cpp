#include <iostream>

using namespace std;

void count_digits(int array[4][4]) {
    int i = 0, j = 0;
    int total_zero = 0, total_one = 0, total_two = 0, total_three = 0, total_four = 0,
        total_five = 0, total_six = 0, total_seven = 0, total_eight = 0, total_nine = 0;

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            if(array[i][j] == 0)
            {
                total_zero += 1;
            }

            if(array[i][j] == 1)
            {
                total_one += 1;
            }

            if(array[i][j] == 2)
            {
                total_two += 1;
            }

            if(array[i][j] == 3)
            {
                total_three += 1;
            }

            if(array[i][j] == 4)
            {
                total_four += 1;
            }

            if(array[i][j] == 5)
            {
                total_five += 1;
            }

            if(array[i][j] == 6)
            {
                total_six += 1;
            }

            if(array[i][j] == 7)
            {
                total_seven += 1;
            }

            if(array[i][j] == 8)
            {
                total_eight += 1;
            }

            if(array[i][j] == 9)
            {
                total_nine += 1;
            }
        }
    }
    cout << "0:" << total_zero << ";1:" << total_one << ";2:" << total_two << ";3:" << total_three << ";4:" << total_four << ";5:" << total_five
         << ";6:" << total_six << ";7:" << total_seven << ";8:" << total_eight << ";9:" << total_nine << ";" << endl;
}
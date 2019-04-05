//
// Created by soc on 11/23/18.
//

#include <iostream>

using namespace std;

int main()
{
    int threeRowsthreeColumns [3][3] = \
    {{-501, 205, 2016}, {989, 101, 296}, {303, 456, 596}};

    cout << "Row 0: " << threeRowsthreeColumns [0][0] << " " \
                    << threeRowsthreeColumns [0][1] << " " \
                    << threeRowsthreeColumns [1][2] << endl;

    cout << "Row 1: " << threeRowsthreeColumns [1][0] << " " \
                    << threeRowsthreeColumns [1][1] << " " \
                    << threeRowsthreeColumns [2][2] << endl;

    cout << "Row 2: " << threeRowsthreeColumns [2][0] << " " \
                    << threeRowsthreeColumns [2][1] << " " \
                    << threeRowsthreeColumns [2][2] << endl;

    return 0;
}
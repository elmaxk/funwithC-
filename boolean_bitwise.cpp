//
// Created by soc on 2018-12-20.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter first value: ";
    int value1 = 0;
    cin >> value1;
    cout << "Enter second value: ";
    int value2 = 0;
    cin >> value2;

    cout << "Bitwise right shift: " << (value1 >> value2) << endl;

    cout << "Bitwise AND assignment: " << (value1 & value2) << endl;

    cout << "Bitwise OR assignment: " << (value1 | value2) << endl;

    cout << "Bitwise XOR assignment: " << (value1 ^ value2) << endl;

    return 0;
}

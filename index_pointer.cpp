//
// Created by soc on 2019-02-08.
//

#include <iostream>
using namespace std;

int main()
{
    const int ARRAY_LEN = 5;

    // Static array of 5 integers initialized
    int myNumbers[ARRAY_LEN] = {45, 76, -626, 100534, 899};

    // Pointer initialized to first element in array
    int* pointToNums = myNumbers;

    cout << "Display array using pointer syntax, operator*" << endl;
    for (int index = 0; index < ARRAY_LEN; ++index)
        cout << "Element " << index << " = " << *(myNumbers + index) << endl;

    cout << "Display array using ptr with array syntax, operator[]" << endl;
    for (int index = 0; index < ARRAY_LEN; ++index)
        cout << "Element " << index << " = " << pointToNums[index] << endl;

    return 0;
}
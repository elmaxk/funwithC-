//
// Created by soc on 2019-02-04.
//

#include <iostream>
using namespace std;

int main()
{
    // Request for memory space for an int
    int* pointsToAnAge = new int;

    // Use the allocated memory to store a number
    cout << "Enter you dog's age: ";
    cin >> *pointsToAnAge;

    // Use indirection operator* to access value
    cout << "Age " << *pointsToAnAge << " is sored at "\
    << hex << pointsToAnAge << endl;

    delete pointsToAnAge;  // release memory

    return 0;
}
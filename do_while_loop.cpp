//
// Created by soc on 2019-01-01.
//

#include <iostream>

using namespace std;

int main()
{
    char userSelection = 'x';   // Initial value

    do
    {
        cout << "Enter two integers: " << endl;
        int num1 = 0, num2 = 0;
        cin >> num1;
        cin >> num2;

        cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        cout << "Press x to exit (x) or any other key to continue" << endl;

        cin >> userSelection;

    }   while (userSelection != 'x');

    cout << "Goodbye!" << endl;

    return 0;
}
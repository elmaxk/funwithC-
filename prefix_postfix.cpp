//
// Created by soc on 2018-12-08.
//

#include <iostream>
using namespace std;

int main()
{
    int startValue = 101;
    cout << "Start value of integer being operated: " << startValue << endl;

    int postfixIncrement = startValue++;
    cout << "Result of Postfix Increment = " << postfixIncrement << endl;
    cout << "After postfix increment, startValue = " << startValue << endl;

    startValue = 101; // Reset

    int prefixIncrement = ++startValue;
    cout << "Result of prefix increment = " << prefixIncrement << endl;
    cout << "After Prefix Increment, startValue = " << startValue << endl;

    startValue = 101; // Reset

    int postfixDecrement = startValue--;
    cout << "Result of Postfix Decrement = " << postfixDecrement << endl;
    cout << "After postfix Decrement, startValue = " << startValue << endl;

    startValue = 101; // Reset

    int prefixDecrement = --startValue;
    cout << "Result of Prefix Decrement = " << prefixDecrement << endl;
    cout << "After Prefix Decrement, startValue = " << startValue << endl;

    return 0;

}
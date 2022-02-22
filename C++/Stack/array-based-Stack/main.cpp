#include <iostream>
#include "StackType.h"
using namespace std;


int main()
{
    cout << "testing Program\n-------------------------------\n" << endl;
    StackType myStack;
    myStack.push(21);
    myStack.push(4);

    cout << myStack.pop() << endl;
    myStack.push(9);
    myStack.push(11);
    myStack.push(5);

    cout << "is this empty stack " << myStack.isEmpty() << endl;

    cout << "is this full stack " << myStack.isFull() << endl;

    cout << myStack.pop() << endl;

    return 0;
}


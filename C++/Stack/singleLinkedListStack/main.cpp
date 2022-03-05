#include <iostream>
#include "linkedStack.h"

using namespace std;

int main()
{
    // created instance of the linked stack
    LinkedStack me;

    // pushed some values into it
    me.push(3);
    me.push(1);
    me.push(234);
    me.push(8);
    me.push(9);

    // display to see if they were saved correctly
    me.display();

    // it should not be empty
    cout << "this stack is empty == " << me.isEmpty() << endl;

    // now pop single value and display
    int x = me.pop();
    me.display();


    // let's make it empty (user lever)
    for(int i = me.getLength() ; i > 0 ; i--)
    {
        cout << "the poped value is " << me.pop() << endl;
    }

    // it should be empty now
    cout << "the stack is empty now == " << me.isEmpty() << endl;

    // display it when it's empty too
    me.display();


    return 0;
}

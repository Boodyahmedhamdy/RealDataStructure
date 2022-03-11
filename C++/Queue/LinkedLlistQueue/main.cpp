#include <iostream>
#include "QueueType.h"
using namespace std;

int main()
{
    cout << "testing program \n-----------------------\n" << endl;

    QueueType ahmed;

    cout << "is the queue empty " << ahmed.isEmpty() << endl;

    ahmed.inQueue(1);
    ahmed.inQueue(2);
    ahmed.inQueue(3);
    ahmed.inQueue(4);
    ahmed.inQueue(5);
    ahmed.inQueue(6);

    ahmed.display();

    cout << "-------------------" << endl;

    cout << "the first dequeued value is " << ahmed.deQueue() << endl;
    cout << "the second dequeued value is " << ahmed.deQueue() << endl;

    cout << "-------------------" << endl;

    cout << "now the length is " << ahmed.getLen() << endl;

    cout << "-------------------" << endl;

    cout << "the third dequeued value is " << ahmed.deQueue() << endl;
    cout << "the fourth dequeued value is " << ahmed.deQueue() << endl;

    cout << "-------------------" << endl;

    cout << "now the length is " << ahmed.getLen() << endl;

    cout << "-------------------" << endl;

    cout << "is the queue full " << ahmed.isFull() <<endl;



    return 0;
}

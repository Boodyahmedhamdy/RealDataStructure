#ifndef QUEUETYPE_H_INCLUDED
#define QUEUETYPE_H_INCLUDED
#include <stdlib.h>
typedef struct node {
    int data;
    struct node* next = NULL;
}Node ;

class QueueType
{
    // head and tail
    Node* head, *tail;

    // length of the queue (number of nodes)
    int len;

public:

    // constructors
    QueueType();

    // getter for len
    int getLen();

    // checkers
    bool isEmpty();
    bool isFull();

    // functionality
    void inQueue(int value);

    int deQueue();


    // more from me
    void display();





};
#endif // QUEUETYPE_H_INCLUDED

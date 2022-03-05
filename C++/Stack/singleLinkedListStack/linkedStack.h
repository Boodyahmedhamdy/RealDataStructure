#ifndef LINKEDSTACK_H_INCLUDED
#define LINKEDSTACK_H_INCLUDED

// the node object
typedef struct node {
    int data;
    struct node * next;
}Node;

class LinkedStack {

private:
    Node* top;
    int len;
public:
    // constructors
    LinkedStack();

    // length getter (number of nodes)
    int getLength();

    // checkers status for the stack
    bool isEmpty();
    bool isFull();

    // functionality of the stack itself
    void push(int value);
    int pop();

    // additional from me
    void display();

};

#endif // LINKEDSTACK_H_INCLUDED

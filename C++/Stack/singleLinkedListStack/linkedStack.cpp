#include "linkedStack.h"
#include <iostream>
#include <stdlib.h>

LinkedStack::LinkedStack()
{
    // initailize the stack by setting length of it by zero
    // and it's top is pointing to NULL (nothing)
    this->top = NULL;
    this->len = 0;
}

int LinkedStack::getLength()
{
    // simple getter method
    return this->len;
}

bool LinkedStack::isEmpty()
{
    // checks if the top of the stack is pointing to something or not
    return (this->top == NULL);
}

bool LinkedStack::isFull()
{
    // no prove that the stack is full in dynamic allocation
    return false;
}

void LinkedStack::push(int value)
{
    // create a new node to hold the value and connect later
    // hold the value entered by the user
    // lat't the new node next points to the current top (when stack is empty the top is null)
    // update the top to make it the new node that holds the value
    // update length of the stack by increasing it by 1

    Node* theNewNode = (Node*) malloc(sizeof(Node));
    theNewNode->data = value;
    theNewNode->next = this->top;
    this->top = theNewNode;
    this->len++;
}

int LinkedStack::pop()
{
    // only if the stack is not empty you can pop from it (to avoid runtime errors)
    // create a new node to hold the top
    // create variable to hold the value(data) of the new node
    // update the top and make it the next of the old top
    // update the length of the stack by decreasing it by 1
    // free the new node
    // return the held value
    if(this->top != NULL)
    {
        Node* valueHolder = this->top;
        int value = valueHolder->data;

        this->top = this->top->next;
        this->len--;

        free(valueHolder);
        return value;
    }
}

void LinkedStack::display()
{
    // create temp node to hold the top and walk through it without changing the original stack
    // WHILE IT ISN'T EMPTY
        // print the temp data
        // update temp and make it the next node to the temp
    // print null(simple word)
    Node* temp = this->top;
    while(temp != NULL)
    {
        std::cout << temp->data << " -> ";
        temp = temp->next;
    }
    std::cout << "NULL" << std::endl;
}

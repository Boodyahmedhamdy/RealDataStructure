#include "StackType.h"
#define SIZE 10

    // constructor
    StackType::StackType()
    {
        // initializing the top by -1
        // so when pushing should increase top first then assign value
        // and when popping should get the value first then decrement the top
        this->top = -1;
    }

    // getter
    int StackType::getTop()
    {
        return this->top;
    }

    // checkers
    bool StackType::isEmpty()
    {
        return (this->top == -1);
    }


    bool StackType::isFull()
    {
        return (this->top == SIZE-1);
    }

    // functionality
    void StackType::push(int element)
    {
        this->data[++this->top] = element;
    }

    int StackType::pop()
    {
        return (this->data[this->top--]);
    }



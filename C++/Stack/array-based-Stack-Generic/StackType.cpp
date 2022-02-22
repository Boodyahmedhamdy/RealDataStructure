#include "StackType.h"
#define SIZE 10


    // constructor
    template <typename T>
    StackType<T>::StackType()
    {
        // initializing the top by -1
        // so when pushing should increase top first then assign value
        // and when popping should get the value first then decrement the top
        this->top = -1;
    }

    // getter
    template <typename T>
    int StackType<T>::getTop()
    {
        return this->top;
    }

    // checkers
    template <typename T>
    bool StackType<T>::isEmpty()
    {
        return (this->top == -1);
    }

    template <typename T>
    bool StackType<T>::isFull()
    {
        return (this->top == SIZE-1);
    }

    // functionality
    template <typename T>
    void StackType<T>::push(T element)
    {
        this->data[++this->top] = element;
    }

    template <typename T>
    T StackType<T>::pop()
    {
        return (this->data[this->top--]);
    }



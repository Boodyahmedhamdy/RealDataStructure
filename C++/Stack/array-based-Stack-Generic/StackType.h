#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#define SIZE 10

template <typename T>
class StackType {

private:
    int top; // to detect the last element
    T data[SIZE]; // array of data to store elements

public:
    // constructors
    StackType();

    // getters and setters
    int getTop(); // this function is optional

    // checkers
    bool isEmpty();
    bool isFull();

    // functionality
    void push(T element);
    T pop();

};

#endif // STACK_H_INCLUDED

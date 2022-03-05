# OverView
this is a **linked List Based Stack** with the main functionality of Stack, this implementation uses **int** as an elements.

## Function / Methods
* [push](#push)
* [pop](#pop)
* [display](#display)
* [isEmpty](#isempty)
* [isFull](#isfull)


### Push 
function to add an element in the last position in the stack to be the first element to be poped *last in first out*

#### Syntax
```c++
void push(int value)
```

#### Algorithm *for developers*
1. create new node 
2. hold the value entered by the user using the new node
3. let the new node next points to the top of the stack 
4. update the top to be pointing to the new node that we created first
5. update the length of the stack *increase by 1*

---

### pop
function to get the last entered element in the stack

#### Syntax
```c++
int pop()
```

#### Algorithm
> **Note** : to avoid runtime errors only pop when the stack is not empty **this function is safe from this problem**

1. create new node to hold the top node
2. create variable to hold the new node's value(data)
3. update the top of the stack to be become the next of itself
4. update the length of the stack *Decrement by 1*
5. free the new node
6. return the value

---

### display
function to display the stack without changing it's original values


#### Syntax
```c++
void display()
```

#### Algorithm
1. create temp node to walk through the stack without changing the original data
2. make it point to the top of the stack
3. while the stack is not empty
   1. print the value of the temp node
   2. update the temp node to be the next to itself
4. print "NULL"

> **Note** : if the stack was empty and you displayed it you will get "NULL" on the screen

---

### isEmpty
function to check if the stack is empty or not

#### Syntax

```C++
bool isEmpty()
```

---

### isFull
function to check if the stack is full or not

> **Note** : always return false because nothing makes the stack is full except the memory is full 

#### Syntax
```c++
bool isFull() // always return false
```




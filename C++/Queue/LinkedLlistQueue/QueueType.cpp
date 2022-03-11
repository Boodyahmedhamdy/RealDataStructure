#include "QueueType.h"
#include <iostream>

    // constructors
    QueueType::QueueType()
    {
        // initializing both pointers to be null -- pointing to nothing
        this->head = NULL;
        this->tail = NULL;

        this->len = 0;
    }

    // getter for len
    int QueueType::getLen()
    {
        // simple getter function
        return this->len;
    }

    // checkers
    bool QueueType::isEmpty()
    {
        // whether it is full or not
        return (this->head == NULL && this->tail == NULL);
    }

    bool QueueType::isFull()
    {
        // because nothing makes it full -- so it is always full
        return false;
    }

    // functionality
    void QueueType::inQueue(int value)
    {
        // create a new node
        Node* theNewNode = (Node*)malloc(sizeof(Node));

        // let the new node hold the value passed
        theNewNode->data = value;

        // if it was empty
        if (this->head == NULL && this->tail == NULL)
        {
            // make both of head and tail look at the new node
            this->head = theNewNode;
            this->tail = theNewNode;

        }
        // if it wasn't empty
        else
        {
            // let the tail's next looks at the new node
            this->tail->next = theNewNode;

            // update the tail to be on the new node
            this->tail = theNewNode;
        }

        // in all cases the length will increase
        this->len++;
    }


    int QueueType::deQueue()
    {
        // if the queue isn't empty
        if(this->head != NULL && this->tail != NULL)
        {
            // create new node and make it look at the head
            Node* theNewNode = this->head;

            // let it hold the value of the head
            int valueHolder = theNewNode->data;

            // update the head to be the next node to it
            this->head = this->head->next;

            // if no more nodes
            if (this->head == NULL)
            {
                // make the tail points to NULL -- now it is empty
                this->tail = NULL;
            }

            // free the new node
            free(theNewNode);

            // decrement the length of the Queue
            this->len--;

            // return the held value
            return valueHolder;
        }
    }


    // more from me
    void QueueType::display()
    {
        // create temp node to move through the Queue
        // and make it look at the head of the queue
        Node* temp = this->head;

        // while the temp node is not NULL
        // when i wrote it != NULL --> i had an error (infinite Loop)
        while(temp != this->tail->next)
        {
            // print the value of the temp node
            std::cout << temp->data << " -> ";

            // update the temp node
            temp = temp->next;
        }
        // finally print NULL word to the screen to let user know it is the end
        std::cout << "NULL" << std::endl;

    }

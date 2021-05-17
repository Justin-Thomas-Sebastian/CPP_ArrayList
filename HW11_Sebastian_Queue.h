// Justin Thomas T. Sebastian
// Park University
// CS225
// Build a queue class via inheritance
// queue inherits unorderedArrayListType
// unorderedArrayListType inherits arrayListType

// queue interface file

#ifndef Queue_H
#define Queue_H

#include "HW11_Sebastian_UnorderedArrayListType.h"

//--------------
// queue (grand-sub)
//--------------
class queue : private unorderedArrayListType
{
    // Prints out elements in queue starting from the front(oldest element). Overloads << operator in arrayListType
    // Pre: ostream object (i.e. cout) and queue object
    // Post: Prints queue elements from left to right starting from oldest element.
    friend std::ostream& operator<<(std::ostream&/*INOUT*/, const queue&/*IN*/);

public:
    bool isEmpty() const; // test whether queue is empty
    // Post: returns true if queue is empty, otherwise returns false

    int size() const; // return size
    // Post: returns the number of elements in the queue

    int front() const; // returns the element at the front of the queue. This should be the "oldest" element, the same element that will be removed if deque() is called next
    // Pre: the queue is not empty
    // Post: returns the element at the front of the queue

    int back() const; // returns the element at the back of the queue. This should be the "youngest" element, the same element that was added into the queue most recently using enque()
    // Pre: the queue is not empty
    // Post: returns the element at the back of the queue

    void enque(int/*IN*/ newItem); // insert one element at the back of the queue, after its current last element (the "youngest" element before this enque)
    // Post: newItem added at the end of the queue, after the current last element

    int deque(); // remove one element from the front of the queue. The "oldest" element should be removed
    // Pre: the queue is not empty
    // Post: the item at the front of the queue is removed from the queue and returned

    queue(int/*IN*/ size = 100);
    // Post: queue initialized with capacity being size param and contains 0 elements.
    //       if no size is specified, 100 is used for the capacity  
};

#endif

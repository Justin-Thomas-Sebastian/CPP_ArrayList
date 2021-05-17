// Justin Thomas T. Sebastian
// Park University
// CS225
// Build a queue class via inheritance
// queue inherits unorderedArrayListType
// unorderedArrayListType inherits arrayListType

// queue implementation file

#include "HW11_Sebastian_Queue.h"

// Test whether queue is empty
// Post: returns true if queue is empty, otherwise returns false
bool queue::isEmpty() const 
{
    return arrayListType::isEmpty();
}

// Return size
// Post: returns the number of elements in the queue
int queue::size() const
{
    return listSize();
}

// Returns the element at the front of the queue. This should be the "oldest" element, the same element that will be removed if deque() is called next
// Pre: the queue is not empty   
// Post: returns the element at the front of the queue
int queue::front() const
{
    if (isEmpty())
    {
        std::cout << "Cannot retrieve element. Queue is empty." << std::endl;
        return -1;
    }
    else
    {
        int retItem;
        retrieveAt(0, retItem);
        return retItem;
    }
}

// Returns the element at the back of the queue. This should be the "youngest" element, the same element that was added into the queue most recently using enque()
// Pre: the queue is not empty
// Post: returns the element at the back of the queue
int queue::back() const 
{
    if (isEmpty()) 
    {
        std::cout << "Cannot retrieve element. Queue is empty." << std::endl;
        return -1;
    }
    else 
    {
        int retItem;
        retrieveAt(size() - 1, retItem);
        return retItem;
    }
}

// Insert one element at the back of the queue, after its current last element (the "youngest" element before this enque)
// Post: newItem added at the end of the queue, after the current last element
void queue::enque(int/*IN*/ newItem)
{
    insertEnd(newItem);
}

// Remove one element from the front of the queue. The "oldest" element should be removed
// Pre: the queue is not empty
// Post: the item at the front of the queue is removed from the queue and returned
int queue::deque() 
{
    int removed = front();

    if (isEmpty())
    {
        std::cout << "Deque failed. Queue is empty." << std::endl;
        return -1;
    }
    else
    {
        removeAt(0);
    }
    return removed;
}

// Post: queue initialized with capacity being size param and contains 0 elements.
//       if no size is specified, 100 is used for the capacity
queue::queue(int/*IN*/ size) : unorderedArrayListType(size) {}

//--------------------
// non-member, friend
//--------------------

// Prints out elements in queue starting from the front(oldest element). Overloads << operator in arrayListType
// Pre: ostream object (i.e. cout) and queue object
// Post: Prints queue elements from left to right starting from oldest element.
std::ostream& operator<<(std::ostream& out/*INOUT*/, const queue& obj/*IN*/)
{
    queue temp(obj); //copy constructor from arrayListType

    while (!temp.isEmpty())
    {
        out << temp.deque() << " "; //prints out the returned element from deque() i.e. the element currently being removed
    }
 
    return out;
} //end operator<<




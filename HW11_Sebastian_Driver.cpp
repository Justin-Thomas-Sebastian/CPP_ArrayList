// Justin Thomas T. Sebastian
// Park University
// CS225
// Build a queue class via inheritance
// queue inherits unorderedArrayListType
// unorderedArrayListType inherits arrayListType

// Driver file. Includes test cases

#include "HW11_Sebastian_Queue.h"

int main()
{
    //constructor
    std::cout << "Testing constructor..." << std::endl;
    queue q1(-1);  //should initialize with 100 maxSize and print out notification
    queue q2(15);
    std::cout << std::endl;

    //Test data
    q2.enque(11);
    q2.enque(22);
    q2.enque(33);
    q2.enque(44);
    q2.enque(55);

    //isEmpty()
    std::cout << "Testing isEmpty()..." << std::endl;
    std::cout << "Is queue 1 empty?: " << q1.isEmpty() << std::endl; //should output 1(true)
    std::cout << "Is queue 2 empty?: " << q2.isEmpty() << std::endl; //should output 0(false)
    std::cout << std::endl;

    //size()
    std::cout << "Testing size()..." << std::endl;
    std::cout << "Size of queue 1 is: " << q1.size() << std::endl; //should ouput 0
    std::cout << "Size of queue 2 is: " << q2.size() << std::endl; //should ouput 5
    std::cout << std::endl;

    //front()
    std::cout << "Testing front()..." << std::endl;
    std::cout << "Retrieving the front/oldest element from queue 1: " << q1.front() << std::endl; //should print error message and return -1
    std::cout << "Retrieving the front/oldest element from queue 2: " << q2.front() << std::endl; //should print 11
    std::cout << std::endl;

    //back()
    std::cout << "Testing back()..." << std::endl;
    std::cout << "Retrieving the back/youngest element from q1: " << q1.back() << std::endl; //should print error message and return -1
    std::cout << "Retrieving the back/youngest element from q2: " << q2.back() << std::endl; //should print 55
    std::cout << std::endl;

    //enque() and << operator
    std::cout << "Testing enque() and << operator..." << std::endl;
    std::cout << "Adding the number 23 to queue 1..." << std::endl;
    q1.enque(23);
    std::cout << "Queue 1 is now: " << q1 << std::endl; //should print 23
    std::cout << "Adding the number 8 to queue 2..." << std::endl;  
    q2.enque(8);
    std::cout << "Queue 2 is now: " << q2 << std::endl; //should print 11 22 33 44 55 8
    std::cout << std::endl;

    //deque()
    std::cout << "Testing deque()..." << std::endl;
    std::cout << "Removing oldest element from queue 1..." << std::endl;
    q1.deque();
    std::cout << "Queue 1 is now: " << q1 << std::endl; //should print empty
    std::cout << "Removing oldest element from queue 2..." << std::endl;
    q2.deque();
    std::cout << "Queue 2 is now: " << q2 << std::endl; //should print 22 33 44 55 8
 
} // end main





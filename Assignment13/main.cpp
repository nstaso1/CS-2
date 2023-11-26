// Write your own version of a class that will create a Dynamic Queue of 
// double data type.The dynamic queue class needs to have  the following members:
//
// Member Functions. Constructor, Destructor, enqueue, dequeue, isEmpty,and clear. 
// 
// Demonstrate the class with a driver program.

#include <iostream>

#include "Dynamic-Queue.h"

using namespace std;

int main()
{
    Queue mqueue;

    mqueue.printQ();

    mqueue.enqueue(12.3);
    mqueue.enqueue(6.2);
    mqueue.enqueue(23.5);
    mqueue.enqueue(56.5);

    mqueue.printQ();

    double test;

    mqueue.dequeue(test);
    cout << "Dequeue: " << test << endl;

    mqueue.dequeue(test);
    cout << "Dequeue: " << test << endl;

    mqueue.printQ();

    mqueue.getRidOf();

    mqueue.printQ();

    mqueue.dequeue(test);

    return 0;
}

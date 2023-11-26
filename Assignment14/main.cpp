// Lab 14
//
// Write your own version of the class template that will create a static queue of any data type. Demonstrate the class with a driver program.

#include <iostream>

#include "StaticQueue.h"

using namespace std;

int main()
{   
    StaticQueue<int> queue = StaticQueue<int>(5);

    int val;

    queue.dequeue(val);

    queue.enqueue(23);
    queue.enqueue(14);
    queue.enqueue(8);
    queue.enqueue(7);
    queue.enqueue(16);
    queue.enqueue(37);

    queue.printQ();

    queue.dequeue(val);
    cout << "Value was dequeued: " << val << endl;

    queue.dequeue(val);
    cout << "Value was dequeued: " << val << endl;

    queue.printQ();

    return 0;
}

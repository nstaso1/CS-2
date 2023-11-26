// Write your own version of a class that will create a stactic stack of 
// String data type. The static stack class needs to have  the following members:
// 
// 1. Member Variables. stackArray (a pointer variable which is going to be used 
// to dynamically  allocate an array for storage), stacksize (an integer to hold the 
// size of the stack) and top (an integer that is used to mark the top of the stack).
//
// 2. Member Functions. Constructor  (it accepts an integer argument that specifies 
// the size of the stak), Destructor, isFull, isEmpty, pop, and push. 
//
// Demonstrate the class with a driver program.


#include <iostream>

#include "Math-Stack.h"

using namespace std;

int main()
{
    cout << "Program running..." << endl;

    Stack  stack = Stack(7);
    int arr1;
    int arr2;

    stack.pop(arr1);

    stack.push(20);
    stack.push(15);
    stack.push(13);
    stack.push(10);
    stack.push(27);

    stack.printS();

    stack.pop(arr1);
    cout << "1st word got popped: " << arr1 << endl;

    stack.pop(arr2);
    cout << "2nd word got popped: " << arr2 << endl;
    
    stack.add();
    cout << "First two elements were added. A sum of them was made." << endl;
    stack.sub();
    cout << "First two elements were subtracted. A difference of them was made." << endl;
    

    
    stack.printS();

    return 0;
}

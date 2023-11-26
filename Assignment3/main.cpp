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

#include "Static-Stack.h"

using namespace std;

int main()
{
    cout << "Program running..." << endl;

    Stack  stack = Stack(7);
    string str1;
    string str2;

    stack.pop(str1);

    stack.push("yessir");
    stack.push("what");
    stack.push("awesome");
    stack.push("lego");
    stack.push("years");

    stack.printS();

    stack.pop(str1);        
    cout << "1st word got popped: " << str1 << endl;

    stack.pop(str2);
    cout << "2nd word got popped: " << str2 << endl;

    stack.printS();

    return 0;
}

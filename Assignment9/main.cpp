// Design your own static Array list class to hold a series of integers. The class should have the 
// following member function: insert, remove, isFull, find, getlength, makeEmpty and showValues.  
// Demonstrate the class with a driver program. 
//
// Note: You need to submit three files (specification file, implementation file and the main program file)

#include <iostream>

#include "myArrayList.h"

using namespace std;

int main()
{
    cout << "Creating an ArrayList" << endl;
    myArrayList myList = myArrayList();

    cout << "Inserting 5 numbers (3, 10, 7, 2, 9)" << endl;
    myList.insertE(3);
    myList.insertE(10);
    myList.insertE(7);
    myList.insertE(2);
    myList.insertE(9);

    cout << "myList.isFull():    " << myList.isFull() << endl;
    cout << "myList.getLength(): " << myList.getLength() << endl;

    cout << "myList.remove()" << endl;
    myList.removeE();

    cout << "myList.isFull():    " << myList.isFull() << endl;
    cout << "myList.getLength(): " << myList.getLength() << endl;
    cout << "myList.find(2):     " << myList.find(2) << endl;

    cout << "myList.showValues()" << endl;
    myList.showValues();

    cout << "myList.makeEmpty()" << endl;
    myList.makeEmpty();

    cout << "myList.showValues()" << endl;
    myList.showValues();



    return 0;
}

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
    cout << "Creating ArrayList" << endl;
    ArrayList myList = ArrayList();

    cout << "Inserting 5 numbers (7, 22, 9, 7, 14)..." << endl;
    myList.insert(7);
    myList.insert(22);
    myList.insert(9);
    myList.insert(7);
    myList.insert(14);

    
    myList.isF();
    cout << endl;
    cout << "Length: " << myList.getL() << endl;

    cout << "Removed last element." << endl;
    myList.removeE();

    myList.isF();
    cout << endl;
    cout << "Length: " << myList.getL() << endl;
    cout << "Found: " << myList.find(2) << endl;

   
    myList.showV();

  
    myList.makeE();
    

 
    myList.showV();
    



    return 0;
}

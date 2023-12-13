// Lab 10
// 
// Design our own linked list class to hold a series of integers. The class should have member 
// function for appending, inserting, and deleting nodes. Do not forget to add a destructor that 
// destroy the list. Demonstrate the class with a driver program. 
//
// Linear Search Lab 11
//
// Modify the linked list class you created in the previous programming Assignment. Add to  a print member fuction. 
// The function should display all the values in the linke list. In addition, include a member function named search 
// that returns the position of specific value, x, in the linked list. The first node in the list is at position 0, 
// the second node is at position 1, and so on. If x is not found on the list, the search should return -1, Test these
// member  functions using an appropiate driver program.

#include <iostream>

#include "linkedList.h"

using namespace std;

int main()
{
    LinkedList list = LinkedList();

    cout << "Adding new values" << endl;
    list.appendN(11);
    list.appendN(27);
    list.appendN(34);
    list.appendN(19);
    list.appendN(82);
    list.appendN(77);
    list.displayV();

    cout << "Inserting 40 at position 2" << endl;
    list.insertN(40, 2);
    list.displayV();

    cout << "Deleting last node" << endl;
    list.deleteN();
    list.displayV();

    cout << "Searching for 19" << endl;
    cout << "Location: " << list.search(82) << endl;

    cout << "Searching for 100" << endl;
    cout << "Location: " << list.search(100) << endl;

    return 0;
}

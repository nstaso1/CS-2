// Lab 10
// 
// Design our own linked list class to hold a series of integers. The class should have member 
// function for appending, inserting, and deleting nodes. Do not forget to add a destructor that 
// destroy the list. Demonstrate the class with a driver program. 

#include <iostream>

#include "myLinkedList.h"

using namespace std;

int main()
{
    
    myLinkedList dalist = myLinkedList();

    dalist.addN(12);
    dalist.addN(20);
    dalist.addN(3);
    dalist.addN(23);
    dalist.addN(8);
    
    dalist.insertN(7, 3);
    
    
    

    dalist.deleteN();

    dalist.displayV();

    cout << "Trying to find 23: " << endl << dalist.findN(23) << endl;
    
    cout << "Trying to find 50: " << endl << dalist.findN(50) << endl;
    



    return 0;
}

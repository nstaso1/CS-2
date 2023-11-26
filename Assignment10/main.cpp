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

    dalist.addN(10);
    dalist.addN(22);
    dalist.addN(3);
    dalist.addN(17);
    dalist.addN(8);
    
    dalist.insertN(7, 3);

    dalist.deleteN();

    dalist.displayV();




    return 0;
}

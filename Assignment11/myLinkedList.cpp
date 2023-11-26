#include <iostream>

#include "myLinkedList.h"

using namespace std;

myLinkedList::myLinkedList()
{
    _head = nullptr;
}

myLinkedList::~myLinkedList()
{
    while (_head != nullptr)
    {
        deleteN();
    }
}

void myLinkedList::addN(int v)
{
    ListN* newN = new ListN;
    newN->_val = v;
    newN->_next = nullptr;

    
    if (_head == nullptr)
    {
        _head = newN;
        return;
    }

    
    ListN* temp = _head;
    while (temp->_next != nullptr)
    {
        temp = temp->_next;
    }

    // set new node to be _next of temp
    temp->_next = newN;
}

void myLinkedList::displayV()
{
    if (_head == nullptr)
    {
        cout << "LinkedList is empty." << endl;
        return;
    }

    cout << "Displaying values: ";
    ListN* temp = _head;
    while (temp != nullptr)
    {
        cout << temp->_val << " ";
        temp = temp->_next;
    }
    cout << endl;
}

void myLinkedList::insertN(int v, int local)
{
    ListN* newN = new ListN;
    newN->_val = v;

    
    if (_head == nullptr)
    {
        _head = newN;
        _head->_next = nullptr;
        return;
    }

    
    if (local == 0)
    {
        newN->_next = _head;
        _head = newN;
        return;
    }

    ListN* temp1 = _head;
    ListN* temp2 = temp1->_next;
    int       nodeN = 0;

    while (nodeN != local - 1)
    {
        temp1 = temp1->_next;

        if (temp1->_next == nullptr)
        {
            temp2 = nullptr;
            break;
        }

        temp2 = temp1->_next;

        nodeN++;
    }

    temp1->_next = newN;
    newN->_next = temp2;
}

int myLinkedList::findN(int v)
{
    int loc = 0;

    ListN* temp = _head;
    while (temp != nullptr) 
    {
        if (temp->_val == v) {
            cout << "The index of " << v << " is ";
            return loc;
        }
        temp = temp->_next;
        loc++;
    }
    cout << "The index was not found. This value does not exist in this list." << endl;
    return -1;
}

void myLinkedList::deleteN()
{
    if (_head == nullptr)
    {
        cout << "LinkedList empty." << endl;
        return;
    }

    ListN* temp = _head;
    while (temp->_next->_next != nullptr)
    {
        temp = temp->_next;
    }

    delete temp->_next;
    temp->_next = nullptr;
}



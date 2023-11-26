#include <iostream>

#include "Dynamic-Queue.h"

using namespace std;

DynamicQueue::DynamicQueue()
{
    dafront = nullptr;
    darear = nullptr;
}

DynamicQueue::~DynamicQueue()
{
    getRidOf();
}


void DynamicQueue::dequeue(int& inte)
{
    if (isEmpty())
    {
        cout << "The Queue has nothing in it." << endl;
        return;
    }

    QueueNode* temp = dafront->itSnext;
    inte = dafront->daval;
    delete dafront;
    dafront = temp;
}

void DynamicQueue::enqueue(int inte)
{
    QueueNode* newNode = new QueueNode;
    newNode->daval = inte;
    newNode->itSnext = nullptr;

    if (dafront == nullptr)
    {
        dafront = newNode;
        darear = newNode;
        newNode->itSnext = nullptr;
        return;
    }

    darear->itSnext = newNode;
    darear = newNode;
}


bool DynamicQueue::isEmpty()
{
    return dafront == nullptr ? true : false;
}

void DynamicQueue::printQ()
{
    cout << "Trying to print the queue: ";

    if (isEmpty())
    {
        cout << "Queue is empty." << endl;
        return;
    }

    QueueNode* temp = dafront;
    while (temp != nullptr)
    {
        cout << temp->daval << " ";
        temp = temp->itSnext;
    }

    cout << endl;
}

void DynamicQueue::getRidOf()
{
    QueueNode* temp = dafront;
    while (temp != nullptr)
    {
        temp = temp->itSnext;
        delete dafront;
        dafront = temp;
    }
}


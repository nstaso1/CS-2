#include <iostream>
#include <string>

#include "Static-Stack.h"

using namespace std;


Stack::Stack(int size)
{
    stackArr = new string[size];
    stackS = size;
    tops = -1;
}

Stack::~Stack()
{
    delete[] stackArr;
}


bool Stack::isEmpty()
{
    return tops == -1 ? true : false;
}

bool Stack::isFull()
{
    return tops == stackS - 1 ? true : false;
}

void Stack::printS()
{
    if (isEmpty())
    {
        cout << "Stack has nothing." << endl;
        return;
    }

    cout << "Printing stack..." << endl;

    for (int i = stackS - 1; i >= 0; i--)
    {
        cout << "#" << i << ": " << stackArr[i] << endl;
    }
}


void Stack::push(string str)
{
    if (isFull())
    {
        cout << "Stack is full." << endl;
    }
    else
    {
        tops++;
        stackArr[tops] = str;
    }
}

void Stack::pop(string& str)
{
    if (isEmpty())
    {
        cout << "There is nothing in stack." << endl;
    }
    else
    {
        str = stackArr[tops];
        stackArr[tops] = "";
        tops--;
    }
}




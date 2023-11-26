#include <iostream>
#include <string>

#include "Math-Stack.h"

using namespace std;


Stack::Stack(int size)
{
    stackArr = new int[size];
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


void Stack::push(int arr)
{
    if (isFull())
    {
        cout << "Stack is full." << endl;
    }
    else
    {
        tops++;
        stackArr[tops] = arr;
    }
}

void Stack::pop(int& arr)
{
    if (isEmpty())
    {
        cout << "There is nothing in stack." << endl;
    }
    else
    {
        arr = stackArr[tops];
        stackArr[tops] = 0;
        tops--;
    }
}

void Stack::add()
{
    int x, sum;
    pop(x);
    pop(sum);
    sum += x;
    push(sum);
}

void Stack::sub()
{
    int x, sum;
    pop(x);
    pop(sum);
    x -= sum;
    push(x);
}




#include <string>
#ifndef STATIC_STACK_H
#define STATIC_STACK_H

using namespace std;

class MathStack:IntStack
{
public:
    Stack(int size);
    ~Stack();

    bool isFull();
    bool isEmpty();
    void pop(string& string);
    void push(string string);
    void printStack();

private:
    int* _stackArray;
    int     _stackSize;
    int     _top;
};
#endif#pragma once

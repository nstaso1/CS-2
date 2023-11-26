#include <string>
#ifndef STATIC_STACK_H
#define STATIC_STACK_H

using namespace std;

class Stack
{
public:
    Stack(int size);
    ~Stack();

    
    void push(string str);
    void pop(string& str);
    bool isFull();
    bool isEmpty();
    void printS();

private:
    string* stackArr;
    int     stackS;
    int     tops;
};
#endif

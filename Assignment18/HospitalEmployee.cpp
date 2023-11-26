#include <iostream>
#include <string>

#include "HospitalEmployee.h"

using namespace std;
hospitalEmployee::hospitalEmployee(string name, string field)
{

    _name = name;
    _field = field;
    onCall = false;
}
void hospitalEmployee::greeting()
{
    cout << "Hello, my name is " + _name << " I work in " + _field + ". How can I help you?" << endl;
}

void hospitalEmployee::changeShift()
{
    onCall = !onCall;
}

bool hospitalEmployee::isOnCall()
{
    return onCall;
}

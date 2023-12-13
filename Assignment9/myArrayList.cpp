#include <iostream>

#include "myArrayList.h"

using namespace std;

void ArrayList::insert(int val)
{
    if (isF()) {
        cout << "Array is full." << endl;
        return;
    }

    numss[elementss] = val;
    elementss++;
}

void ArrayList::removeE()
{
    numss[elementss - 1] = 0;
    elementss--;
}

bool ArrayList::isF()
{
    return sizeof(numss) / sizeof(numss[0]) == elementss;
}

int ArrayList::find(int index)
{
    return numss[index];
}

int ArrayList::getL()
{
    return elementss;
}

void ArrayList::makeE()
{
    for (int i = 0 ; i < elementss ; i++)
    {
        numss[i] = 0;
    }

    elementss = 0;
}

void ArrayList::showV()
{
    if (elementss == 0) {
        cout << "Array empty" << endl;
        return;
    }

    cout << "Array values: ";

    for (int i = 0 ; i < elementss ; i++)
    {
        cout << numss[i];

        if (i == elementss - 1) {
            cout << endl;
        } else {
            cout << ", ";
        }
    }
}

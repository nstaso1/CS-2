
#include "myArrayList.h"
#include <iostream>
using namespace std;



void myArrayList::insertE(int e)
{

    
    if (length < SIZE)
    {
         array[length] = e;
         length++;

        cout << "New element added. New array is: " << endl;
        for (int i = 0; i < length; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }

    else if (length == SIZE)
    {
        cout << "Array is full." << endl;
    }
    

    

}
void myArrayList::removeE()
{
    
    
    if (length > 0)
    {
        
        length--;

        cout << "Last element array removed. New array is: " << endl;
        for (int i = 0; i < length; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }

    else if (length == 0)
    {
        cout << "Array is empty." << endl;
    }


}
void myArrayList::isFull()
{
    if (length == SIZE)
    {
        cout << "The array is full." << endl;
    }
    else if (length < SIZE)
    {
        cout << "The array is not full. There is " << SIZE - length << " elements left to put in." << endl;
    }
}
void myArrayList::findE(int value)
{
    

    for (int i = 0; i < length; i++)
    {
        if (array[i] == value)
        {
            cout << value << " is in the array." << endl;
            return;
        }
    }
    
    cout << value << " is not in the array." << endl;

}
void myArrayList::getLength()
{
    cout << "The array length is: " << length << endl;
}

void myArrayList::makeEmpty()
{
    length = 0;
    cout << "The array is now empty." << endl;
}
void myArrayList::showValues()
{
   cout << "Here are current values of the array:" << endl;
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}




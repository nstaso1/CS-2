// Number-Array2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;

class numArr
{
private:
   
    int arrS;
    float* darr;

public:

    
    numArr(int size);

    
    ~numArr();

  
    void setIndex(int e, float num);

    float getIndex(int e);

    float getLow();

    float getHigh(); 

    float getAvg();
};

numArr::numArr(int size)
{
    arrS = size;
    darr = new float[size];
}

numArr::~numArr()
{
    delete[] darr;
}

float numArr::getIndex(int e)
{
    return darr[e];
}
void numArr::setIndex(int e, float num)
{
    darr[e] = num;
}


float numArr::getLow()
{
    float lowest = darr[0];
    for (int i = 0; i < arrS; i++)
    {
        if (darr [i] < lowest)
        {
            lowest = darr[i];
        }
    } return lowest;
}

float numArr::getHigh()
{
    float highest = darr[0];
    for (int i = 0; i < arrS; i++)
    {
        if (darr[i] > highest)
        {
            highest = darr [i];
        }
    } return highest;
}



float numArr::getAvg()
{
    {
        float sum = 0;
        for (int i = 0; i < arrS; i++)
        {
            sum += darr[i];
        } return sum / arrS;
    }
}


const int SIZE = 5;


int main()
{
    numArr fArray(SIZE);
    fArray.setIndex(0, 1.4);
    fArray.setIndex(1, 2.3);
    fArray.setIndex(2, 3.13);
    fArray.setIndex(3, 6.66);
    fArray.setIndex(4, 7.711);

    for (int i = 0; i < SIZE; i++)
    {
        cout << "The value of fArray[" << i << "] = " << fArray.getIndex(i) << endl;
    }

    cout << fArray.getHigh() << endl;
    cout << fArray.getLow() << endl;
    cout << fArray.getAvg() << endl;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

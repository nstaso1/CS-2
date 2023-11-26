// Payroll.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <iomanip>



using namespace std;


class PRoll
{
public:
    
    PRoll();

    double getG();

    double getHRate(), getHWorked();


    void setPRoll(double hRate, double hWorked);

    
    

private:
    double mhRate, mhWorked;
};

void inputPRoll(PRoll pRoll[], int size);
void printPRoll(PRoll pRoll[], int size);

int main()
{
    const int SIZE = 7;
    PRoll pRoll[SIZE];


    inputPRoll(pRoll, SIZE);

    printPRoll(pRoll, SIZE);


    return 0;
}

PRoll::PRoll()
{
    mhRate = 0;
    mhWorked = 0;   
}

double PRoll::getHWorked()
{
    return mhWorked;
}

double PRoll::getHRate()
{
    return mhRate;
}

double PRoll::getG()
{
    return mhWorked * mhRate;
}

void printPRoll(PRoll pRoll[], int size)
{
    cout << fixed;
    cout << "\nHere are the payrolls:" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Employee #" << i << ", Hours worked: " << setprecision(2) << pRoll[i].getHWorked() << ", Hourly rate: $" << setprecision(2) << pRoll[i].getHRate()
            << ", Gross pay: $" << setprecision(2) << pRoll[i].getG()
            << endl;
    }
}

void inputPRoll(PRoll pRoll[], int size)
{
    for (int w = 0; w < size; w++)
    {
        double hRate, hWorked;

        cout << "Employee #" << w << endl;
        cout << "Hourly rate: ";
        cin >> hRate;
        cout << "Hours worked: ";
        cin >> hWorked;

        pRoll[w].setPRoll(hRate, hWorked);
    }
}

void PRoll::setPRoll(double hRate, double hWorked)
{
    mhRate = hRate;

    if (hWorked > 60) {
        mhWorked = 60;
    }
    else {
        mhWorked = hWorked;
    }
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to creat   e new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

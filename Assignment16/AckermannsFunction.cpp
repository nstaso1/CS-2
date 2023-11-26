// AckermannsFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int ack(int n, int m);
int main()
{
    int A1, A2, A3, A4, A5, A6, A7;
    A1 = ack(0, 0);
    A2 = ack(0, 1);
    A3 = ack(1, 1);
    A4 = ack(1, 2);
    A5 = ack(1, 3);
    A6 = ack(2, 2);
    A7 = ack(3, 2);

    cout << "The value of A1(0,0) = " << A1 << endl;
    cout << "The value of A2(0,0) = " << A2 << endl;
    cout << "The value of A3(0,0) = " << A3 << endl;
    cout << "The value of A4(0,0) = " << A4 << endl;
    cout << "The value of A5(0,0) = " << A5 << endl;
    cout << "The value of A6(0,0) = " << A6 << endl;
    cout << "The value of A7(0,0) = " << A7 << endl;

}

int ack(int m, int n)
{
    if (m == 0) {
        return n + 1;
    }
    else if ((m > 0) && (n == 0)) {
        return ack(m - 1, 1);
    }
    else if ((m > 0) && (n > 0)) {
        return ack(m - 1, ack(m, n - 1));
    }
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

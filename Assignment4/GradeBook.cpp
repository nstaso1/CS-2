// Grade-Book.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string names[5] = {};
    char grades[5] = {'A', 'B', 'C', 'D', 'F'};
    double testScores1[4] = {};
    double testScores2[4] = {};
    double testScores3[4] = {};
    double testScores4[4] = {};
    double testScores5[4] = {};

    cout << "Please enter student1 name" << endl;
    cin >> names[0];

    cout << "Please enter student2 name" << endl;
    cin >> names[1];

    cout << "Please enter student3 name" << endl;
    cin >> names[2];

    cout << "Please enter student4 name" << endl;
    cin >> names[3];

    cout << "Please enter student5 name" << endl;
    cin >> names[4];

    cout << "Please enter student5 test score" << endl;
    cin >> testScores1[0];

    if (testScores1[0] < 0 || testScores1[0] > 100)
    {
        exit(0);
    }

    cout << "Please enter student1 test score" << endl;
    cin >> testScores1[1];

    if (testScores1[1] < 0 || testScores1[1] > 100)
    {
        exit(0);
    }

    cout << "Please enter student1 test score" << endl;
    cin >> testScores1[2];

    if (testScores1[2] < 0 || testScores1[2] > 100)
    {
        exit(0);
    }

    cout << "Please enter student1 test score" << endl;
    cin >> testScores1[3];

    if (testScores1[3] < 0 || testScores1[3] > 100)
    {
        exit(0);
    }
    

    cout << "Please enter student2 test score" << endl;
    cin >> testScores2[0];

    if (testScores2[0] < 0 || testScores2[0] > 100)
    {
        exit(0);
    }

    cout << "Please enter student2 test score" << endl;
    cin >> testScores2[1];

    if (testScores2[1] < 0 || testScores1[1] > 100)
    {
        exit(0);
    }

    cout << "Please enter student2 test score" << endl;
    cin >> testScores2[2];

    if (testScores2[2] < 0 || testScores2[2] > 100)
    {
        exit(0);
    }

    cout << "Please enter student2 test score" << endl;
    cin >> testScores2[3];

    if (testScores2[3] < 0 || testScores2[3] > 100)
    {
        exit(0);
    }
    

    cout << "Please enter student3 test score" << endl;
    cin >> testScores3[0];

    if (testScores3[0] < 0 || testScores3[0] > 100)
    {
        exit(0);
    }

    cout << "Please enter student3 test score" << endl;
    cin >> testScores3[1];

    if (testScores3[1] < 0 || testScores3[1] > 100)
    {
        exit(0);
    }

    cout << "Please enter student3 test score" << endl;
    cin >> testScores3[2];

    if (testScores3[2] < 0 || testScores3[2] > 100)
    {
        exit(0);
    }

    cout << "Please enter student3 test score" << endl;
    cin >> testScores3[3];

    if (testScores3[3] < 0 || testScores1[3] > 100)
    {
        exit(0);
    }

    cout << "Please enter student4 test score" << endl;
    cin >> testScores4[0];

    if (testScores4[0] < 0 || testScores4[0] > 100)
    {
        exit(0);
    }

    cout << "Please enter student4 test score" << endl;
    cin >> testScores4[1];

    if (testScores4[1] < 0 || testScores4[1] > 100)
    {
        exit(0);
    }

    cout << "Please enter student4 test score" << endl;
    cin >> testScores4[2];

    if (testScores4[2] < 0 || testScores4[2] > 100)
    {
        exit(0);
    }

    cout << "Please enter student4 test score" << endl;
    cin >> testScores4[3];

    if (testScores4[3] < 0 || testScores4[3] > 100)
    {
        exit(0);
    }

    cout << "Please enter student5 test score" << endl;
    cin >> testScores5[0];

    if (testScores5[0] < 0 || testScores5[0] > 100)
    {
        exit(0);
    }

    cout << "Please enter student5 test score" << endl;
    cin >> testScores5[1];

    if (testScores5[1] < 0 || testScores5[1] > 100)
    {
        exit(0);
    }

    cout << "Please enter student5 test score" << endl;
    cin >> testScores5[2];

    if (testScores5[2] < 0 || testScores5[2] > 100)
    {
        exit(0);
    }

    cout << "Please enter student5 test score" << endl;
    cin >> testScores5[3];

    if (testScores5[3] < 0 || testScores5[3] > 100)
    {
        exit(0);
    }

    

    double avg1 = (testScores1[0] + testScores1[1] + testScores1[2] + testScores1[3])/4;

    double avg2 = (testScores2[0] + testScores2[1] + testScores2[2] + testScores2[3])/4;

    double avg3 = (testScores3[0] + testScores3[1] + testScores3[2] + testScores3[3])/4;

    double avg4 = (testScores4[0] + testScores4[1] + testScores4[2] + testScores4[3])/4;
        
    double avg5 = (testScores5[0] + testScores5[1] + testScores5[2] + testScores5[3])/4;

    
    if (avg1 >= 90 || avg1 <= 100)
    {
        cout << grades[0];
    }

    if (avg1 >= 80 || avg1 <= 89)
    {
        cout << grades[1];
    }

    if (avg1 >= 70 || avg1 <= 79)
    {
        cout << grades[2];
    }

    if (avg1 >= 60 || avg1 <= 69)
    {
        cout << grades[3];
    }

    if (avg1 >= 0 || avg1 <= 59)
    {
        cout << grades[4];
    }

    if (avg2 >= 90 || avg2 <= 100)
    {
        cout << grades[0];
    }

    if (avg2 >= 80 || avg2 <= 89)
    {
        cout << grades[1];
    }

    if (avg2 >= 70 || avg2 <= 79)
    {
        cout << grades[2];
    }

    if (avg2 >= 60 || avg2 <= 69)
    {
        cout << grades[3];
    }

    if (avg2 >= 0 || avg2 <= 59)
    {
        cout << grades[4];
    }

    if (avg3 >= 90 || avg3 <= 100)
    {
        cout << grades[0];
    }

    if (avg3 >= 80 || avg3 <= 89)
    {
        cout << grades[1];
    }

    if (avg3 >= 70 || avg3 <= 79)
    {
        cout << grades[2];
    }

    if (avg3 >= 60 || avg3 <= 69)
    {
        cout << grades[3];
    }

    if (avg3 >= 0 || avg3 <= 59)
    {
        cout << grades[4];
    }

    if (avg3 >= 90 || avg3 <= 100)
    {
        cout << grades[0];
    }

    if (avg3 >= 80 || avg3 <= 89)
    {
        cout << grades[1];
    }

    if (avg3 >= 70 || avg3 <= 79)
    {
        cout << grades[2];
    }

    if (avg3 >= 60 || avg3 <= 69)
    {
        cout << grades[3];
    }

    if (avg3 >= 0 || avg3 <= 59)
    {
        cout << grades[4];
    }

    if (avg4 >= 90 || avg4 <= 100)
    {
        cout << grades[0];
    }

    if (avg4 >= 80 || avg4 <= 89)
    {
        cout << grades[1];
    }

    if (avg4 >= 70 || avg4 <= 79)
    {
        cout << grades[2];
    }

    if (avg4 >= 60 || avg4 <= 69)
    {
        cout << grades[3];
    }

    if (avg4 >= 0 || avg4 <= 59)
    {
        cout << grades[4];
    }

    if (avg5 >= 90 || avg5 <= 100)
    {
        cout << grades[0];
    }

    if (avg5 >= 80 || avg5 <= 89)
    {
        cout << grades[1];
    }

    if (avg5 >= 70 || avg5 <= 79)
    {
        cout << grades[2];
    }

    if (avg5 >= 60 || avg5 <= 69)
    {
        cout << grades[3];
    }

    if (avg5 >= 0 || avg5 <= 59)
    {
        cout << grades[4];
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

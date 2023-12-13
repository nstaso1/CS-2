// Test Scores #1
// 
// Write a program that dynamically allocates an array large enough to hold a user
// defined number of test scores. Once all the scores are entered, the array should 
// be passed to a function that sorts them in ascending order. Another function should
// be called that calculates the average score. The program should display the sorted
// list of scores and averages with appropriate headings. Use pointer notation rather
// than array notation whenever possible.
//
// Input Validation: Do not accept negative numbers for test scores.

#include <iostream>
#include <iomanip>

using namespace std;


void calcA(double scores[], int size, double& avgS);
void printD(double scores[], int numS, double avgS);
void swap(double& a, double& b);
void inputS(double scores[], int numS);
void sortS(double scores[], int size);


int main()
{
    double* scores;
    int     numS;
    double  avgS;

    cout << "Number of scores: ";
    cin >> numS;

    scores = new double[numS];

    inputS(scores, numS);

    sortS(scores, numS);

    calcA(scores, numS, avgS);

    printD(scores, numS, avgS);

    return 0;
}

void inputS(double scores[], int numS)
{
    for (int i = 0; i < numS; i++)
    {
        cout << "Score #" << i + 1 << ": ";
        cin >> *(scores + i);

        while (*(scores + i) < 0) {
            cout << "Invalid input! Please try again..." << endl;
            cin >> *(scores + i);
        }
    }
}

void sortS(double scores[], int size)
{
    int maxElement;
    int index;

    for (maxElement = size - 1; maxElement > 0; maxElement--)
    {
        for (index = 0; index < maxElement; index++)
        {
            if (*(scores + index) > *(scores + (index + 1))) {
                swap(*(scores + index), *(scores + (index + 1)));
            }
        }
    }
}



void calcA(double scores[], int size, double& avgS)
{
    double sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum += *(scores + i);
    }

    avgS = sum / size;
}

void printD(double scores[], int numScores, double avgS)
{
    cout << setw(15) << "Scores sorted: ";
    for (int i = 0; i < numScores; i++)
    {
        cout << *(scores + i);
        if (i != numScores - 1) {
            cout << ", ";
        }
    }
    cout << endl;
    cout << left << setw(15) << "Avg Score: " << avgS << endl;
}

void swap(double& a, double& b)
{
    double temp = a;
    a = b;
    b = temp;
}

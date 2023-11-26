// TestScores-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int avgValue(int scores[], int size);
void BubbleSort(int scores[], int size);
void SelectionSort(int scores[], int size);

int main()
{
    int average;
    int* scores = nullptr;
    int number;
    cout << "Please enter certain amount of test scores you want recorded: " << endl;
    cin >> number;

    scores = new int[number];

    
    for (int i = 0; i < number; i++)
    {
        cout << "Please enter the test score: " << endl;
        cin >> scores[i];
    }


    BubbleSort(scores, number);

        for (int i = 0; i < number; i++)
        {
            cout << scores[i] << " ";
           
        }
        cout << endl;

    average = avgValue(scores, number);

    cout << "Average: " << average;

  


}

void BubbleSort(int scores[], int size)
{
    int maxElement;
    for (maxElement = size - 1; maxElement > 0; maxElement--)
    {
        for (int i = 0; i < maxElement; i++)
        {
            if (scores[i] > scores[i + 1])
            {
                swap(scores[i], scores[i + 1]);
            }
        }
    }

}

void SelectionSort(int scores[], int size)

{

    int minElement, minIndex;
    for (int start = 0; start < (size - 1); start++)
    {
        minIndex = start;
        minElement = scores[start];
        for (int i = start + 1; i < size; i++)
        {
            if (scores[i] < minElement)
            {
                minElement = scores[i];
                minIndex = i;
            }
        }
        swap(scores[minIndex], scores[start]);
    }

}

int avgValue(int scores[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += scores[i];
    }
    int avg = total / (size);
    return avg;
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

// Sorting-Orders.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void BubbleSort(int numbers[], int size);
void SelectionSort(int numbers[], int size);
void printArray1(int numbers[], int size);
void printArray2(int numbers[], int size);

int main()
{
    int numbers[8] = { 8, 3, 6, 2, 5, 1, 7, 4 };
    int numbers2[8] = { 23, 12, 15, 18, 13, 19, 26, 33};

    cout << "Original Array1 Version" << endl;

    printArray1(numbers, 8);

    

    cout << "Modified Array1 Version" << endl;
    BubbleSort(numbers, 8);

    printArray1(numbers, 8);

   cout << "Original Array2 Version" << endl;

    
   printArray2(numbers2, 8);
   
    cout << "Modified Array2 Version" << endl;

    SelectionSort(numbers2, 8);
    printArray2(numbers2, 8);

    return 0;


}

void printArray1(int numbers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }

    cout << endl;
}

void printArray2(int numbers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }

    cout << endl;
}

 void BubbleSort(int numbers[], int size)
{
     int maxElement;
     for (maxElement = size - 1; maxElement > 0; maxElement--)
     {
         for (int i = 0; i < maxElement; i++)
         {
             if (numbers[i] > numbers[i + 1])
             {
                 swap(numbers[i], numbers[i + 1]);
             }
         }
     }
    
}

 void SelectionSort(int numbers[], int size)

 {
    
     int minElement, minIndex;
     for (int start = 0 ; start < (size -1); start++)
     {
         minIndex = start;
         minElement = numbers[start];
         for (int i = start + 1; i < size; i++)
         {
             if (numbers[i] < minElement)
             {
                 minElement = numbers[i];
                 minIndex = i;
             }
         }
         swap(numbers[minIndex], numbers[start]);
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

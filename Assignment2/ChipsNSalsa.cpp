// ChipsSalsa.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int findMax(int jars[]);
int findMin(int jars[]);
int main()
{
    string salsas[5] = { "mild", "medium", "sweet", "hot", "zesty" };
    

    int salsaM;
    int salsaMe;
    int salsaS;
    int salsaH;
    int salsaZ;

    cout << "Please enter number of jars for Mild Salsa:";
    cin >> salsaM;
    if (salsaM < 0)
    {
        exit(0);
    }
    cout << "Please enter number of jars for Medium Salsa:";
    cin >> salsaMe;
    if (salsaMe < 0)
    {
        exit(0);
    }
    cout << "Please enter number of jars for Sweet Salsa:";
    cin >> salsaS;
    if (salsaS < 0)
    {
        exit(0);
    }
    cout << "Please enter number of jars for Hot Salsa:";
    cin >> salsaH;
    if (salsaH < 0)
    {
        exit(0);
    }
    cout << "Please enter number of jars for Zesty Salsa:";
    cin >> salsaZ;
    if (salsaZ < 0)
    {
        exit(0);
    }

    int jars[5] = {salsaM, salsaMe, salsaS, salsaH, salsaZ};

    int total = salsaM + salsaMe + salsaS + salsaH + salsaZ;
    cout << "Sales for each salsa type: " << salsaM <<  " " << salsaMe << " " << salsaS << " " << salsaH << " " << salsaZ << endl;
    cout << "Highest: " << findMax(jars) << endl << "Lowest: " << findMin(jars) << endl;
    cout << "Total Sales: " << total << " jars ";
}
    int findMax(int jars[5])
    {
        int max = jars[0];
      
        for (int i = 0; i < 5; i++)
        {
            
            
            if (jars[i] > max)
            {
                max = jars[i];
            }

        }
        return max;
    }

    int findMin(int jars[])
   {
        int min = jars[0];
      for (int i = 0; i < 5; i++)
       {
        
        
        if (jars[i] < min)
        {   
            min = jars[i];
            
        }

    }
    return min;
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

// Customer-Account.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

struct customer
{
    string name;
    string address;
    string city;
    string state;
    int zip;
    string telephone;
    double balance;
    string date;
};
int main()
{
    customer customers[20];
    
    

    

    int cusNumber = 0;
    int input = 0;
    do
    {
        cout << "1. Enter new account information." << endl;
        cout << "2. Change account information." << endl;
        cout << "3. Display all account information." << endl;
        cout << "4. Exit the program." << endl;
        
        cout << "Choose from the menu above pressing from either 1-4." << endl;
        cin >> input;
        cin.ignore();
        switch (input)
        {
        case 1:
            cout << "You are now going to input new customer account information." << endl;
            cout << "Please enter account name." << endl;
            getline(cin, customers[cusNumber].name);
            cout << "Please enter address." << endl;
            getline(cin, customers[cusNumber].address);
            cout << "Please enter city name." << endl;
            getline(cin, customers[cusNumber].city);
            cout << "Please enter state name." << endl;
            getline(cin, customers[cusNumber].state);
            cout << "Please enter zip code." << endl;
            cin >> customers[cusNumber].zip;
            cin.ignore();
            cout << "Please enter telephone number." << endl;
            getline(cin, customers[cusNumber].telephone);
            cout << "Please enter balance." << endl;
            cin >> customers[cusNumber].balance;
            cin.ignore();
            cout << "Please enter date." << endl;
            getline(cin, customers[cusNumber].date);

            cout << "You have entered information for customer " << cusNumber << endl;
            cusNumber++;
            break;
        case 2:
            for (int i = 0; i < cusNumber; i++)
            {
                cout << "Here is customer account information:" << endl;
                cout << customers[i].name << endl;
                cout << customers[i].address << endl;
                cout << customers[i].city << endl;
                cout << customers[i].state << endl;
                cout << customers[i].zip << endl;
                cout << customers[i].telephone << endl;
                cout << customers[i].balance << endl;
                cout << customers[i].date << endl;

            }

            cout << "You are now going to change customer account information." << endl;
            cout << "Please enter account name." << endl;
            getline(cin, customers[cusNumber - 1].name);
            cout << "Please enter address." << endl;
            getline(cin, customers[cusNumber - 1].address);
            cout << "Please enter city name." << endl;
            getline(cin, customers[cusNumber - 1].city);
            cout << "Please enter state name." << endl;
            getline(cin, customers[cusNumber - 1].state);
            cout << "Please enter zip code." << endl;
            cin >> customers[cusNumber - 1].zip;
            cin.ignore();
            cout << "Please enter telephone number." << endl;
            getline(cin, customers[cusNumber - 1].telephone);
            cout << "Please enter balance." << endl;
            cin >> customers[cusNumber - 1].balance;
            cin.ignore();
            cout << "Please enter date." << endl;
            getline(cin, customers[cusNumber - 1].date);
            break;
        case 3:
           
        
            for (int i = 0; i < cusNumber; i++)
            {
                cout << "Here is customer account information:" << endl;
                cout << customers[i].name << endl;
                cout << customers[i].address << endl;
                cout << customers[i].city << endl;
                cout << customers[i].state << endl;
                cout << customers[i].zip << endl;
                cout << customers[i].telephone << endl;
                cout << customers[i].balance << endl;
                cout << customers[i].date << endl;

            }
            
            
            
            

            cout << "Press enter to continue.";
            break;
        case 4:

            exit(0);
        }
        
    }
    while (input != 4);

    

    
   

    return 0;
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

// Lab 23
//
// Design a class named PersonData with the following member variables:
//
// lastName
// firstName
// address
// city
// state
// zip
// phone
//
// Write the appropriate accessor and mutator functions for these member variables. Next, design a 
// class named CustomerData, which is derived from the PersonData class. The CustomerData class 
// should have the following member variables:
// customerNumber
// mailingList
//
// The customerNumber variable will be used to hold a unique integer for each customer. The mailingList 
// variable should be a bool. It will be set to true if the customer wishes to be on a mailing list, or 
// false if the customer does not wish to be on a mail- ing list. Write appropriate accessor and mutator 
// functions for these member variables. Demonstrate an object of the CustomerData class in a simple program.

#include <iostream>

#include "CustomerData.h"

using namespace std;

int main()
{
    CustomerData customer1;

    string inputS;
    int    inputN;
    char   inputC;

    cout << "Enter customer's last name: ";
    cin >> inputS;
    customer1.setLN(inputS);
    cout << "Enter customer's first name: ";
    cin >> inputS;
    cin.ignore();
    customer1.setFN(inputS);
    cout << "Enter customer's address: ";
    getline(cin, inputS);
    customer1.setAdd(inputS);
    cout << "Enter customer's city: ";
    getline(cin, inputS);
    customer1.setC(inputS);
    cout << "Enter customer's state: ";
    getline(cin, inputS);
    customer1.setS(inputS);
    cout << "Enter customer's Zip: ";
    cin >> inputN;
    customer1.setZ(inputN);
    cout << "Enter customer's Phone number: ";
    cin >> inputS;
    customer1.setP(inputS);
    cout << "Enter customer's Customer number: ";
    cin >> inputN;
    customer1.setCN(inputN);
    cout << "Enter 'y' if customer is on mailing list, 'n' if not: ";
    cin >> inputC;
    if (inputC == 'y')
        customer1.setML(true);
    else
        customer1.setML(false);

    cout << "Displaying customer data."                          << endl;
    cout << "Last name:       " << customer1.getLN()       << endl;
    cout << "First name:      " << customer1.getFN()      << endl;
    cout << "Address:         " << customer1.getAdd()        << endl;
    cout << "City:            " << customer1.getC()           << endl;
    cout << "State:           " << customer1.getS()          << endl;
    cout << "Zip:             " << customer1.getZ()            << endl;
    cout << "Phone number:    " << customer1.getP()          << endl;
    cout << "Customer number: " << customer1.getCN() << endl;

    cout << "Mailing list:    " << (customer1.getML() ? "Yes" : "No") << endl;

    return 0;
}

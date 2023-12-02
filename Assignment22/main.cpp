#include "EmployeeInfo.h"
#include "BinaryTree.h"
#include <iostream>

using namespace std; 

int main() 
{
    EmployeeTree empTree;

    empTree.insert(EmployeeInfo(1021, "John Williams"));
    empTree.insert(EmployeeInfo(1057, "Bill Witherspoon"));
    empTree.insert(EmployeeInfo(2487, "Jennifer Twain"));
    empTree.insert(EmployeeInfo(3769, "Sophia Lancaster"));
    empTree.insert(EmployeeInfo(1017, "Debbie Reece"));
    empTree.insert(EmployeeInfo(1275, "George McMullen"));
    empTree.insert(EmployeeInfo(1899, "Ashley Smith"));
    empTree.insert(EmployeeInfo(4218, "Josh Plemmons"));

    int searchingID;

    cout << "Please enter the Employee ID to search (when searching is over please press 1): ";

    while (cin >> searchingID && searchingID != 1)
    {
        const EmployeeInfo* foundEmployee = empTree.search(searchingID);

        if (foundEmployee) 
        {
            cout << " The employee ID: " << foundEmployee->getID() << ", Name: " << foundEmployee->getN() << endl;
        }
        else 
        {
            cout << "Sorry, the employee with ID " << searchingID << " was not found." << endl;
        }

        cout << "Enter Employee ID to search or hit -1 to stop program: ";
    }

    return 0;
}

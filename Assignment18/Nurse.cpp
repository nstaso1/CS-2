#include <iostream>
#include <string>

#include "Nurse.h"

using namespace std;
Nurse::Nurse(string name) : hospitalEmployee(name, "nursing")
{

}
void Nurse::takeVitals()
{
    if (onCall == true)
    {
        cout << "Vitals have been taken." << endl;
    }

    else
    {
        cout << "Sorry it's not my shift." << endl;
    }
}
   

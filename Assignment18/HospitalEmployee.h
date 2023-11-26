#ifndef HOSPITAL_EMPLOYEE_H
#define HOSPITAL_EMPLOYEE_H

#include <string>

using namespace std;

class hospitalEmployee
{
public:

    
    void greeting();
    void changeShift();
    bool isOnCall();


    hospitalEmployee() = default;
    hospitalEmployee(string name, string field);
    


protected:
    string _name;
    string _field;
   
    bool onCall;  
};
#endif

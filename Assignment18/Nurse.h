#ifndef NURSE_H
#define NURSE_H

#include <string>

#include "HospitalEmployee.h"

using namespace std;
class Nurse : public hospitalEmployee
{

public:
    Nurse() = default;
    Nurse(string name);
    void takeVitals();

    
};
#endif

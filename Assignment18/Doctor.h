#ifndef DOCTOR_H
#define DOCTOR_H

#include <string>

#include "HospitalEmployee.h"

using namespace std;
class Doctor : public hospitalEmployee
{

   
    public:
        Doctor() = default;
        Doctor(string name, string field);
        void checkCharts();
   

    
};
#endif

#include "Doctor.h"
#include "Nurse.h"
#include "Hospital.h"
Hospital::Hospital()
{
    d1 = Doctor("Jennifer Jackson", "pediatrics");
    n1 = Nurse("Bobbie Blake");
    n1.changeShift();
    d1.greeting();
    d1.checkCharts();
    n1.greeting();
    n1.takeVitals();
}

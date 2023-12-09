#include <string>

#include "CustomerData.h"


int CustomerData::getCN()
{
    return cN;
}

bool CustomerData::getML()
{
    return mL;
}

void CustomerData::setCN(int customerNumber)
{
    cN = customerNumber;
}

void CustomerData::setML(bool mailingList)
{
    mL = mailingList;
}

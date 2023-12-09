#include <string>

#include "PersonalData.h"
#include "PersonalData.h"

using namespace std;


string PersonData::getLN()
{
    return lN;
}

string PersonData::getFN()
{
    return fN;
}

string PersonData::getAdd()
{
    return aDD;
}

string PersonData::getC()
{
    return cT;
}

string PersonData::getS()
{
    return sT;
}

int PersonData::getZ()
{
    return zI;
}

string PersonData::getP()
{
    return pH;
}

void PersonData::setLN(string lastName)
{
    lN = lastName;
}

void PersonData::setFN(string firstName)
{
    fN = firstName;
}

void PersonData::setAdd(string address)
{
    aDD = address;
}

void PersonData::setC(string city)
{
    cT = city;
}

void PersonData::setS(string state)
{
    sT = state;
}

void PersonData::setZ(int zip)
{
    zI = zip;
}

void PersonData::setP(string phone)
{
    pH = phone;
}

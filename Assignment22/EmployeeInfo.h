#ifndef EMPLOYEEINFO_H
#define EMPLOYEEINFO_H

#include <iostream>
#include <string>

class EmployeeInfo
{
public:
    EmployeeInfo(int ID, const std::string& empN);
    int getID() const;
    const std::string& getN() const;

private:
    int EmployeeIDN;
    std:: string EmployeeN;
};



const std::string& EmployeeInfo::getN() const
{
    return EmployeeN;
}

EmployeeInfo::EmployeeInfo(int ID, const std::string& empN) : EmployeeIDN(ID), EmployeeN(empN) {}

int EmployeeInfo::getID() const
{
    return EmployeeIDN;
}
#endif 

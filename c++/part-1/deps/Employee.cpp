#include <iostream>
#include "Employee.h"

namespace Records {
    Employee::Employee() :
            mFirstName(""),
            mLastName(""),
            mEmployeeNumber(-1),
            mSalary(kDefaultStartingSalary),
            mIsHired(false)
    {}

    void Employee::promote(int raiseAmount)
    {
        setSalary(mSalary + raiseAmount);
    }

    void Employee::demote(int demeritAmount)
    {
        setSalary(mSalary - demeritAmount);
    }

    void Employee::hire()
    {
        mIsHired = true;
    }

    void Employee::fire()
    {
        mIsHired = false;
    }

    void Employee::display() const
    {
        std::cout << "Employee: " << getLastName() << ", " << getFirstName() << std::endl;
        std::cout << "-----------------------------------------------------" << std::endl;
        std::cout << (mIsHired ? "Current Employee" : "Former Employee") << std::endl;
        std::cout << "Employee Number: " << getEmployeeNumber() << std::endl;
        std::cout << "Salary: $" << getSalary() << std::endl;
        std::cout << std::endl;
    }

    void Employee::setFirstName(const std::string &firstName)
    {
        mFirstName = firstName;
    }

    const std::string &Employee::getFirstName() const
    {
        return mFirstName;
    }

    void Employee::setLastName(const std::string &lastName)
    {
        mLastName = lastName;
    }

    const std::string &Employee::getLastName() const
    {
        return mLastName;
    }

    void Employee::setEmployeeNumber(int employeeNumber)
    {
        mEmployeeNumber = employeeNumber;
    }

    int Employee::getEmployeeNumber() const
    {
        return mEmployeeNumber;
    }

    void Employee::setSalary(int salary)
    {
        mSalary = salary;
    }

    int Employee::getSalary() const
    {
        return mSalary;
    }

    bool Employee::getIsHired() const
    {
        return mIsHired;
    }
}
#include <stdexcept>
#include <string>
#include "Database.h"
#include "Employee.h"

namespace Records
{
    Database::Database() : mNextEmployeeNumber(kFirstEmployeeNumber)
    {
    }

    Employee& Database::addEmployee(const std::string &firstName, const std::string &lastName)
    {
        Employee anEmployee;
        anEmployee.setFirstName(firstName);
        anEmployee.setLastName(lastName);
        anEmployee.setEmployeeNumber(mNextEmployeeNumber++);
        anEmployee.hire();
        mEmployees.push_back(anEmployee);

        return mEmployees[mEmployees.size() - 1];
    }

    Employee& Database::getEmployee(int employeeNumber)
    {
        for (auto& employee : mEmployees)
        {
            if (employee.getEmployeeNumber() == employeeNumber)
            {
                return employee;
            }
        }

        throw std::runtime_error("No employee found");
    }

    Employee& Database::getEmployee(const std::string &firstName, const std::string &lastName)
    {
        for (auto& employee : mEmployees)
        {
            if (employee.getFirstName() == firstName && employee.getLastName() == lastName)
            {
                return employee;
            }
        }

        throw std::runtime_error("No employee found");
    }

    void Database::displayAll() const
    {
        for (auto& employee : mEmployees)
        {
            employee.display();
        }

        return;
    }

    void Database::displayCurrent() const
    {
        for (auto& employee : mEmployees)
        {
            if (employee.getIsHired())
            {
                employee.display();
            }
        }

        return;
    }

    void Database::displayFormer() const
    {
        for (auto& employee : mEmployees)
        {
            if (!employee.getIsHired())
            {
                employee.display();
            }
        }

        return;
    }
}
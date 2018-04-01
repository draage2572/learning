#include <iostream>

int main()
{
    struct Employee {
        char firstInitial;
        char lastInitial;
        int employeeNumber;
        int salary;
    };

    Employee anEmployee;
    anEmployee.firstInitial = 'A';
    anEmployee.lastInitial = 'E';
    anEmployee.employeeNumber = 2321;
    anEmployee.salary = 200000;

    std::cout << "Employee " << anEmployee.firstInitial << '-' << anEmployee.lastInitial << std::endl;
    std::cout << "Number " << anEmployee.employeeNumber << std::endl;
    std::cout << "Salary " << anEmployee.salary << std::endl;

    return 0;
}

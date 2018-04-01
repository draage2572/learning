#include <iostream>

struct Employee
{
    char firstInitial;
    char lastInitial;
    int number;
    int salary;
};

Employee* getEmployee()
{
    Employee* employee = new Employee;
    (*employee).firstInitial = 'A';
    (*employee).lastInitial = 'E';
    (*employee).number = 10;
    (*employee).salary = 1000;

    return employee;
}

int main()
{
    /**
     * Pointer declaration
     *
     * !! always initialize your pointers
     */
    int* myFirstPointer = nullptr;

    /**
     * Pointer memory allocation
     */
    myFirstPointer = new int;

    /**
     * Pointer dereferencing
     */
    *myFirstPointer = 8;
    std::cout << *myFirstPointer << std::endl;

    /**
     * Pointer deallocation
     */
    delete myFirstPointer;
    myFirstPointer = nullptr;

    /**
     * Point to a variable
     */
    int variable = 199;
    myFirstPointer = &variable;

    std::cout << *myFirstPointer << " is the same as " << variable << std::endl;

    /**
     * Changing the value behind the pointer also changes the initial variable
     */
    *myFirstPointer = 10;

    std::cout << *myFirstPointer << " is the same as " << variable << " after it's been modified" << std::endl;

    /**
     * Accessing structure fields
     */
    Employee* anEmployee = getEmployee();
    std::cout << anEmployee->lastInitial << anEmployee->firstInitial << anEmployee->number << anEmployee->salary << std::endl;

    delete anEmployee;
    anEmployee = nullptr;

    return 0;
}

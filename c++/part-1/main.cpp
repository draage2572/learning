#include <iostream>
#include <stdexcept>
#include "deps/Database.h"
#include "deps/Employee.h"

using namespace Records;

void testEmployee();

void testDatabase();

int displayMenu();
void doHire(Database& db);
void doFire(Database& db);
void doPromote(Database& db);
void doDemote(Database& db);

Employee& selectEmployee(Database& db);

int main()
{
    Database myDb;
    bool done = false;
    do
    {
        int selection = displayMenu();
        switch (selection)
        {
            case 1:
                doHire(myDb);
                break;
            case 2:
                doFire(myDb);
                break;
            case 3:
                doPromote(myDb);
                break;
            case 4:
                doDemote(myDb);
                break;
            case 5:
                myDb.displayAll();
                break;
            case 6:
                myDb.displayCurrent();
                break;
            case 7:
                myDb.displayFormer();
                break;
            case 0:
                done = true;
                break;
            default:
                std::cerr << "Unknown command" << std::endl;
        }
    } while (!done);

    return 0;
}

Employee& selectEmployee(Database& db)
{
    std::string findMethod;

    std::cout << "Find employee by employee number (en) or first name and last name (fl)?";
    std::cin >> findMethod;

    if (findMethod == "en")
    {
        int employeeNumber;
        std::cout << "Please input the employee number: ";
        std::cin >> employeeNumber;

        return db.getEmployee(employeeNumber);
    }
    else if (findMethod == "fl")
    {
        std::string firstName;
        std::string lastName;

        std::cout << "Please input the first name: ";
        std::cin >> firstName;
        std::cout << "Please input the last name: ";
        std::cin >> lastName;

        return db.getEmployee(firstName, lastName);
    }

    throw std::runtime_error("No such option");
}

void doHire(Database& db)
{
    std::string firstName;
    std::string lastName;

    std::cout << "Employee first name: ";
    std::cin >> firstName;
    std::cout << "Employee last name: ";
    std::cin >> lastName;

    Employee& employee = db.addEmployee(firstName, lastName);
    employee.hire();
}

void doFire(Database& db)
{
    Employee& employee = selectEmployee(db);
    employee.fire();
}

void doPromote(Database& db)
{
    Employee& employee = selectEmployee(db);
    int raise;
    std::cout << "How much of a raise should he get (" << employee.getSalary() << ") :";
    std::cin >> raise;

    employee.promote(raise);
}

void doDemote(Database& db)
{
    Employee& employee = selectEmployee(db);
    int demerit;
    std::cout << "With how mush would you like to penalize? (" << employee.getSalary() << ") :";
    std::cin >> demerit;

    employee.demote(demerit);
}

int displayMenu()
{
    int selection;
    std::cout << std::endl;
    std::cout << "Employee Database" << std::endl;
    std::cout << "----------------------" << std::endl;
    std::cout << "1) Hire a new employee" << std::endl;
    std::cout << "2) Fire an employee" << std::endl;
    std::cout << "3) Promote an employee" << std::endl;
    std::cout << "4) Demote an employee" << std::endl;
    std::cout << "5) List all employees" << std::endl;
    std::cout << "6) List all current employees" << std::endl;
    std::cout << "7) List all former employees" << std::endl;
    std::cout << "0) Quit" << std::endl;
    std::cout << std::endl;

    std::cout << "--->: ";
    std::cin >> selection;

    return selection;
}

void testDatabase()
{
    Database MyDB;
    Employee& emp1 = MyDB.addEmployee("John", "Snow");
    emp1.fire();

    Employee& emp2 = MyDB.addEmployee("Maria", "Snow");
    emp2.setSalary(1000);

    Employee& emp3 = MyDB.addEmployee("Greg", "House");
    emp3.setSalary(20392032);
    emp3.promote();

    std::cout << "all employees" << std::endl;
    MyDB.displayAll();

    std::cout << "hired employees" << std::endl;
    MyDB.displayCurrent();

    std::cout << "fired employees" << std::endl;
    MyDB.displayFormer();

    return;
}

void testEmployee()
{
    Employee emp;
    emp.setFirstName("John");
    emp.setLastName("Doe");
    emp.setEmployeeNumber(71);
    emp.setSalary(50000);
    emp.promote();
    emp.promote(50);
    emp.hire();
    emp.display();

    return;
}
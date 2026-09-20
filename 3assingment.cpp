#include <iostream>
using namespace std;

class Employee
{
public:
    int empid;
    string name;
    string department;
    float salary;

    void display()
    {
        cout << "-----EMPLOYEE DETAILS-----" << "\n";
        cout << "Employee ID: " << empid << "\n";
        cout << "Name: " << name << "\n";
        cout << "Department: " << department << "\n";
        cout << "Salary: " << salary << "\n";
    }
};

int main()
{
    Employee e1;

    e1.empid = 101;
    e1.name = "piyush";
    e1.department = "Human Resources";
    e1.salary = 60000;

    e1.display();

    return 0;
}
#include <iostream>
using namespace std;

class Employee
{
    int id;
    string name;

public:
    Employee()
    {
        id = 01;
        name = "Lalit";
        cout << "Constructor called" << endl;
    }

    void display()
    {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
    }

    ~Employee()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    Employee emp;
    emp.display();

    return 0;
}

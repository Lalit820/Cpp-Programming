#include <iostream>
using namespace std;

class Employee
{
protected:
    int id;
    string name;

public:
    void getData()
    {
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Employee Name: ";
        cin >> name;
    }
};

class Salary : public Employee
{
    float salary;

public:
    void getSalary()
    {
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};

int main()
{
    Salary sall;

    sall.getData();
    sall.getSalary();
    sall.display();

    return 0;
}

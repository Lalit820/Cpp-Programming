#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    float salary;

public:
    void setSalary(string nm, float sal) {
        name = nm;

        if (sal >= 0) {
            salary = sal;
        } else {
            salary = 0;
            cout << "Negative salary is not allowed."<<endl;
        }
    }

    void displaySalary() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};

int main() {
    Employee emp;

    emp.setSalary("Lalit", 40000);
    emp.displaySalary();

    return 0;
}

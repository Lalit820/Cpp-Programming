#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;
    string name;

public:
    void getData()
    {
        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter Name: ";
        cin >> name;
    }
};

class Result : public Student
{
    int m1, m2, m3;

public:
    void getMarks()
    {
        cout << "Enter marks of three subjects: ";
        cin >> m1 >> m2 >> m3;
    }

    void display()
    {
        int total = m1 + m2 + m3;
        float percentage = total / 3.0;

        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main()
{
    Result rut;

    rut.getData();
    rut.getMarks();
    rut.display();

    return 0;
}

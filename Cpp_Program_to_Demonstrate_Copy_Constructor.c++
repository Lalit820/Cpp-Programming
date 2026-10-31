#include <iostream>
using namespace std;

class Student
{
    int roll;

public:
    Student(int r)
    {
        roll = r;
    }

    Student(const Student &s)
    {
        roll = s.roll;
    }

    void display()
    {
        cout << "Roll Number: " << roll << endl;
    }
};

int main()
{
    Student s1(101);
    Student s2(s1);

    cout << "Original Object:" << endl;
    s1.display();

    cout << "Copied Object:" << endl;
    s2.display();

    return 0;
}

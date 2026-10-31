#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;

public:
    void getRoll()
    {
        cout << "Enter Roll Number: ";
        cin >> roll;
    }
};

class Test : virtual public Student
{
protected:
    int marks;

public:
    void getMarks()
    {
        cout << "Enter Marks: ";
        cin >> marks;
    }
};

class Sports : virtual public Student
{
protected:
    int score;

public:
    void getScore()
    {
        cout << "Enter Sports Score: ";
        cin >> score;
    }
};

class Result : public Test, public Sports
{
public:
    void display()
    {
        cout << "Roll Number: " << roll << endl;
        cout << "Marks: " << marks << endl;
        cout << "Sports Score: " << score << endl;
        cout << "Total Score: " << marks + score << endl;
    }
};

int main()
{
    Result rut;

    rut.getRoll();
    rut.getMarks();
    rut.getScore();
    rut.display();

    return 0;
}

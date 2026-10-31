#include <iostream>
using namespace std;

class Base
{
public:
    int a;

    void display()
    {
        cout << "Value of a: " << a << endl;
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "Derived class function" << endl;
    }
};

int main()
{
    Derived obj;

    obj.a = 50;

    obj.display();
    obj.show();

    return 0;
}

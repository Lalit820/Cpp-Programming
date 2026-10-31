#include <iostream>
using namespace std;

class Rectangle
{
protected:
    int length, breadth;

public:
    void getData()
    {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter breadth: ";
        cin >> breadth;
    }
};

class Area : public Rectangle
{
public:
    void calculate()
    {
        cout << "Area of Rectangle = "<< length * breadth << endl;
    }
};

int main()
{
    Area obj;

    obj.getData();
    obj.calculate();

    return 0;
}

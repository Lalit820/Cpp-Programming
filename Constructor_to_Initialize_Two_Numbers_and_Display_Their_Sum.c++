#include <iostream>
using namespace std;

class Addition
{
    int num1, num2;

public:
    Addition(int x, int y)
    {
        num1 = x;
        num2 = y;
    }

    void display()
    {
        cout << "First Number: " << num1 << endl;
        cout << "Second Number: " << num2 << endl;
        cout << "Sum = " << num1 + num2 << endl;
    }
};

int main()
{
    Addition obj(10, 20);
    obj.display();

    return 0;
}

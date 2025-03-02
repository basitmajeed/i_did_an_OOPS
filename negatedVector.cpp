#include <iostream>
using namespace std;

class Vector
{
private:
    int x, y;

public:
    Vector() : x(0), y(0) {}
    Vector(int valX, int valY) : x(valX), y(valY) {}

    Vector operator-()
    {
        return Vector(-x, -y);
    }

    void display()
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main()
{
    Vector v(3, 4);

    cout << "Original vector: ";
    v.display();

    Vector negatedVector = -v;

    cout << "Negated vector: ";
    negatedVector.display();

    return 0;
}
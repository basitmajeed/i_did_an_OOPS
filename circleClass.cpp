#include <iostream>
using namespace std;

class Circle
{
private:
    float radius;

public:
    float area(float radius)
    {
        return 3.14 * radius * radius;
    }
};

int main()
{
    float rad, area;
    cout << "Enter radius of the circle(in mm): ";
    cin >> rad;
    Circle circle;
    area = circle.area(12);
    cout << "The area of the circle is: " << area << " sq mm";
    return 0;
}
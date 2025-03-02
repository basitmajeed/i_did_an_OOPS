#include <iostream>
using namespace std;

class Triangle
{
private:
    float base;
    float height;

public:
    Triangle(float b, float h) : base(b), height(h) {}

    float calculateArea()
    {
        return 0.5 * base * height;
    }

    ~Triangle()
    {
        cout << "\nTriangle is destroyed!";
    }
};

int main()
{
    Triangle triangle(10.0, 5.0);
    cout << "Area of Triangle is: " << triangle.calculateArea();
    return 0;
}
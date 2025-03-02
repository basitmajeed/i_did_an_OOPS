#include <iostream>
using namespace std;

class Rectangle
{
private:
    float width;
    float length;

public:
    // Default Constructor
    Rectangle() : width(1), length(1) {}
    // Parameterised Constructor
    Rectangle(float w, float l) : width(w), length(l) {}

    float calculatePerimeter()
    {
        return 2 * (length + width);
    }

    ~Rectangle()
    {
        cout << "\nRectangle is destroyed!";
    }
};

int main()
{
    Rectangle rectangleDefault;
    Rectangle rectangleParameterised(10.0, 15.0);
    cout << "Parameter of Default Rectangle is: " << rectangleDefault.calculatePerimeter();
    cout << "\nParameter of Parameterised Rectangle is: " << rectangleParameterised.calculatePerimeter();
    return 0;
}
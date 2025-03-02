#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float width;

public:
    void setLength(float len)
    {
        length = len;
    }
    void setWidth(float wid)
    {
        width = wid;
    }

    float getLength()
    {
        return length;
    }
    float getWidth()
    {
        return width;
    }

    float area()
    {
        return length * width;
    }
    void display()
    {
        cout << "Area is: " << area();
    }
};

int main()
{
    Rectangle rectangle;
    float area;
    rectangle.setLength(10.0);
    rectangle.setWidth(35.0);
    rectangle.display();
    return 0;
}
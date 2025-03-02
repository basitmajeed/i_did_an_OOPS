#include <iostream>
using namespace std;

class Box
{
private:
    int length, width, height, volume;

public:
    Box() : length(1), width(1), height(1), volume(1) {}
    Box(int l, int w, int h) : length(l), width(w), height(h) {}

    int getVolume()
    {
        return length * width * height;
    }

    bool operator>(Box other)
    {
        return getVolume() > other.getVolume();
    }

    void displayDimensions()
    {
        cout << "Length: " << length << ", Width: " << width << ", Height: " << height << endl;
    }
};

int main()
{
    Box box1(2, 4, 8);
    box1.displayDimensions();
    Box box2(4, 2, 5);
    box2.displayDimensions();

    if (box1 > box2)
    {
        cout << "Volume of Box 1 is larger";
    }
    else
    {
        cout << "Volume of Box 2 is larger";
    }

    return 0;
}
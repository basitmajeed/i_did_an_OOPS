#include <iostream>
using namespace std;

class Cube
{
private:
    float side;

public:
    Cube(float s) : side(s) {}
    float volume()
    {
        return side * side * side;
    }
};

int main()
{
    Cube c1(10.0);
    Cube c2(13.4);
    Cube c3(6.2);
    cout << "Volume of Cube c1 is: " << c1.volume();
    cout << "\nVolume of Cube c2 is: " << c2.volume();
    cout << "\nVolume of Cube c3 is: " << c3.volume();
    return 0;
}
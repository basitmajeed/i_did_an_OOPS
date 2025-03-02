#include <iostream>
using namespace std;

class Fahrenheit;

class Celsius
{
private:
    float temp;

public:
    Celsius(float t = 0) : temp(t) {}

    operator Fahrenheit();

    void display() const
    {
        cout << temp << " Celsius" << endl;
    }
};

class Fahrenheit
{
private:
    float temp;

public:
    Fahrenheit(float t = 32) : temp(t) {}

    operator Celsius();

    void display() const
    {
        cout << temp << " Fahrenheit" << endl;
    }
};

Celsius::operator Fahrenheit()
{
    return Fahrenheit((temp * 9.0 / 5.0) + 32);
}

Fahrenheit::operator Celsius()
{
    return Celsius((temp - 32) * 5.0 / 9.0);
}

int main()
{
    Celsius c1(25);
    Fahrenheit f1 = c1;

    cout << "Celsius: ";
    c1.display();
    cout << "Converted to Fahrenheit: ";
    f1.display();

    Fahrenheit f2(77);
    Celsius c2 = f2;

    cout << "Fahrenheit: ";
    f2.display();
    cout << "Converted to Celsius: ";
    c2.display();

    return 0;
}

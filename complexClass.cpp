#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    Complex operator+(Complex other)
    {
        return Complex(real + other.real, imag + other.imag);
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex num1(3, 4);
    Complex num2(1, 2);

    Complex result = num1 + num2;

    cout << "Sum of the complex numbers: ";
    result.display();

    return 0;
}

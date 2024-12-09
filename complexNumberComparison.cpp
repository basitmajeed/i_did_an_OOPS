#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double real1, imag1, real2, imag2;

    cout << "Enter real and imaginary parts of the first complex number: ";
    cin >> real1 >> imag1;

    cout << "Enter real and imaginary parts of the second complex number: ";
    cin >> real2 >> imag2;

    double mag1 = sqrt(real1 * real1 + imag1 * imag1);
    double mag2 = sqrt(real2 * real2 + imag2 * imag2);

    if (mag1 > mag2)
    {
        cout << "The first complex number has a higher magnitude." << endl;
    }
    else if (mag1 < mag2)
    {
        cout << "The second complex number has a higher magnitude." << endl;
    }
    else
    {
        cout << "Equal" << endl;
    }

    return 0;
}

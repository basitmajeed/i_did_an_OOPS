#include <iostream>
using namespace std;

class Currency
{
private:
    int rupees, paise;

public:
    Currency(int r, int p) : rupees(r), paise(p) {}

    void normalize()
    {
        rupees += paise / 100;
        paise = paise % 100;
    }

    Currency operator+(Currency other)
    {
        int totalPaise = (rupees * 100 + paise) + (other.rupees * 100 + other.paise);
        return Currency(totalPaise / 100, totalPaise % 100);
    }

    Currency operator-(Currency other)
    {
        int totalPaise = (rupees * 100 + paise) - (other.rupees * 100 + other.paise);
        if (totalPaise < 0)
        {
            totalPaise = 0;
        }
        return Currency(totalPaise / 100, totalPaise % 100);
    }

    void display()
    {
        cout << "Rupees: " << rupees << ", Paise: " << paise << endl;
    }
};

int main()
{
    Currency c1(10, 75);
    Currency c2(5, 50);

    cout << "Currency 1: ";
    c1.display();

    cout << "Currency 2: ";
    c2.display();

    Currency c3 = c1 + c2;
    cout << "Sum of Currency 1 and Currency 2: ";
    c3.display();

    Currency c4 = c1 - c2;
    cout << "Difference between Currency 1 and Currency 2: ";
    c4.display();

    return 0;
}

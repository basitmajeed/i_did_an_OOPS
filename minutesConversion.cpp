#include <iostream>
using namespace std;

class Time
{
private:
    int inpMin, hours, minutes;

public:
    Time(int m) : inpMin(m)
    {
        hours = inpMin / 60;
        minutes = inpMin % 60;
    }

    operator int()
    {
        return (hours * 60) + minutes;
    }

    void display() const
    {
        cout << hours << " hours and " << minutes << " minutes" << endl;
    }
};

int main()
{

    Time t(165);

    cout << "Time: ";
    t.display();

    int totalMinutes = t;
    cout << "Total minutes: " << totalMinutes << " minutes" << endl;

    return 0;
}

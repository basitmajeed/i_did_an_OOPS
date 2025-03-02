#include <iostream>
using namespace std;

class Time
{
private:
    int hours, minutes;

public:
    Time() : hours(0), minutes(0) {}
    Time(int h, int m) : hours(h), minutes(m) {}

    operator int()
    {
        return (hours * 60) + minutes;
    }

    void displayTime()
    {
        cout << "Time is: " << hours << " hours and " << minutes << " minutes.";
    }
};

int main()
{
    Time t(3, 15);
    t.displayTime();
    int minutes = t;
    cout << "\nTotal minutes: " << minutes << endl;
    return 0;
}
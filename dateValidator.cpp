#include <iostream>
#include <cmath>

using namespace std;

bool isLeapYear(int year)
{
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

bool isValidDate(int day, int month, int year)
{
    if (year < 1 || month < 1 || month > 12 || day < 1 || day > 31)
    {
        return false;
    }

    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (isLeapYear(year))
    {
        daysInMonth[1] = 29;
    }

    return day <= daysInMonth[month - 1];
}

int calculateDayOfWeek(int day, int month, int year)
{
    if (month < 3)
    {
        month += 12;
        year -= 1;
    }

    int k = year % 100;
    int j = year / 100;

    int dayOfWeek = (day + ((13 * (month + 1)) / 5) + k + (k / 4) + (j / 4) - 2 * j) % 7;

    return dayOfWeek;
}

int main()
{
    int day, month, year;

    cout << "Enter the date (DD-MM-YYYY): ";
    scanf("%d-%d-%d", &day, &month, &year);

    if (isValidDate(day, month, year))
    {
        int dayOfWeek = calculateDayOfWeek(day, month, year);

        string dayName;

        switch (dayOfWeek)
        {
        case 0:
            dayName = "Saturday";
            break;
        case 1:
            dayName = "Sunday";
            break;
        case 2:
            dayName = "Monday";
            break;
        case 3:
            dayName = "Tuesday";
            break;
        case 4:
            dayName = "Wednesday";
            break;
        case 5:
            dayName = "Thursday";
            break;
        case 6:
            dayName = "Friday";
            break;
        }

        cout << "The entered date is valid. It falls on a " << dayName << "." << endl;
    }
    else
    {
        cout << "The entered date is invalid." << endl;
    }

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    double marks[5];
    int failCount = 0;
    double totalMarks = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> marks[i];
        totalMarks += marks[i];
        if (marks[i] < 40)
        {
            failCount++;
        }
    }

    if (failCount > 1)
    {
        cout << "Repeat Year" << endl;
    }
    else
    {
        double percentage = (totalMarks / 500) * 100;

        if (percentage >= 90)
        {
            cout << "Grade: A" << endl;
        }
        else if (percentage >= 80)
        {
            cout << "Grade: B" << endl;
        }
        else if (percentage >= 70)
        {
            cout << "Grade: C" << endl;
        }
        else if (percentage >= 60)
        {
            cout << "Grade: D" << endl;
        }
        else
        {
            cout << "Grade: F" << endl;
        }
    }

    return 0;
}

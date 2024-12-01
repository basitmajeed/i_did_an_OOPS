#include <iostream>
using namespace std;

int main()
{
    int num;

    do
    {
        cout << "Enter a positive integer (0 to stop): ";
        cin >> num;

        if (num == 0)
        {
            break;
        }

        int reversedNum = 0;
        int originalNum = num;

        while (num != 0)
        {
            int digit = num % 10;
            reversedNum = reversedNum * 10 + digit;
            num = num / 10;
        }

        cout << "Reversed number: " << reversedNum << endl;

        num = originalNum;

    } while (num != 0);

    cout << "Program terminated." << endl;

    return 0;
}

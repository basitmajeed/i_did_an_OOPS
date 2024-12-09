#include <iostream>

using namespace std;

int main()
{
    int num, start, end, originalNum, reversedNum, remainder;

    cout << "Enter a number to check if it's a palindrome: ";
    cin >> num;

    originalNum = num;
    reversedNum = 0;

    while (num != 0)
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum)
    {
        cout << originalNum << " is a palindrome." << endl;
    }
    else
    {
        cout << originalNum << " is not a palindrome." << endl;
    }

    cout << "Enter a range (start and end) to find palindrome numbers: ";
    cin >> start >> end;

    cout << "Palindrome numbers between " << start << " and " << end << " are: ";
    for (int i = start; i <= end; i++)
    {
        num = i;
        originalNum = num;
        reversedNum = 0;

        while (num != 0)
        {
            remainder = num % 10;
            reversedNum = reversedNum * 10 + remainder;
            num /= 10;
        }

        if (originalNum == reversedNum)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}

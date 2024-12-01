#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    int i = 2;

    cout << "Prime numbers less than or equal to " << n << " are: " << endl;

    while (i <= n)
    {
        bool isPrime = true;

        int j = 2;
        while (j * j <= i)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
            j++;
        }

        if (isPrime)
        {
            cout << i << " ";
        }

        i++;
    }

    cout << endl;

    return 0;
}

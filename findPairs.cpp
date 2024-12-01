#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int limit = 0;
    while (limit * limit <= n)
    {
        limit++;
    }
    limit--;

    for (int x = 0; x <= limit; x++)
    {
        for (int y = 0; y <= limit; y++)
        {
            if (x * x + y * y == n)
            {
                cout << "(" << x << ", " << y << ")" << endl;
            }
        }
    }

    return 0;
}

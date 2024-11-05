#include <iostream>

using namespace std;

int main()
{
    int n, on, rem, rev;
    cout << "Enter a number: ";
    cin >> n;
    on = n;
    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        rev = rev * 10 + rem;
    }
    (rev == on) ? cout << "Entered Number is a pallindrome" : cout << "Entered number is not a pallindrome";
    return 0;
}
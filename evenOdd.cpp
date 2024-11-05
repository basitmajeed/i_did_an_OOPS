#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    (n % 2 == 0) ? cout << "Entered number is EVEN" : cout << "Entered number is ODD";
    return 0;
}
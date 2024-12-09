#include <iostream>

using namespace std;

int main()
{
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    switch (ch)
    {
    case 'a':
        cout << "Vowel (lowercase 'a')" << endl;
        break;
    case 'e':
        cout << "Vowel (lowercase 'e')" << endl;
        break;
    case 'i':
        cout << "Vowel (lowercase 'i')" << endl;
        break;
    case 'o':
        cout << "Vowel (lowercase 'o')" << endl;
        break;
    case 'u':
        cout << "Vowel (lowercase 'u')" << endl;
        break;
    case 'A':
        cout << "Vowel (uppercase 'A')" << endl;
        break;
    case 'E':
        cout << "Vowel (uppercase 'E')" << endl;
        break;
    case 'I':
        cout << "Vowel (uppercase 'I')" << endl;
        break;
    case 'O':
        cout << "Vowel (uppercase 'O')" << endl;
        break;
    case 'U':
        cout << "Vowel (uppercase 'U')" << endl;
        break;
    default:
        if ((ch >= '0' && ch <= '9'))
        {
            cout << "Digit" << endl;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            cout << "Consonant" << endl;
        }
        else
        {
            cout << "Special character" << endl;
        }
    }

    return 0;
}

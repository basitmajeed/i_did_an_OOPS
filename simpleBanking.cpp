#include <iostream>

using namespace std;

int main()
{
    double balance = 0.0;
    int choice;
    double amount;

    do
    {
        cout << "\n*** Banking System ***\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Balance Inquiry\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the amount to deposit: ";
            cin >> amount;
            if (amount > 0)
            {
                balance += amount;
                cout << "Deposited Rs " << amount << ". Current balance: Rs " << balance << endl;
            }
            else
            {
                cout << "Invalid amount. Deposit must be positive.\n";
            }
            break;

        case 2:
            cout << "Enter the amount to withdraw: ";
            cin >> amount;
            if (amount > 0 && amount <= balance)
            {
                balance -= amount;
                cout << "Withdrawn Rs " << amount << ". Current balance: Rs " << balance << endl;
            }
            else if (amount > balance)
            {
                cout << "Insufficient balance. Withdrawal amount exceeds available balance.\n";
            }
            else
            {
                cout << "Invalid amount. Withdrawal must be positive.\n";
            }
            break;

        case 3:
            cout << "Current balance: Rs " << balance << endl;
            break;

        case 4:
            cout << "Exiting the banking system. Thank you for using our services.\n";
            break;

        default:
            cout << "Invalid choice. Please enter a valid option (1-4).\n";
            break;
        }
    } while (choice != 4);

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    double purchaseValue, totalPrice;

    cout << "Enter the purchase value: ";
    cin >> purchaseValue;

    totalPrice = (purchaseValue < 100) ? purchaseValue : (purchaseValue >= 100 && purchaseValue <= 500) ? purchaseValue * 0.90
                                                     : (purchaseValue > 500 && purchaseValue <= 1000)   ? purchaseValue * 0.85
                                                                                                        : purchaseValue * 0.80;

    cout << "The total price after applying the discount is: Rs " << totalPrice << endl;

    return 0;
}

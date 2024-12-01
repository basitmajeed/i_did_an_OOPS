#include <iostream>
using namespace std;

void findSubsetsWithSum(int arr[], int n, int target, int current[], int currentSize, int index)
{
    if (target == 0)
    {
        cout << "[ ";
        for (int i = 0; i < currentSize; i++)
        {
            cout << current[i] << " ";
        }
        cout << "]" << endl;
        return;
    }

    if (index == n)
    {
        return;
    }

    if (arr[index] <= target)
    {
        current[currentSize] = arr[index];
        findSubsetsWithSum(arr, n, target - arr[index], current, currentSize + 1, index + 1);
    }

    findSubsetsWithSum(arr, n, target, current, currentSize, index + 1);
}

int main()
{
    int n, target;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    int current[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the target sum: ";
    cin >> target;

    cout << "Subsets with sum " << target << " are:" << endl;
    findSubsetsWithSum(arr, n, target, current, 0, 0);

    return 0;
}

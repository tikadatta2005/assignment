#include <iostream>
#include <vector>
using namespace std;

void BinarySearch(vector<int> &arr)
{
    int num{};
    cout << endl
         << "(BINARY SEARCH) Enter the number : ";
    cin >> num;

    int min = 0;
    int max = arr.size() - 1;

    while (min <= max)
    {
        int mid = (min + max) / 2;
        if (num == arr[mid])
        {
            cout << "(BINARY SEARCH) Number " << num << " is in Index " << mid << "." << endl;
            return;
        }
        else if (arr[mid] < num)
        {
            min = mid + 1;
        }
        else
        {
            max = mid - 1;
        }
    }
    cout << "(BINARY SEARCH) Number " << num << " is not in the array!" << endl;
}
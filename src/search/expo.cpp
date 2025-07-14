#include <iostream>
#include <vector>
using namespace std;

// Binary search helper
int BinarySearch(const vector<int> &arr, int left, int right, int num)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == num)
            return mid;
        else if (arr[mid] < num)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

// Exponential Search
void Exponential(vector<int> &arr) // name kept same, logic changed
{
    int num{};
    cout << endl
         << "(EXPONENTIAL SEARCH) Enter the number : ";
    cin >> num;

    int n = arr.size();

    if (n == 0)
    {
        cout << "(EXPONENTIAL SEARCH) Array is empty!" << endl;
        return;
    }

    // If the element is at first index
    if (arr[0] == num)
    {
        cout << "(EXPONENTIAL SEARCH) Number " << num << " is in Index 0." << endl;
        return;
    }

    // Find range for binary search by repeated doubling
    int i = 1;
    while (i < n && arr[i] <= num)
        i *= 2;

    // Do binary search between i/2 and min(i, n-1)
    int result = BinarySearch(arr, i / 2, min(i, n - 1), num);

    if (result != -1)
        cout << "(EXPONENTIAL SEARCH) Number " << num << " is in Index " << result << "." << endl;
    else
        cout << "(EXPONENTIAL SEARCH) Number " << num << " is not in the array!" << endl;
}

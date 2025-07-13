#include <iostream>
#include <vector>
using namespace std;

void LinearSearch(vector<int> &arr)
{
    int num{};
    cout << endl
         << "(LINEAR SEARCH) Enter the number : ";
    cin >> num;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == num)
        {
            cout << "(LINEAR SEARCH) Number " << num << " is in Index " << i << "." << endl;
            return;
        }
    }

    cout << "(LINEAR SEARCH) Number " << num << " is not in the array!" << endl;
}
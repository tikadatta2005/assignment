#include <iostream>
#include <vector>
using namespace std;

void TakeNumbers(vector<int> &arr)
{
    int n{};
    cout << "Please input the length or '0' to exit: ";
    cin >> n;

    if (n == 0)
    {
        cout << "Exiting..." << endl;
    }
    else if (n < 0)
    {
        cout << "Length must be greater than 0.";
        TakeNumbers(arr);
    }
    else
    {

        int num{};
        for (int i = 0; i < n; i++)
        {
            cout << "Enter the Number for index " << i << ": ";
            cin >> num;
            arr.push_back(num);
        }
    }
}
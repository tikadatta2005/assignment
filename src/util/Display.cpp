#include <iostream>
#include <vector>
using namespace std;

void DisplayArray(vector<int> &arr)
{

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
#include <iostream>
#include <vector>
#include "search/linear.cpp"
#include "search/binary.cpp"

using namespace std;

void Search(vector<int> &arr, bool &sorted)
{
    while (true)
    {
        cout << endl;
        int operation{};

        cout << "(SEARCH) Choose Algorithm:" << endl
             << endl;
        cout << "1. Linear Search" << endl
             << "2. Binary Search" << endl
             << "3. Back" << endl
             << endl;

        cout << "(SEARCH) Enter Here >>> ";
        cin >> operation;
        cout << endl;

        if (operation < 1 || operation > 3)
        {
            cout << "(SEARCH) Please Select From 1,2 or 3!";
            continue;
        }
        else if (operation == 3)
        {
            cout << "Exiting the Searching ";
            break;
        }
        else if (operation == 1)
        {
            LinearSearch(arr);
        }
        else if (operation == 2 && sorted == true)
        {
            BinarySearch(arr);
        }
        else
        {
            cout << "(SEARCH) Please Sort Before Binary Search!";
            break;
        }
    }
}
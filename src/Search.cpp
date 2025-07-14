#include <iostream>
#include <vector>
#include "search/linear.cpp"
#include "search/binary.cpp"
#include <chrono>

using namespace std;
using namespace chrono;

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
            auto start = high_resolution_clock::now();
            LinearSearch(arr);
            auto end = high_resolution_clock::now();
            auto duration = duration_cast<microseconds>(end - start);
            cout << "Duration Taken: " << duration.count() << " milisecond" << endl;
        }
        else if (operation == 2 && sorted == true)
        {
            auto start = high_resolution_clock::now();
            BinarySearch(arr);
            auto end = high_resolution_clock::now();
            auto duration = duration_cast<microseconds>(end - start);
            cout << "Duration Taken: " << duration.count() << " milisecond" << endl;
        }
        else
        {
            cout << "(SEARCH) Please Sort Before Binary Search!";
            break;
        }
    }
}
#include <iostream>
#include <vector>
#include "sort/quick.cpp"
#include "util/Display.cpp"
#include "sort/merge.cpp"
using namespace std;

void Sort(vector<int> &arr, bool &sorted)
{
    while (true)
    {
        cout << endl;
        int operation{};

        cout << "(SORT) Choose Algorithm:" << endl
             << endl;
        cout << "1. Quick Sort" << endl
             << "2. Merge Sort" << endl
             << "3. Back" << endl
             << endl;

        cout << "(SORT) Enter Here >>> ";
        cin >> operation;
        cout << endl;

        if (operation < 1 || operation > 3)
        {
            cout << "(SORT) Please Select From 1,2 or 3!";
            continue;
        }
        else if (operation == 3)
        {
            cout << "Exiting the Sorting ";
            break;
        }
        else
        {
            switch (operation)
            {
            case 1:
                quick(arr, 0, arr.size() - 1);
                sorted=true;
                cout << endl
                     << "(SORT) Quick Sorted Array : ";
                DisplayArray(arr);
                break;

            case 2:
                MergeSort(arr, 0, arr.size() - 1);
                sorted=true;
                cout << endl
                     << "(SORT) Merge Sorted Array : ";
                DisplayArray(arr);
                break;
            }
        }
    }
}
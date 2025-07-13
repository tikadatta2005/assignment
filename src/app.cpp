#include <iostream>
#include <vector>
#include "inputs/TakeNumbers.cpp"
#include "Sort.cpp"
#include "Search.cpp"
using namespace std;

void app()
{

    vector<int> numbers;

    bool sorted = false;

    while (true)
    {
        cout << endl;
        int operation{};

        cout << "Choose Operations:" << endl
             << endl;
        cout << "1. Input Numbers" << endl
             << "2. Sort Numbers" << endl
             << "3. Search Numbers" << endl
             << "4. Exit Program" << endl
             << endl;

        cout << "Enter Here >>> ";
        cin >> operation;
        cout << endl;

        if (operation > 4 || operation < 1)
        {
            cout << "Please Select From 1,2,3 or 4!";
            continue;
        }

        else if (operation == 4)
        {
            cout << "Exiting the program ";
            break;
        }

        else if ((operation == 2 || operation == 3) && numbers.size() == 0)
        {
            cout << "Please First Input The Numbers!";
            continue;
        }
        else
        {
            switch (operation)
            {
            case 1:
                TakeNumbers(numbers);
                break;

            case 2:
                Sort(numbers, sorted);
                break;

            case 3:
                Search(numbers, sorted);
                break;
            }
        }
    }
}
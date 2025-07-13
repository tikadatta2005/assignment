#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int start, int end)
{
    int index = start - 1;
    int pivot = arr[end];

    for (int i = start; i < end; i++)
    { // only till end-1
        if (arr[i] <= pivot)
        {
            index++;
            swap(arr[i], arr[index]);
        }
    }

    // place pivot at correct position
    swap(arr[index + 1], arr[end]);
    return index + 1;
}

void quick(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        int pivotIndex = partition(arr, start, end);

        // Recursively sort left and right parts
        quick(arr, start, pivotIndex - 1);
        quick(arr, pivotIndex + 1, end);
    }
}

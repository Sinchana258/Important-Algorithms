#include <iostream>
using namespace std;

int MinimumEle(int arr[], int size)
{

    int low = 0;
    int high = size - 1;
    while (low < high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] > arr[high])
        { // minimum lies in the right half
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    return arr[low];
}

int main()
{
    int arr[] = {3, 4, 5, 7, 12};
    int size = sizeof(arr) / sizeof(arr[0]);

    int min = MinimumEle(arr, size);
    cout << "minimum ele is " << min << endl;
}
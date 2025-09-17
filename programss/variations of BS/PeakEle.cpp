#include <iostream>
using namespace std;

int PeakEle(int arr[], int size)
{

    int low = 0;
    int high = size - 1;
    while (low < high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] > arr[mid + 1])
        { // peak lies in the left  half
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    return arr[low];
}

int main()
{
    int arr[] = {3, 8, 5, 4, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    int peak = PeakEle(arr, size);
    cout << "Peak ele is " << peak << endl;
}
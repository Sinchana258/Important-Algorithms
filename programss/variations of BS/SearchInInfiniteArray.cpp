#include <iostream>
using namespace std;

int BinarySearch(int arr[], int low, int high, int target)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
        {
            high = mid - 1; // ignoring the right half
        }

        else if (arr[mid] < target)
        {
            low = mid + 1; // ignoring  left half
        }
    }
    return -1; // the target  is not found
}

int SearchInInfiniteArray(int arr[], int target)
{
    int low = 0, high = 1;
    while (arr[high] < target)
    {
        low = high;
        high = high * 2;
    }
    return BinarySearch(arr, low, high, target);
}

int main()
{
    int target = 10;

    int arr[] = {2, 4, 6, 8, 10, 12, 78, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = SearchInInfiniteArray(arr, target);

    if (result != -1)
    {
        cout << "element is found at the index   " << result << endl;
    }
    else
    {
        cout << "element is  not found" << endl;
    }
    return 0;
}

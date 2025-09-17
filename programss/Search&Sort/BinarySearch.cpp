#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int target)
{
    int low = 0, high = size - 1;
    int mid = low + (high - low) / 2;

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

int main()
{
    int target;

    int arr[] = {2, 4, 6, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = BinarySearch(arr, size, 4);

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

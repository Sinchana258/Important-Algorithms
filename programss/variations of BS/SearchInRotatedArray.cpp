#include <iostream>
using namespace std;

int SearchInRotatedArray(int arr[], int size, int target)
{
    int low = 0, high = size - 1;
    int mid = low + (high - low) / 2;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        // check if left  array is sorted
        if (arr[low] <= arr[mid])
        {

            // check if the target lies in left sorted array
            if (target >= arr[low] && target < arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        // right array is sorted
        else
        {
            if (target > arr[mid] && target <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1; // the target  is not found
}

int main()
{
    int target = 2;

    int arr[] = {3, 4, 6, 7, 8, 0, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = SearchInRotatedArray(arr, size, target);

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

#include <iostream>
using namespace std;

int FirstOcc(int arr[], int size, int target)
{
    int low = 0, high = size - 1;
    int result = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            result = mid;
            high = mid - 1;
        }
        else if (arr[mid] > target)
        {
            high = mid - 1; // ignoring the right half
        }

        else if (arr[mid] < target)
        {
            low = mid + 1; // ignoring  left half
        }
    }
    return result; //
}
int main()
{
    int target;
    int arr[] = {2, 4, 4, 4, 9, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = FirstOcc(arr, size, 4);

    if (index != -1)
    {
        cout << " element is found first time at the index  " << index << endl;
    }
    else
    {
        cout << "element is  not found" << endl;
    }
    return 0;
}

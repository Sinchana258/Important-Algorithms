#include <iostream>
using namespace std;

int UpperBound(int arr[], int size, int target)
{
    int low = 0, high = size - 1;
    int result = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] <= target)
        {
            result = mid;
            low = mid + 1;
        }

        else
        {

            high = mid - 1; // ignoring  left half
        }
    }
    return result; //
}
int main()
{

    int arr[] = {0, 2, 4, 4, 5, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    int index = UpperBound(arr, size, target);

    if (index != -1)
    {
        cout << " last element <= " << target << " is " << arr[index] << " found  at the index  " << index << endl;
    }
    else
    {
        cout << "element is  not found" << endl;
    }
    return 0;
}

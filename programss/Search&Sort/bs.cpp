#include <iostream>
using namespace std;

int binSearch(int arr[], int n, int key)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        // int mid = (low + high) / 2;
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }

        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{

    int arr[] = {1, 3, 6, 9, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    int res = binSearch(arr, size, 11);
    if (res != -1)
        cout << "the ele found at the index " << res << endl;
    else
    {
        cout << "ele not found";
    }
    return 0;
}

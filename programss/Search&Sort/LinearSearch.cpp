#include <iostream>
using namespace std;

int linSearch(int arr[], int size, int target)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 4, 1, 10, 8, 101};
    int size = sizeof(arr) / sizeof(arr[0]);

    int res = linSearch(arr, size, 8);

    if (res != -1)
    {
        cout << "the element found at the index :" << res << endl;
    }

    else
    {
        cout << "the element not found";
    }
}
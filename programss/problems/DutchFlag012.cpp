#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void DutchFlag(vector<int> &arr)
{
    int n = arr.size();
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main()
{
    vector<int> arr = {1, 0, 0, 2, 1, 2, 1, 0};
    DutchFlag(arr);
    for (auto it : arr)
    {
        cout << it << " ";
    }
}
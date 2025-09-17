#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSorted(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] >= arr[i - 1])
        {
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 0};
    bool res = isSorted(arr);
    cout << res << endl;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int KthLargest(vector<int> &arr, int k)
{
    sort(arr.begin(), arr.end());
    int n = arr.size();
    return arr[n - k];
}

int main()
{
    vector<int> arr = {1, 2, 4, 7, 8, 0};
    int res = KthLargest(arr, 3);
    cout << res;
}
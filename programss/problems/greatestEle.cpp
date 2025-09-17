#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int greatestEle(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < arr.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > n / 2)
            return arr[i];
    }
    return -1;
}
// optimal method using moore's voting algorithm

int MajorityEleOptimal(vector<int> &arr)
{
    int count = 0, candidate = 0;
    for (int x : arr)
    {
        if (count == 0)
            candidate = x;

        if (x == candidate)
            count++;
        else
            count--;
    }
    return -1;
}

int main()
{
    vector<int> arr = {
        1,
        1,
        1,
        2,
        2,
        1,
        1,
        3,
        1,
        1,
        1,
    };
    int res = greatestEle(arr);
    cout << res;
}
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> TwoSum(vector<int> &arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == target)
                return {i, j};
        }
    }
    return {};
}

vector<int> TwoSum1(vector<int> &arr, int target)
{
    unordered_map<int, int> mp;

    for (int i = 0; i < arr.size(); i++)
    {
        int needed = target - arr[i];
        {
            if (mp.count(needed))
                return {mp[needed], arr[i]};
            mp[arr[i]] = i;
        }
    }
    return {};
}

int main()
{
    vector<int> arr = {4, 5, 2, 0, 6};
    vector<int> ans = TwoSum1(arr, 7);
    for (auto it : ans)
        cout << it << " ";
}
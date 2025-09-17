#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int SubArraySumEqK(vector<int> &arr, int k)
{
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int sum = 0;
        vector<int> tmp;
        for (int j = i; j < arr.size(); j++)
        {
            sum += arr[j];
            tmp.push_back(arr[j]);
            if (sum == k)
            {
                count++;
                cout << "subarrays whose sum  eqauls k : ";
                for (int x : tmp)
                {
                    cout << x << " ";
                }
                cout << endl;
            }
        }
    }
    return count;
}

// optimal soultion using hashmap and prefixSum

int main()
{
    vector<int> arr = {1, 1, 2, 3, 5};
    int ans = SubArraySumEqK(arr, 3); // 2
    cout << "COunt of Solutions: " << ans << endl;
}
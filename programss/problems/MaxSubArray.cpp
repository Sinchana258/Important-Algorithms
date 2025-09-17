#include <iostream>
#include <vector>
using namespace std;

// optimal (kadane algorithm) O(n) time complexity
void maxSubArraySum(vector<int> &arr)
{
    int currentSum = 0;
    int maxi = INT_MIN;
    int start = 0, bestStart = 0, bestEnd = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (currentSum <= 0)
        {
            currentSum = arr[i];
            start = i;
        }
        else
        {
            currentSum += arr[i];
        }

        if (currentSum > maxi)
        {
            maxi = currentSum;
            bestStart = start;
            bestEnd = i;
        }
    }
    cout << "Max sum: " << maxi << "\nSubarray: ";
    for (int k = bestStart; k <= bestEnd; k++)
        cout << arr[k] << " ";
    cout << endl;
}

int kadane(vector<int> &arr)
{
    int currentSum = arr[0], maxSum = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}

// bruteforce O(n^2) time complexity
void maxSum(vector<int> &arr)
{
    int n = arr.size();
    int max_ = INT_MIN;

    int bestStart = 0, bestEnd = 0;

    for (int i = 0; i < n; i++)
    {
        int currentsum = 0;
        for (int j = i; j < n; j++)
        {
            currentsum += arr[j];

            if (currentsum >= max_)
            {
                max_ = currentsum;
                bestStart = i;
                bestEnd = j;
            }
        }
    }
    cout << "maxSum : " << max_ << endl;
    for (int k = bestStart; k <= bestEnd; k++)
        cout << arr[k] << " ";
}
int main()
{
    vector<int> arr = {2, 4, -6, 8, 9, -1, -2};
    maxSubArraySum(arr);
    maxSum(arr);
    // cout << res << endl;
}
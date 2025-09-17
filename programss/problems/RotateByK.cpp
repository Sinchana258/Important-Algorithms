#include <iostream>
#include <vector>
// #include <algorithm>
using namespace std;

//  for right rotate //

// bruteForce (shifting)
void rightRotateBrute(vector<int> &arr, int k)
{
    int n = arr.size();
    k = k % n;

    while (k--)
    {
        int last = arr[n - 1];
        for (int i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = last;
    }
}

//  optimal right rotate
void reverseVec(vector<int> &arr, int start, int end)
{
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rightRotateOptimal(vector<int> &arr, int k)
{
    int n = arr.size();
    k = k % n;

    // Step 1: reverse whole array
    reverseVec(arr, 0, n - 1);

    // Step 2: reverse first k
    reverseVec(arr, 0, k - 1);

    // Step 3: reverse remaining n-k
    reverseVec(arr, k, n - 1);
}

//   for left rotate  //

// bruteForce (shifting)

void leftRotateBrute(vector<int> &arr, int k)
{
    int n = arr.size();
    k = k % n;

    while (k--)
    {
        int first = arr[0];
        for (int i = 0; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = first;
    }
}

// optimal solution using reversal algorithm
void Mreverse(vector<int> &arr, int start, int end)
{
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void LeftrotateOptimal(vector<int> &arr, int k)
{
    k = k % arr.size();

    Mreverse(arr, 0, k - 1);
    Mreverse(arr, k, arr.size() - 1);
    Mreverse(arr, 0, arr.size() - 1);

    // if using algorithm from stl
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.end());
}

int main()
{
    vector<int> arr = {4, 5, 6, 0, 1, 2, 3};
    LeftrotateOptimal(arr, 3);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }
    return 0;
}

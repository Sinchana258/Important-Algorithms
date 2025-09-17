#include <iostream>
#include <vector>
using namespace std;

int MissingNum(vector<int> &arr, int n)
{
    for (int i = 1; i <= n; i++)
    {
        bool ok = false;
        for (int x : arr)
        {
            if (x == i)
            {
                ok = true;
                break;
            }
        }
        if (!ok)
            return i;
    }
    return -1;
}

int MissingOptimal(vector<int> &arr, int n)
{
    int actualSum = 0;
    int total = n * (n + 1) / 2;

    for (int x : arr)
    {
        actualSum += x;
    }
    int missingEle = total - actualSum;
    if (missingEle == 0)
    {
        return -1;
    }
    return missingEle;
}
int main()
{
    vector<int> arr = {1, 2, 4, 5, 6};
    int n = 6;
    // int missingEle = MissingNum(arr, n);
    int missingEle = MissingOptimal(arr, n);
    cout << missingEle << endl;
}
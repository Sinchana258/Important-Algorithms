#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// better method than sorting the array  and then returning the (n-2)th ele if it is not equal to the (n-1)th ele
int ssecondLargest(vector<int> &array)
{

    int large = array[0];
    int secondlarge = array[0];

    for (int i = 0; i < array.size(); i++)
    {
        if (array[i] > large)
            large = array[i];
    }

    for (int i = 0; i < array.size(); i++)
    {
        if (array[i] > secondlarge && array[i] != large)
            secondlarge = array[i];
    }

    return secondlarge;
}

// optimal way to find the second largest element in the array
int slarge(vector<int> &arr)
{
    int large = arr[0];
    int slarge = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > large)
        {
            slarge = large;
            large = arr[i];
        }
        else if (arr[i] < large && arr[i] > slarge)
        {
            slarge = arr[i];
        }
    }
    return slarge;
}

int ssmall(vector<int> &arr)
{
    int small = arr[0];
    int ssmall = INT_MAX;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < small)
        {
            ssmall = small;
            small = arr[i];
        }
        else if (arr[i] > small && arr[i] < ssmall)
        {
            ssmall = arr[i];
        }
    }
    return ssmall;
}

int main()
{
    vector<int> arr = {2, 19, 0, 4, 7, 6, 15};
    int res = ssecondLargest(arr);
    int res1 = slarge(arr);
    int res2 = ssmall(arr);
    cout << res << endl;
    cout << res1 << endl;
    cout << res2 << endl;
}
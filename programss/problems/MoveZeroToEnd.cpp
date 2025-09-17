#include <iostream>
#include <vector>
using namespace std;

// bruteforce
void MoveZero(vector<int> &arr)
{
    vector<int> temp;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != 0)
        {
            temp.push_back(arr[i]);
        }
    }

    for (int i = 0; i < temp.size(); i++)
    {
        arr[i] = temp[i];
    }

    int nonZero = temp.size();
    for (int i = nonZero; i < arr.size(); i++)
    {
        arr[i] = 0;
    }
}

// optimal
void MoveZeroOptimal(vector<int> &arr)
{
    int j = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    for (int i = j + 1; i < arr.size(); i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}
int main()
{
    vector<int> arr = {1, 0, 4, 2, 0, 5, 0, 2};
    // MoveZero(arr);
    MoveZeroOptimal(arr);
    for (auto it : arr)
    {
        cout << it << " ";
    }
}
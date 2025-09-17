#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <unordered_map>

using namespace std;

void DuplicateEle(vector<int> &arr)
{
    vector<int> printed;

    for (int i = 0; i < arr.size(); i++)
    {
        bool isAlreadyPrined = false;
        for (int p : printed)
        {
            if (arr[i] == p)
            {
                isAlreadyPrined = true;
                break;
            }
        }
        if (isAlreadyPrined)
            continue;

        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << " ";
                printed.push_back(arr[i]);
                break;
            }
        }
    }
}

// better (using sorting)
void DupliBetter(vector<int> &arr)
{

    sort(arr.begin(), arr.end());

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] == arr[i - 1])
        {

            if (i = 1 || arr[i] != arr[i - 2])
                cout << arr[i];
        }
    }
}

// optimal solution , using UnOrdered_map;

void duplicateOptimal(vector<int> &arr)
{
    unordered_map<int, int> freq;
    for (int x : arr)
    {
        freq[x]++;
    }
    for (int x : arr)
    {
        if (freq[x] > 1)
        {
            cout << x << " ";
            freq[x] = 0;
        }
    }
}

void duplicateChar(string &S)
{
    vector<int> freq(26, 0);

    for (char c : S)
    {
        if (isalpha(c))
        {
            char lower = tolower(c);
            freq[lower - 'a']++;
        }
    }
    for (char c : S)
    {
        if (isalpha(c))
        {
            char lower = tolower(c);
            if (freq[lower - 'a'] > 1)
            {
                cout << c << " ";
                freq[lower - 'a'] = 0;
            }
        }
    }
}
int main()
{
    vector<int> arr = {1, 3, 1, 2, 4, 3, 4, 4, 6, 0};
    duplicateOptimal(arr); // 1 4
    cout << endl;
    string s = "ProGraMMing";
    duplicateChar(s); // Output: r g M
    return 0;
}
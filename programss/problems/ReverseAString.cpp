#include <iostream>
#include <vector>
using namespace std;

void revString(string S)
{
    int i = 0, j = S.size() - 1;

    while (i < j)
    {
        swap(S[i], S[j]);
        i++;
        j--;
    }

    for (int i = 0; i < S.size(); i++)
    {
        cout << S[i];
    }
}

void revArry(vector<int> &arr)
{
    int i = 0, j = arr.size() - 1;

    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }
}

// reversing a array/string by  manually copying from the end tc=O(n) ,sc=O(n)

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    vector<int> revarr = {};

    for (int i = arr.size() - 1; i >= 0; i--)
    {
        revarr.push_back(arr[i]);
    }

    for (int i = 0; i < revarr.size(); i++)
    {
        cout << revarr[i];
    }
    cout << endl;
    string Str = "boba";

    // using two pointer approach
    revString(Str);
    revArry(arr);
}

// int main()
// {
//     string s = "helloworld";
//     string revS = "";
//     for (int i = s.size() - 1; i >= 0; i--)
//     {
//         revS.push_back(s[i]);
//     }

//     for (int i = 0; i < revS.size(); i++)
//     {
//         cout << revS[i];
//     }
// }

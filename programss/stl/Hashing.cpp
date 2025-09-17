#include <iostream>
#include <unordered_map>
#include <hash_map>
using namespace std;

int main()
{
    /*
    input num of ele:n
    take n ele
    take the number of queries:num
 take num queries
    */

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    int hash[10] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int num;
        cin >> num;
        cout << hash[num] << endl;
    }
}
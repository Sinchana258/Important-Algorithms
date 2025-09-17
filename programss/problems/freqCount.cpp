#include <iostream>
#include <map>
using namespace std;

void freqCount(const string &S)
{
    map<char, int> freq; // sorted map
    for (char c : S)     // iterate by char
    {
        freq[c]++; // increment frequency
    }

    for (auto &x : freq)
    {
        cout << x.first << " : " << x.second << endl;
    }
}

int main()
{
    string S = "helloworld";
    freqCount(S);
    return 0;
}

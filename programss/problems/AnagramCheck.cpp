#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isAnagram(string S, string T)
{
    if (S.size() != T.size())
        return false;

    sort(S.begin(), S.end());
    sort(T.begin(), T.end());

    return S == T;
}

// opitmal solution
bool isAnagramOpti(string S, string T)
{
    if (S.size() != T.size())
        return false;

    vector<int> freq(26, 0);

    for (char c : S)
    {
        freq[c - 'a']++;
    }
    for (char c : T)
    {
        freq[c - 'a']--;
        if (freq[c - 'a'] < 0)
            return false;
    }
    return true;
}

int main()
{

    if (isAnagramOpti("silent", "liste"))

        // if (isAnagram)

        cout << "anagram";

    else

        cout
            << "not anagram";

    return 0;
}

#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

// Optimal (Two pointers) ,Check start & end moving inward.
string palindrome(string S)
{
    int i = 0, j = S.size() - 1;
    while (i < j)
    {
        if (S[i] != S[j])
            return "FALSE";
        i++;
        j--;
    }

    return "TRUE";
}
// using Brute Force-Reverse string & compare
string palin(string S)
{
    string rev = "";
    for (int i = S.size() - 1; i >= 0; i--)
    {
        rev.push_back(S[i]);
    }
    if (S == rev)
        return "true";
    else
    {
        return "false";
    }
}

int main()
{
    string S = "Bob";
    for (char &c : S)
    {
        c = toupper(c);
    }

    string ANS = palin(S);
    cout << ANS;
}
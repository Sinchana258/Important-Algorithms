#include <iostream>
#include <unordered_map>
using namespace std;

int RomanToInt(string s)
{
    unordered_map<char, int> values = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

    int total = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (i + 1 < s.size() && values[s[i]] < values[s[i + 1]])
        {
            total -= values[s[i]];
        }
        else
        {
            total += values[s[i]];
        }
    }

    return total;
}

int main()
{
    string roman = "XXX"; // 1944
    cout << "Integer value of " << roman << " is: " << RomanToInt(roman) << endl;
    return 0;
}

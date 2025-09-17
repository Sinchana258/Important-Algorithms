#include <iostream>
#include <vector>
using namespace std;

string IntTORoman(int num)
{
    vector<pair<string, int>> NUmericalSymbol = {{"M", 1000}, {"CM", 900}, {"D", 500}, {"CD", 400}, {"C", 100}, {"XC", 90}, {"L", 50}, {"XL", 40}, {"X", 10}, {"IX", 9}, {"V", 5}, {"IV", 4}, {"I", 1}};

    string Roman = "";
    while (num > 0)
    {
        for (int i = 0; i < NUmericalSymbol.size(); i++)
        {
            while (num >= NUmericalSymbol[i].second)
            {
                Roman += NUmericalSymbol[i].first;
                num -= NUmericalSymbol[i].second;
            }
        }
    }
    return Roman;
}

int main()
{
    string res = IntTORoman(1520);
    cout << res << endl;
    return 0;
}
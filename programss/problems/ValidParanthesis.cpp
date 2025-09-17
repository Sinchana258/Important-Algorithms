#include <iostream>
#include <vector>
#include <stack>
using namespace std;

string isValid(string S)
{
    stack<char> st;
    for (char c : S)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            st.push(c);
        }
        else
        {
            if (st.empty())
                return "false";

            char tos = st.top();
            st.pop();

            if ((c == ')' && tos != '(') || (c == '}' && tos != '{') || (c == ']') && tos != '[')
                return "false";
        }
    }
    if (st.empty())
        return "true";
}

int main()
{
    string S = "(({[]}))";
    string S1 = "{{([])}}";
    string ans = isValid(S1);
    cout << ans << endl;
    return 0;
}
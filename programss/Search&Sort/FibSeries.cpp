#include <iostream>
#include <vector>
using namespace std;

vector<int> Series(int n)
{
    vector<int> fib(n + 1);
    fib[0] = 0;
    if (n >= 1)
        fib[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        fib[i] = (fib[i - 1] + fib[i - 2]);
    }
    return fib;
}

int main()
{
    int n;
    cout << "enter the number: " << endl;
    cin >> n;
    vector<int> result = Series(n);
    for (int x : result)
    {
        cout << x << " ";
    }
    cout << "\n";
    return 0;
}

#include <iostream>
using namespace std;

int fibI(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
    {
        int a = 0, b = 1;
        // cout << a << " ";
        // if (n > 1)
        // cout << b << " ";
        int next;
        for (int i = 2; i <= n; i++)
        {
            next = a + b;
            // cout << next << " ";
            a = b;
            b = next;
        }
        return next;
    }
}

int main()
{
    int num = 4;
    int fibnum = fibI(num);
    cout << "the fib of " << num << " is " << fibnum << " ";
}

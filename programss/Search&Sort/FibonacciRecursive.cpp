#include <iostream>
using namespace std;

int fibR(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fibR(n - 1) + fibR(n - 2);
}
int main()
{
    int num = 2;
    int factnum = fibR(num);
    cout << "the fib of the number " << num << " is " << factnum << endl;
}
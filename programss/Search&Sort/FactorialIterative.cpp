#include <iostream>
using namespace std;

long long factI(int n)

{
    long long result = 1;
    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int num = 10;
    int factnum = factI(num);
    cout << "the factorial of the number " << num << " is " << factnum << endl;
}